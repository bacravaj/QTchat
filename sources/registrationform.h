#ifndef REGISTRATIONFORM_H
#define REGISTRATIONFORM_H

#include <QWidget>
#include <memory>
#include "../sources/Database.h"
#include "../sources/dbsimulation.h"
#include <QMessageBox>

namespace Ui {
class RegistrationForm;
}

class RegistrationForm : public QWidget
{
    Q_OBJECT

public:
    explicit RegistrationForm(QWidget *parent = nullptr);
    ~RegistrationForm();
signals:
    void loginRequested();
    void accepted(int userId, QString userName);
    void rejected();
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_loginPushButton_clicked();

private:
    Ui::RegistrationForm *ui;
};

#endif // REGISTRATIONFORM_H
