#include "windowmanage.h"
#include "maindialog.h"


WindowManage* WindowManage::wm = NULL;

WindowManage::WindowManage(QObject *parent) : QObject(parent)
{
    // 主对话框
    defaultDialogs.insert("main", new MainDialog);
}

void WindowManage::OpenDefaultDialog(QString name) {
    QDialog* dlg = defaultDialogs.value(name);
    dlg->show();
}

