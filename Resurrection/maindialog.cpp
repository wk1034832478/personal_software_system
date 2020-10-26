#include <QMessageBox>

#include "maindialog.h"
#include "ui_maindialog.h"
#include "datatype.h"
#include "applicationcontextmanager.h"
#include "pluginloader.h"
#include "resurrectiondbplugin.h"
#include "accountwidget.h"

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);

    // 初始化ListWidget，该Widget控制右侧页面的内容
    // 个人信息板块，修改个人账户名
    this->ui->funList->insertItem(0, "个人信息");
    // 设置第一个面板的输入框内容
    ApplicationContext* context = ApplicationContextManager::getContext();
    this->ui->userId->setText(QString::number(context->user->id));
    this->ui->username->setText(context->user->username);
    this->ui->passwd->setText(context->user->passwd);
    this->ui->passwd2->setText(context->user->passwd);
    this->ui->name->setText(context->user->name);

    // 添加增加用户面板
    this->ui->funList->addItem("添加用户");

    // 添加账户信息widget
    this->ui->funList->addItem("账户信息");
    this->ui->funWidgets->addWidget(new AccountWidget);

    // 页面跳转信号
    connect(this->ui->funList, SIGNAL(currentRowChanged(int)), this->ui->funWidgets, SLOT(setCurrentIndex(int)));

    // 设置窗口标题
    QString title = "Resurrection, 欢迎您， " + context->user->name;
    setWindowTitle(title);
}

MainDialog::~MainDialog()
{
    delete ui;
}

void MainDialog::on_updateUserBtn_clicked()
{
    // 更新用户信息
    PLuginLoader* loader = PLuginLoader::GetLoader();
    ResurrectionDbPlugin* plugin =(ResurrectionDbPlugin*)loader->GetPluginByName("db");
    UserDB* userDb = plugin->GetUserDb();

    RUser user;
    user.id = this->ui->userId->text().toInt();
    user.username = this->ui->username->text();
    user.passwd = this->ui->passwd->text();
    user.name = this->ui->name->text();

    if (userDb->updateUser(&user)) {
        QMessageBox::information(0, "提示", "更新成功");
    } else {
        QMessageBox::information(0, "提示", "更新失败");
    }

    // 更改本地用户信息
    ApplicationContextManager::updateUserInfo(user);
}

void MainDialog::on_pushButton_clicked()
{

}

void MainDialog::on_addUserBtn_clicked()
{
    this->ui->addUserBtn->setDisabled(true);
    RUser user;
    user.username = this->ui->username_2->text();
    user.passwd = this->ui->passwd_2->text();
    user.name = this->ui->name_2->text();

    // 更新用户信息
    PLuginLoader* loader = PLuginLoader::GetLoader();
    ResurrectionDbPlugin* plugin =(ResurrectionDbPlugin*)loader->GetPluginByName("db");
    UserDB* userDb = plugin->GetUserDb();

    if (userDb->addUser(&user)) {
        QMessageBox::information(0, "提示", "添加成功！");
    } else {
        QMessageBox::information(0, "提示", "账户已被使用！");
    }
    this->ui->addUserBtn->setDisabled(false);
}
