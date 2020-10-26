#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "resurrectiondbplugin.h"

#include <QMessageBox>
#include <QThread>
#include <QLibrary>

#include "pluginloader.h"
#include "maindialog.h"
#include "windowmanage.h"
#include "applicationcontextmanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QThread::sleep(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}


// 定义库函数
// typedef ResurrectionDbPlugin* (*GetPlugin)(QNetworkAccessManager*);

void MainWindow::on_pushButton_clicked()
{
    PLuginLoader* loader = PLuginLoader::GetLoader();
    ResurrectionDbPlugin* plugin =(ResurrectionDbPlugin*)loader->GetPluginByName("db");
    UserDB* userDb = plugin->GetUserDb();
    qDebug() << (userDb == NULL);
    RUser* user = userDb->selectUserByUsernameAndPasswd(this->ui->username->text(), this->ui->passwd->text());
    if (user) {
        qDebug() << this->ui->passwd->text() << "用户姓名：" << user->name;
        // 设置环境用户
        ApplicationContext* context = ApplicationContextManager::getContext();
        context->user = user;
        QMessageBox::information(0, "提示", "登录成功！");
        // 显示主界面窗口
        WindowManage::GetWM()->OpenDefaultDialog("main");
        // 隐藏登录窗口
        this->hide();
    } else {
        QMessageBox::information(0, "提示", "密码错误");
    }
}
