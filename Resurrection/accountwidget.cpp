#include <QStandardItemModel>
#include <QMessageBox>

#include "accountwidget.h"
#include "ui_accountwidget.h"
#include "pluginloader.h"
#include "resurrectiondbplugin.h"
#include "applicationcontextmanager.h"

AccountWidget::AccountWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AccountWidget)
{
    ui->setupUi(this);
    // 隐藏序号
    ui->accountDataTable->verticalHeader()->hide();

    // 设置头
    accountDataModel.setColumnCount(6);
    accountDataModel.setHeaderData(0, Qt::Horizontal, "ID");
    accountDataModel.setHeaderData(1, Qt::Horizontal, "账户名");
    accountDataModel.setHeaderData(2, Qt::Horizontal, "密码");
    accountDataModel.setHeaderData(3, Qt::Horizontal, "手机号");
    accountDataModel.setHeaderData(4, Qt::Horizontal, "邮箱");
    accountDataModel.setHeaderData(5, Qt::Horizontal, "平台");

    //排序功能
    ui->accountDataTable->setModel(&accountDataModel);
    ui->accountDataTable->setSortingEnabled(true);
    // 设置宽度
    int width = ui->accountDataTable->width();
    ui->accountDataTable->setColumnWidth(0, width / 6);
    ui->accountDataTable->setColumnWidth(1, width / 6);
    ui->accountDataTable->setColumnWidth(2, width / 6);
    ui->accountDataTable->setColumnWidth(3, width / 6);
    ui->accountDataTable->setColumnWidth(4, width / 6);
    ui->accountDataTable->setColumnWidth(5, width / 6);
}

AccountWidget::~AccountWidget()
{
    delete ui;
}

void AccountWidget::on_pushButton_clicked()
{
    // 更新用户信息
    PLuginLoader* loader = PLuginLoader::GetLoader();
    ResurrectionDbPlugin* plugin =(ResurrectionDbPlugin*)loader->GetPluginByName("db");
    AccountDB* accountDb = plugin->GetAccountDb();

    // 查询条件
    RAccount searchCond;
    searchCond.username = this->ui->username->text();
    searchCond.email = this->ui->email->text();
    searchCond.platform = this->ui->platform->text();
    searchCond.bindPhone = this->ui->bindPhone->text();
    searchCond.userId = ApplicationContextManager::getContext()->user->id;

    QList<RAccount> accounts = accountDb->selectAccounts(searchCond);

    updateModel(accounts);
}

void AccountWidget::updateModel(QList<RAccount> accounts) {
    accountDataModel.setRowCount(accounts.length());

    for (int i = 0; i < accounts.length(); ++i) {
        RAccount a = accounts[i];
        accountDataModel.setItem(i, 0, new QStandardItem(QString::number(a.id)));
        accountDataModel.setItem(i, 1, new QStandardItem(a.username));
        accountDataModel.setItem(i, 2, new QStandardItem(a.passwd));
        accountDataModel.setItem(i, 3, new QStandardItem(a.bindPhone));
        accountDataModel.setItem(i, 4, new QStandardItem(a.email));
        accountDataModel.setItem(i, 5, new QStandardItem(a.platform));
    }

    // 更新数据
    ui->accountDataTable->update();
    ui->count->setText(QString::number(accountDataModel.rowCount()));
}

void AccountWidget::on_addBtn_clicked()
{
    // 设置按钮不可用
    ui->addBtn->setDisabled(true);

    // 添加账户信息
    PLuginLoader* loader = PLuginLoader::GetLoader();
    ResurrectionDbPlugin* plugin =(ResurrectionDbPlugin*)loader->GetPluginByName("db");
    AccountDB* accountDb = plugin->GetAccountDb();//plugin->GetAccountDb();

    // 添加对象
    RAccount ac;
    ac.id  = -1;
    ac.username = this->ui->username_2->text();
    ac.email = this->ui->email_2->text();
    ac.platform = this->ui->platform_2->text();
    ac.bindPhone = this->ui->bindPhone_2->text();
    ac.userId = ApplicationContextManager::getContext()->user->id;
    ac.passwd = this->ui->passwd_2->text();

    accountDb->addRaccount(&ac);
    // 判断添加是否成功！
    if (ac.id != -1) {
        QMessageBox::information(0, "提示", "添加成功");
    } else {
        QMessageBox::information(0, "提示", "添加失败，请稍后再次尝试！");
    }

    // 添加到列表当中来
    int index = accountDataModel.rowCount();
    accountDataModel.setItem(index, 0, new QStandardItem(QString::number(ac.id)));
    accountDataModel.setItem(index, 1, new QStandardItem(ac.username));
    accountDataModel.setItem(index, 2, new QStandardItem(ac.passwd));
    accountDataModel.setItem(index, 3, new QStandardItem(ac.bindPhone));
    accountDataModel.setItem(index, 4, new QStandardItem(ac.email));
    accountDataModel.setItem(index, 5, new QStandardItem(ac.platform));

    // 更新数据
    ui->accountDataTable->update();
    ui->count->setText(QString::number(accountDataModel.rowCount()));

    // 释放按钮
    ui->addBtn->setDisabled(false);
}
