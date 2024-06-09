#include "../sources/loginform.h"
#include "ui_loginform.h"
#include <QMessageBox>
#include "../sources/dbsimulation.h"

LoginForm::LoginForm(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::LoginForm)
{
  ui->setupUi(this);
}

LoginForm::~LoginForm()
{
  delete ui;
}


void LoginForm::on_buttonBox_accepted()
{
  if(DBsimulation::isBanned(ui->loginEdit->text().toStdString())){
      QMessageBox::critical(this,
                            tr("Error"),
                            tr("User is banned"));
      return;
  }

  auto userId = DBsimulation::getDbPtr()->checkPassword(ui->loginEdit->text().toStdString(),
                                       ui->passwordEdit->text().toStdString());
  if(userId == -1)
  {
    QMessageBox::critical(this,
                          tr("Error"),
                          tr("Password is wrong"));
    return;
  }

  emit accepted(userId, ui->loginEdit->text());
}

void LoginForm::on_buttonBox_rejected()
{
  emit rejected();
}

void LoginForm::on_registrarionPushButton_clicked()
{
  emit registrationRequested();
}
