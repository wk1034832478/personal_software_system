/********************************************************************************
** Form generated from reading UI file 'accountwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTWIDGET_H
#define UI_ACCOUNTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountWidget
{
public:
    QLineEdit *username;
    QLabel *label;
    QLineEdit *email;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *platform;
    QLabel *label_4;
    QLineEdit *bindPhone;
    QPushButton *pushButton;
    QTableView *accountDataTable;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *count;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *username_2;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *platform_2;
    QLineEdit *passwd_2;
    QLabel *label_10;
    QLineEdit *email_2;
    QLineEdit *bindPhone_2;
    QLabel *label_11;
    QPushButton *addBtn;

    void setupUi(QWidget *AccountWidget)
    {
        if (AccountWidget->objectName().isEmpty())
            AccountWidget->setObjectName(QString::fromUtf8("AccountWidget"));
        AccountWidget->resize(1162, 554);
        username = new QLineEdit(AccountWidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(120, 30, 113, 30));
        username->setMinimumSize(QSize(0, 20));
        username->setMaximumSize(QSize(16777215, 30));
        label = new QLabel(AccountWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 72, 30));
        label->setMinimumSize(QSize(0, 20));
        label->setMaximumSize(QSize(16777215, 30));
        email = new QLineEdit(AccountWidget);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(340, 30, 113, 30));
        email->setMinimumSize(QSize(0, 20));
        email->setMaximumSize(QSize(16777215, 30));
        label_2 = new QLabel(AccountWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 30, 72, 30));
        label_2->setMinimumSize(QSize(0, 20));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_3 = new QLabel(AccountWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(480, 30, 72, 30));
        label_3->setMinimumSize(QSize(0, 20));
        label_3->setMaximumSize(QSize(16777215, 30));
        platform = new QLineEdit(AccountWidget);
        platform->setObjectName(QString::fromUtf8("platform"));
        platform->setGeometry(QRect(570, 30, 113, 30));
        platform->setMinimumSize(QSize(0, 20));
        platform->setMaximumSize(QSize(16777215, 30));
        label_4 = new QLabel(AccountWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(720, 30, 72, 30));
        label_4->setMinimumSize(QSize(0, 20));
        label_4->setMaximumSize(QSize(16777215, 30));
        bindPhone = new QLineEdit(AccountWidget);
        bindPhone->setObjectName(QString::fromUtf8("bindPhone"));
        bindPhone->setGeometry(QRect(810, 30, 113, 30));
        bindPhone->setMinimumSize(QSize(0, 20));
        bindPhone->setMaximumSize(QSize(16777215, 30));
        pushButton = new QPushButton(AccountWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 90, 93, 31));
        accountDataTable = new QTableView(AccountWidget);
        accountDataTable->setObjectName(QString::fromUtf8("accountDataTable"));
        accountDataTable->setGeometry(QRect(20, 130, 1121, 291));
        accountDataTable->setTextElideMode(Qt::ElideMiddle);
        accountDataTable->setGridStyle(Qt::DotLine);
        layoutWidget = new QWidget(AccountWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 94, 116, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        count = new QLabel(layoutWidget);
        count->setObjectName(QString::fromUtf8("count"));

        horizontalLayout->addWidget(count);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(AccountWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 440, 72, 30));
        label_7->setMinimumSize(QSize(0, 20));
        label_7->setMaximumSize(QSize(16777215, 30));
        username_2 = new QLineEdit(AccountWidget);
        username_2->setObjectName(QString::fromUtf8("username_2"));
        username_2->setGeometry(QRect(90, 440, 113, 30));
        username_2->setMinimumSize(QSize(0, 20));
        username_2->setMaximumSize(QSize(16777215, 30));
        label_8 = new QLabel(AccountWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(210, 440, 41, 30));
        label_8->setMinimumSize(QSize(0, 20));
        label_8->setMaximumSize(QSize(16777215, 30));
        label_9 = new QLabel(AccountWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(540, 440, 72, 30));
        label_9->setMinimumSize(QSize(0, 20));
        label_9->setMaximumSize(QSize(16777215, 30));
        platform_2 = new QLineEdit(AccountWidget);
        platform_2->setObjectName(QString::fromUtf8("platform_2"));
        platform_2->setGeometry(QRect(580, 440, 113, 30));
        platform_2->setMinimumSize(QSize(0, 20));
        platform_2->setMaximumSize(QSize(16777215, 30));
        passwd_2 = new QLineEdit(AccountWidget);
        passwd_2->setObjectName(QString::fromUtf8("passwd_2"));
        passwd_2->setGeometry(QRect(250, 440, 113, 30));
        passwd_2->setMinimumSize(QSize(0, 20));
        passwd_2->setMaximumSize(QSize(16777215, 30));
        label_10 = new QLabel(AccountWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(370, 440, 72, 30));
        label_10->setMinimumSize(QSize(0, 20));
        label_10->setMaximumSize(QSize(16777215, 30));
        email_2 = new QLineEdit(AccountWidget);
        email_2->setObjectName(QString::fromUtf8("email_2"));
        email_2->setGeometry(QRect(420, 440, 113, 30));
        email_2->setMinimumSize(QSize(0, 20));
        email_2->setMaximumSize(QSize(16777215, 30));
        bindPhone_2 = new QLineEdit(AccountWidget);
        bindPhone_2->setObjectName(QString::fromUtf8("bindPhone_2"));
        bindPhone_2->setGeometry(QRect(760, 440, 113, 30));
        bindPhone_2->setMinimumSize(QSize(0, 20));
        bindPhone_2->setMaximumSize(QSize(16777215, 30));
        label_11 = new QLabel(AccountWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(710, 440, 72, 30));
        label_11->setMinimumSize(QSize(0, 20));
        label_11->setMaximumSize(QSize(16777215, 30));
        addBtn = new QPushButton(AccountWidget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(20, 490, 93, 28));

        retranslateUi(AccountWidget);

        QMetaObject::connectSlotsByName(AccountWidget);
    } // setupUi

    void retranslateUi(QWidget *AccountWidget)
    {
        AccountWidget->setWindowTitle(QCoreApplication::translate("AccountWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("AccountWidget", "\350\264\246\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("AccountWidget", "email", nullptr));
        label_3->setText(QCoreApplication::translate("AccountWidget", "\345\271\263\345\217\260", nullptr));
        label_4->setText(QCoreApplication::translate("AccountWidget", "\346\211\213\346\234\272\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("AccountWidget", "\346\237\245\350\257\242", nullptr));
        label_5->setText(QCoreApplication::translate("AccountWidget", "\345\205\261", nullptr));
        count->setText(QString());
        label_6->setText(QCoreApplication::translate("AccountWidget", "\346\235\241", nullptr));
        label_7->setText(QCoreApplication::translate("AccountWidget", "\350\264\246\346\210\267\345\220\215", nullptr));
        label_8->setText(QCoreApplication::translate("AccountWidget", "\345\257\206\347\240\201", nullptr));
        label_9->setText(QCoreApplication::translate("AccountWidget", "\345\271\263\345\217\260", nullptr));
        label_10->setText(QCoreApplication::translate("AccountWidget", "email", nullptr));
        bindPhone_2->setText(QString());
        label_11->setText(QCoreApplication::translate("AccountWidget", "\346\211\213\346\234\272\345\217\267", nullptr));
        addBtn->setText(QCoreApplication::translate("AccountWidget", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountWidget: public Ui_AccountWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTWIDGET_H
