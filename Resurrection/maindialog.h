#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>

namespace Ui {
class MainDialog;
}

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MainDialog(QWidget *parent = nullptr);
    ~MainDialog();

private slots:
    void on_updateUserBtn_clicked();

    void on_pushButton_clicked();

    void on_addUserBtn_clicked();

private:
    Ui::MainDialog *ui;
};

#endif // MAINDIALOG_H
