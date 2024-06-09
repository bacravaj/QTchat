#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>
#include <memory>
#include "../sources/Database.h"
#include <QMessageBox>

namespace Ui {
class LoginForm;
}

class LoginForm : public QWidget
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = nullptr);
    ~LoginForm();
signals:
    void registrationRequested();
    void accepted(int userId, QString userName);
    void rejected();
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_registrarionPushButton_clicked();

private:
    Ui::LoginForm *ui;
};

#endif // LOGINFORM_H
