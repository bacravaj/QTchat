#include "../sources/registrationform.h"
#include "ui_registrationform.h"
#include <QMessageBox>

RegistrationForm::RegistrationForm(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::RegistrationForm)
{

  ui->setupUi(this);
}

RegistrationForm::~RegistrationForm()
{
  delete ui;
}


void RegistrationForm::on_loginPushButton_clicked()
{
  emit loginRequested();
}

void RegistrationForm::on_buttonBox_accepted()
{
  if(ui->passwordEdit->text() !=
     ui->confirmEdit->text())
  {
    QMessageBox::critical(this,
                          tr("Error"),
                          tr("Passwords not match"));
    return;
  }
  if(DBsimulation::isBanned(ui->loginEdit->text().toStdString())){
  QMessageBox::critical(this,
                        tr("Error"),
                        tr("This user is banned"));
  return;
  }
  auto userId = DBsimulation::getDbPtr()->addUser(ui->loginEdit->text().toStdString(),
                                 ui->passwordEdit->text().toStdString());
  switch(userId)
  {
  case -1:
    QMessageBox::critical(this,
                          tr("Error"),
                          tr("Incorrect login"));
    return;
  case -2:
    QMessageBox::critical(this,
                          tr("Error"),
                          tr("Login alredy exists"));
    return;
  default:
    emit accepted(userId, ui->loginEdit->text());
  }

}

void RegistrationForm::on_buttonBox_rejected()
{
  emit rejected();
}
