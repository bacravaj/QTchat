#include "../sources/startscreen.h"
#include "ui_startscreen.h"

StartScreen::StartScreen(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::StartScreen)
{
  ui->setupUi(this);

  connect(ui->loginWidget, &LoginForm::registrationRequested, this, &StartScreen::setRegistrarionForm);
  connect(ui->loginWidget, &LoginForm::accepted, this, &StartScreen::onLoggedIn);
  connect(ui->loginWidget, &LoginForm::rejected, this, &StartScreen::onRejectRequested);
  connect(ui->regWidget, &RegistrationForm::loginRequested, this, &StartScreen::setLoginForm);
  connect(ui->regWidget, &RegistrationForm::accepted, this, &StartScreen::onLoggedIn);
  connect(ui->regWidget, &RegistrationForm::rejected, this, &StartScreen::onRejectRequested);
}

StartScreen::~StartScreen()
{
  delete ui;
}

void StartScreen::setLoginForm()
{
  ui->stackedWidget->setCurrentIndex(0);
}

void StartScreen::setRegistrarionForm()
{
  ui->stackedWidget->setCurrentIndex(1);
}

void StartScreen::onLoggedIn(uint userId, QString userName)
{
  m_userId = userId;
  m_userName = userName;
  accept();
}

void StartScreen::onRejectRequested()
{
  reject();
}


QString StartScreen::userName() const
{
  return m_userName;
}

int StartScreen::userId() const
{
  return m_userId;
}

