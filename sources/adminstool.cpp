#include "../sources/adminstool.h"
#include "ui_adminstool.h"
#include "../sources/mainwindow.h"
#include <QDialog>
#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QListWidget>
#include <QTimer>


AdminsTool::AdminsTool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminsTool)
{

    qApp->setStyleSheet("QWidget {background-color: green; color: white}\n"
                        "QPushButton {background-color: #145313; color: white}\n"
                        "QMenuBar {background-color: #145313; color: white}\n"
                        "QTextBrowser {background-color: white; color: black}\n"
                        "QLineEdit {background-color: white; color: black}\n"
                        "QListWidget {background-color: white; color: black}\n");
    ui->setupUi(this);
    ++MainWindow::kInstanceCount;
    timer = new QTimer(this);
    _con = connect(timer, &QTimer::timeout, this, &AdminsTool::updatePublicChat);
    timer->start(10);
}

AdminsTool::~AdminsTool()
{
    --MainWindow::kInstanceCount;
    delete ui;
}

AdminsTool *AdminsTool::CreateAdminWindow()
{
    ++MainWindow::kInstanceCount;
    auto w = new AdminsTool();
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setWindowTitle("Administraros's tool");
    w->show();
    return w;
}

void AdminsTool::on_firstUserPushButton_clicked()
{
    QDialog dial(this);
    dial.setModal(true);
    auto l = new QVBoxLayout();
    dial.setLayout(l);
    auto userListWgt = new QListWidget(&dial);
    l->addWidget(userListWgt);
    auto buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, &dial);
    l->addWidget(buttonBox);

    connect(buttonBox, &QDialogButtonBox::accepted, &dial, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, &dial, &QDialog::reject);

    auto userList = DBsimulation::getDbPtr()->getUserList();
    for(auto user : userList)
    {
      userListWgt->addItem(QString::fromStdString(user));
    }

    userListWgt->setCurrentRow(0);

    auto result = dial.exec();

    if(result == QDialog::Accepted &&
       userListWgt->currentItem())
    {
      ui->firstUserLineEdit->setText(userListWgt->currentItem()->text());
    }
}

void AdminsTool::on_secondUserPushButton_clicked()
{
    QDialog dial(this);
    dial.setModal(true);
    auto l = new QVBoxLayout();
    dial.setLayout(l);
    auto userListWgt = new QListWidget(&dial);
    l->addWidget(userListWgt);
    auto buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, &dial);
    l->addWidget(buttonBox);

    connect(buttonBox, &QDialogButtonBox::accepted, &dial, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, &dial, &QDialog::reject);

    auto userList = DBsimulation::getDbPtr()->getUserList();
    for(auto user : userList)
    {
      userListWgt->addItem(QString::fromStdString(user));
    }

    userListWgt->setCurrentRow(0);

    auto result = dial.exec();

    if(result == QDialog::Accepted &&
       userListWgt->currentItem())
    {
      ui->secondUserLineEdit->setText(userListWgt->currentItem()->text());
    }
}

void AdminsTool::on_showPrivatePushButton_clicked()
{
    ui->infoLineEdit->setText("Conversation between \""+
                              ui->firstUserLineEdit->text() + "\"" +
                              " and \""+ ui->secondUserLineEdit->text() + "\"");
    ui->messagesTextBrowser->disconnect();
    if (ui->firstUserLineEdit->text() == "..." && ui->secondUserLineEdit->text() == "..."){
        return;
    }
    timer->stop();
    _con = connect(timer, &QTimer::timeout, this, &AdminsTool::updatePrivateChat);
    timer->start(10);
}

void AdminsTool::on_showPublicPushButton_clicked()
{
    ui->infoLineEdit->text().clear();
    ui->infoLineEdit->setText("Public chat messages");
    ui->messagesTextBrowser->disconnect();
    timer->stop();
    _con = connect(timer, &QTimer::timeout, this, &AdminsTool::updatePublicChat);
    timer->start(10);
}

void AdminsTool::on_kickPushButton_clicked()
{
    QDialog dial(this);
    dial.setModal(true);
    auto l = new QVBoxLayout();
    dial.setLayout(l);
    auto userListWgt = new QListWidget(&dial);
    l->addWidget(userListWgt);
    auto buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, &dial);
    l->addWidget(buttonBox);

    connect(buttonBox, &QDialogButtonBox::accepted, &dial, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, &dial, &QDialog::reject);

    auto userList = DBsimulation::getDbPtr()->getUserList();
    for(auto user : userList)
    {
      userListWgt->addItem(QString::fromStdString(user));
    }

    userListWgt->setCurrentRow(0);

    auto result = dial.exec();

    if(result == QDialog::Accepted &&
       userListWgt->currentItem())
    {
      DBsimulation::kickActiveUser(userListWgt->currentItem()->text().toStdString());
    }
}

void AdminsTool::on_banPushButton_clicked()
{
    QDialog dial(this);
    dial.setModal(true);
    auto l = new QVBoxLayout();
    dial.setLayout(l);
    auto userListWgt = new QListWidget(&dial);
    l->addWidget(userListWgt);
    auto buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, &dial);
    l->addWidget(buttonBox);

    connect(buttonBox, &QDialogButtonBox::accepted, &dial, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, &dial, &QDialog::reject);

    auto userList = DBsimulation::getDbPtr()->getUserList();
    for(auto user : userList)
    {
      userListWgt->addItem(QString::fromStdString(user));
    }

    userListWgt->setCurrentRow(0);

    auto result = dial.exec();

    if(result == QDialog::Accepted &&
       userListWgt->currentItem())
    {
      std::string usr = userListWgt->currentItem()->text().toStdString();
      DBsimulation::addToBanList(usr);
      DBsimulation::getDbPtr()->dellUser(usr);
      DBsimulation::kickActiveUser(usr);
    }
}

void AdminsTool::on_actionExit_triggered()
{
  this->close();
}

void AdminsTool::updatePublicChat()
{
    auto chatMessages = DBsimulation::getDbPtr()->getChatMessages();
    QString chat;
    for(const auto &msg : chatMessages)
    {
      chat.append(QString::fromStdString(msg) + "\n");
    }
    if(ui->messagesTextBrowser->toPlainText() != chat)
        ui->messagesTextBrowser->setText(chat);
}

void AdminsTool::updatePrivateChat()
{
    std::string user1 = ui->firstUserLineEdit->text().toStdString();
    std::string user2 = ui->secondUserLineEdit->text().toStdString();
    auto privateMessages = DBsimulation::getDbPtr()->getPrivateMessage();
    QString chat;
    for(const auto &msg : privateMessages)
    {
      if(msg.getSender() == user1 &&
         msg.getDest() == DBsimulation::getDbPtr()->searchUserByName(user2)){
         QString text = QString::fromStdString(user1)+" for "+QString::fromStdString(user2)+": "+QString::fromStdString(msg.getText())+'\n';
         chat.append(text);
      }
      else if (msg.getSender() == user2 &&
               msg.getDest() == DBsimulation::getDbPtr()->searchUserByName(user1)){
         QString text = QString::fromStdString(user2)+" for "+QString::fromStdString(user1)+": "+QString::fromStdString(msg.getText())+'\n';
         chat.append(text);
      }else
        continue;
    }
    if(ui->messagesTextBrowser->toPlainText() != chat)
        ui->messagesTextBrowser->setText(chat);
}


