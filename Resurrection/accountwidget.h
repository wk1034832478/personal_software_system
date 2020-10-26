#ifndef ACCOUNTWIDGET_H
#define ACCOUNTWIDGET_H

#include <QStandardItemModel>
#include <QWidget>
#include "datatype.h"

namespace Ui {
class AccountWidget;
}

class AccountWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AccountWidget(QWidget *parent = nullptr);
    ~AccountWidget();

private slots:
    void on_pushButton_clicked();
    void on_addBtn_clicked();

private:
    Ui::AccountWidget *ui;
    QStandardItemModel accountDataModel;

    void updateModel(QList<RAccount>);
};

#endif // ACCOUNTWIDGET_H
