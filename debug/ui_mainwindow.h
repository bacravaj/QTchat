/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_another_client;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *messageLineEdit;
    QPushButton *sendMessageButton;
    QPushButton *privateMessageButton;
    QSplitter *splitter;
    QTextBrowser *commonChatBrowser;
    QTextBrowser *privateChatBrowser;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(519, 390);
        actionOpen_another_client = new QAction(MainWindow);
        actionOpen_another_client->setObjectName(QString::fromUtf8("actionOpen_another_client"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        messageLineEdit = new QLineEdit(centralwidget);
        messageLineEdit->setObjectName(QString::fromUtf8("messageLineEdit"));
        messageLineEdit->setMinimumSize(QSize(250, 0));

        horizontalLayout->addWidget(messageLineEdit);

        sendMessageButton = new QPushButton(centralwidget);
        sendMessageButton->setObjectName(QString::fromUtf8("sendMessageButton"));

        horizontalLayout->addWidget(sendMessageButton);

        privateMessageButton = new QPushButton(centralwidget);
        privateMessageButton->setObjectName(QString::fromUtf8("privateMessageButton"));

        horizontalLayout->addWidget(privateMessageButton);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        commonChatBrowser = new QTextBrowser(splitter);
        commonChatBrowser->setObjectName(QString::fromUtf8("commonChatBrowser"));
        splitter->addWidget(commonChatBrowser);
        privateChatBrowser = new QTextBrowser(splitter);
        privateChatBrowser->setObjectName(QString::fromUtf8("privateChatBrowser"));
        privateChatBrowser->setMinimumSize(QSize(0, 300));
        splitter->addWidget(privateChatBrowser);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 519, 20));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionOpen_another_client);
        menuMenu->addSeparator();
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_another_client->setText(QCoreApplication::translate("MainWindow", "Open another client", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Close this client", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Your message:", nullptr));
        sendMessageButton->setText(QCoreApplication::translate("MainWindow", "Send to all", nullptr));
        privateMessageButton->setText(QCoreApplication::translate("MainWindow", "SendPrivate", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Main menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
