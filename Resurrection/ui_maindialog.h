/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QStackedWidget *funWidgets;
    QWidget *useFun;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *userId;
    QLabel *label_2;
    QLineEdit *username;
    QLabel *label_3;
    QLineEdit *passwd;
    QLabel *label_4;
    QLineEdit *passwd2;
    QLabel *label_5;
    QLineEdit *name;
    QPushButton *updateUserBtn;
    QWidget *page_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLineEdit *username_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *passwd_2;
    QLineEdit *passwd2_2;
    QLineEdit *name_2;
    QPushButton *addUserBtn;
    QListWidget *funList;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QString::fromUtf8("MainDialog"));
        MainDialog->resize(1359, 631);
        funWidgets = new QStackedWidget(MainDialog);
        funWidgets->setObjectName(QString::fromUtf8("funWidgets"));
        funWidgets->setGeometry(QRect(190, -20, 1151, 621));
        useFun = new QWidget();
        useFun->setObjectName(QString::fromUtf8("useFun"));
        formLayoutWidget = new QWidget(useFun);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 20, 601, 341));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout->setVerticalSpacing(20);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 40));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setInputMethodHints(Qt::ImhNone);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        userId = new QLineEdit(formLayoutWidget);
        userId->setObjectName(QString::fromUtf8("userId"));
        userId->setEnabled(false);
        userId->setMinimumSize(QSize(0, 40));

        formLayout->setWidget(0, QFormLayout::FieldRole, userId);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 40));
        label_2->setLayoutDirection(Qt::RightToLeft);
        label_2->setInputMethodHints(Qt::ImhNone);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        username = new QLineEdit(formLayoutWidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setEnabled(false);
        username->setMinimumSize(QSize(0, 40));

        formLayout->setWidget(1, QFormLayout::FieldRole, username);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 40));
        label_3->setLayoutDirection(Qt::RightToLeft);
        label_3->setInputMethodHints(Qt::ImhNone);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        passwd = new QLineEdit(formLayoutWidget);
        passwd->setObjectName(QString::fromUtf8("passwd"));
        passwd->setMinimumSize(QSize(0, 40));
        passwd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passwd);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 40));
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setInputMethodHints(Qt::ImhNone);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        passwd2 = new QLineEdit(formLayoutWidget);
        passwd2->setObjectName(QString::fromUtf8("passwd2"));
        passwd2->setMinimumSize(QSize(0, 40));
        passwd2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, passwd2);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 40));
        label_5->setLayoutDirection(Qt::RightToLeft);
        label_5->setInputMethodHints(Qt::ImhNone);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        name = new QLineEdit(formLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setMinimumSize(QSize(0, 40));

        formLayout->setWidget(4, QFormLayout::FieldRole, name);

        updateUserBtn = new QPushButton(useFun);
        updateUserBtn->setObjectName(QString::fromUtf8("updateUserBtn"));
        updateUserBtn->setGeometry(QRect(50, 370, 141, 51));
        funWidgets->addWidget(useFun);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        formLayoutWidget_2 = new QWidget(page_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(30, 30, 551, 231));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        username_2 = new QLineEdit(formLayoutWidget_2);
        username_2->setObjectName(QString::fromUtf8("username_2"));
        username_2->setMinimumSize(QSize(0, 40));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, username_2);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        passwd_2 = new QLineEdit(formLayoutWidget_2);
        passwd_2->setObjectName(QString::fromUtf8("passwd_2"));
        passwd_2->setMinimumSize(QSize(0, 40));
        passwd_2->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passwd_2);

        passwd2_2 = new QLineEdit(formLayoutWidget_2);
        passwd2_2->setObjectName(QString::fromUtf8("passwd2_2"));
        passwd2_2->setMinimumSize(QSize(0, 40));
        passwd2_2->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, passwd2_2);

        name_2 = new QLineEdit(formLayoutWidget_2);
        name_2->setObjectName(QString::fromUtf8("name_2"));
        name_2->setMinimumSize(QSize(0, 40));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, name_2);

        addUserBtn = new QPushButton(page_2);
        addUserBtn->setObjectName(QString::fromUtf8("addUserBtn"));
        addUserBtn->setGeometry(QRect(30, 280, 93, 28));
        funWidgets->addWidget(page_2);
        funList = new QListWidget(MainDialog);
        funList->setObjectName(QString::fromUtf8("funList"));
        funList->setGeometry(QRect(0, 1, 201, 631));

        retranslateUi(MainDialog);

        funWidgets->setCurrentIndex(0);
        funList->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QCoreApplication::translate("MainDialog", "\346\254\242\350\277\216\346\235\245\345\210\260Resurrection!", nullptr));
        label->setText(QCoreApplication::translate("MainDialog", "\347\224\250\346\210\267id", nullptr));
        label_2->setText(QCoreApplication::translate("MainDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("MainDialog", "\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("MainDialog", "\345\247\223\345\220\215", nullptr));
        updateUserBtn->setText(QCoreApplication::translate("MainDialog", "\344\277\256\346\224\271", nullptr));
        label_6->setText(QCoreApplication::translate("MainDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_7->setText(QCoreApplication::translate("MainDialog", "\345\257\206\347\240\201", nullptr));
        label_8->setText(QCoreApplication::translate("MainDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_9->setText(QCoreApplication::translate("MainDialog", "\345\247\223\345\220\215", nullptr));
        addUserBtn->setText(QCoreApplication::translate("MainDialog", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
