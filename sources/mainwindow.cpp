#include "../sources/mainwindow.h"
#include "../sources/startscreen.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QListWidget>
#include <QTimer>

int MainWindow::kInstanceCount = 0;

MainWindow::MainWindow(int userId, QString userName, QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow),
  m_userId(userId),
  m_userName(userName)
{
  ui->setupUi(this);
  kInstanceCount++;
  auto timer = new QTimer(this);
  connect(timer, &QTimer::timeout, this, &MainWindow::updateChats);
  timer->start(10);
}

MainWindow::~MainWindow()
{
  delete ui;
  kInstanceCount--;
  if(kInstanceCount <= 0)
    qApp->exit(0);
}

MainWindow *MainWindow::creteClient()
{
  StartScreen s;
  auto result = s.exec();
  if(result == QDialog::Rejected)
  {
    return nullptr;
  }
  auto w = new MainWindow(s.userId(), s.userName());
  w->setAttribute(Qt::WA_DeleteOnClose);
  DBsimulation::addMainWindow(s.userName().toStdString(), w);
  w->setWindowTitle("Application window for user "+ s.userName());
      w->show();
  return w;
}

void MainWindow::on_messageLineEdit_returnPressed()
{
    on_sendMessageButton_clicked();
}

void MainWindow::on_sendMessageButton_clicked()
{
  DBsimulation::getDbPtr()->addChatMessage(m_userName.toStdString(),
                          ui->messageLineEdit->text().toStdString());
}

void MainWindow::on_privateMessageButton_clicked()
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
    DBsimulation::getDbPtr()->addPrivateMessage(m_userName.toStdString(),
                               userListWgt->currentItem()->text().toStdString(),
                               ui->messageLineEdit->text().toStdString());
  }
}

void MainWindow::on_actionOpen_another_client_triggered()
{
  auto w = creteClient();
  if(w)
    w->show();
}

void MainWindow::on_actionExit_triggered()
{
  this->close();
}

void MainWindow::updateChats()
{
  auto chatMessages = DBsimulation::getDbPtr()->getChatMessages();
  QString chat;
  for(const auto &msg : chatMessages)
  {
    chat.append(QString::fromStdString(msg) + "\n");
  }
  if(ui->commonChatBrowser->toPlainText() != chat)
    ui->commonChatBrowser->setText(chat);

  chat.clear();
  auto privateMessages = DBsimulation::getDbPtr()->getPrivateMessage();
  for(const auto &msg : privateMessages)
  {
    if(QString::fromStdString(msg.getSender()) != m_userName &&
       msg.getDest() != m_userId)
    {
      continue;
    }
    QString prefix;
    if(m_userName == QString::fromStdString(msg.getSender()) &&
       m_userId == msg.getDest())
    {
      prefix = tr("self message") + ": ";
    }
    else if(m_userName == QString::fromStdString(msg.getSender()))
    {
      prefix = tr("message to") +
               QString(" <%1>: ").
                  arg(QString::fromStdString(DBsimulation::getDbPtr()->getUserName(msg.getDest())));
    }
    else
    {
      prefix = "<" + QString::fromStdString(msg.getSender()) +
               "> " + tr("say to you") + ": ";
    }
    chat.append(prefix + QString::fromStdString(msg.getText()) + "\n");
  }
  if(ui->privateChatBrowser->toPlainText() != chat)
    ui->privateChatBrowser->setText(chat);
}
