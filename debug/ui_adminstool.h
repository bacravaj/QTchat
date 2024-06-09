/********************************************************************************
** Form generated from reading UI file 'adminstool.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSTOOL_H
#define UI_ADMINSTOOL_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminsTool
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *firstUserPushButton;
    QLineEdit *firstUserLineEdit;
    QVBoxLayout *verticalLayout_2;
    QPushButton *secondUserPushButton;
    QLineEdit *secondUserLineEdit;
    QPushButton *showPrivatePushButton;
    QSpacerItem *verticalSpacer;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QLabel *ChatViewerLAbel_2;
    QPushButton *showPublicPushButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QPushButton *kickPushButton;
    QPushButton *banPushButton;
    QVBoxLayout *verticalLayout_5;
    QLabel *ChatViewerLAbel;
    QLineEdit *infoLineEdit;
    QTextBrowser *messagesTextBrowser;
    QMenuBar *menubar;
    QMenu *menuMain_menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminsTool)
    {
        if (AdminsTool->objectName().isEmpty())
            AdminsTool->setObjectName(QString::fromUtf8("AdminsTool"));
        AdminsTool->resize(841, 690);
        actionExit = new QAction(AdminsTool);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(AdminsTool);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        firstUserPushButton = new QPushButton(layoutWidget);
        firstUserPushButton->setObjectName(QString::fromUtf8("firstUserPushButton"));

        verticalLayout->addWidget(firstUserPushButton);

        firstUserLineEdit = new QLineEdit(layoutWidget);
        firstUserLineEdit->setObjectName(QString::fromUtf8("firstUserLineEdit"));
        firstUserLineEdit->setAlignment(Qt::AlignCenter);
        firstUserLineEdit->setReadOnly(true);

        verticalLayout->addWidget(firstUserLineEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        secondUserPushButton = new QPushButton(layoutWidget);
        secondUserPushButton->setObjectName(QString::fromUtf8("secondUserPushButton"));
        QFont font1;
        font1.setPointSize(8);
        secondUserPushButton->setFont(font1);

        verticalLayout_2->addWidget(secondUserPushButton);

        secondUserLineEdit = new QLineEdit(layoutWidget);
        secondUserLineEdit->setObjectName(QString::fromUtf8("secondUserLineEdit"));
        secondUserLineEdit->setAlignment(Qt::AlignCenter);
        secondUserLineEdit->setReadOnly(true);

        verticalLayout_2->addWidget(secondUserLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        showPrivatePushButton = new QPushButton(layoutWidget);
        showPrivatePushButton->setObjectName(QString::fromUtf8("showPrivatePushButton"));

        verticalLayout_3->addWidget(showPrivatePushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout_3);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        ChatViewerLAbel_2 = new QLabel(layoutWidget1);
        ChatViewerLAbel_2->setObjectName(QString::fromUtf8("ChatViewerLAbel_2"));
        sizePolicy1.setHeightForWidth(ChatViewerLAbel_2->sizePolicy().hasHeightForWidth());
        ChatViewerLAbel_2->setSizePolicy(sizePolicy1);
        ChatViewerLAbel_2->setFont(font);
        ChatViewerLAbel_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(ChatViewerLAbel_2);

        showPublicPushButton = new QPushButton(layoutWidget1);
        showPublicPushButton->setObjectName(QString::fromUtf8("showPublicPushButton"));

        verticalLayout_6->addWidget(showPublicPushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_2);

        kickPushButton = new QPushButton(layoutWidget2);
        kickPushButton->setObjectName(QString::fromUtf8("kickPushButton"));

        verticalLayout_7->addWidget(kickPushButton);

        banPushButton = new QPushButton(layoutWidget2);
        banPushButton->setObjectName(QString::fromUtf8("banPushButton"));

        verticalLayout_7->addWidget(banPushButton);

        splitter->addWidget(layoutWidget2);

        horizontalLayout_2->addWidget(splitter);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        ChatViewerLAbel = new QLabel(centralwidget);
        ChatViewerLAbel->setObjectName(QString::fromUtf8("ChatViewerLAbel"));
        ChatViewerLAbel->setFont(font);
        ChatViewerLAbel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(ChatViewerLAbel);

        infoLineEdit = new QLineEdit(centralwidget);
        infoLineEdit->setObjectName(QString::fromUtf8("infoLineEdit"));
        infoLineEdit->setAlignment(Qt::AlignCenter);
        infoLineEdit->setReadOnly(true);

        verticalLayout_5->addWidget(infoLineEdit);

        messagesTextBrowser = new QTextBrowser(centralwidget);
        messagesTextBrowser->setObjectName(QString::fromUtf8("messagesTextBrowser"));
        messagesTextBrowser->setMinimumSize(QSize(200, 0));
        messagesTextBrowser->setOverwriteMode(false);

        verticalLayout_5->addWidget(messagesTextBrowser);


        horizontalLayout_2->addLayout(verticalLayout_5);

        AdminsTool->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminsTool);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 841, 20));
        menuMain_menu = new QMenu(menubar);
        menuMain_menu->setObjectName(QString::fromUtf8("menuMain_menu"));
        AdminsTool->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminsTool);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdminsTool->setStatusBar(statusbar);

        menubar->addAction(menuMain_menu->menuAction());
        menuMain_menu->addAction(actionExit);

        retranslateUi(AdminsTool);

        QMetaObject::connectSlotsByName(AdminsTool);
    } // setupUi

    void retranslateUi(QMainWindow *AdminsTool)
    {
        AdminsTool->setWindowTitle(QCoreApplication::translate("AdminsTool", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("AdminsTool", "Exit", nullptr));
        label->setText(QCoreApplication::translate("AdminsTool", "Private messages", nullptr));
        firstUserPushButton->setText(QCoreApplication::translate("AdminsTool", "First user", nullptr));
        firstUserLineEdit->setText(QCoreApplication::translate("AdminsTool", "...", nullptr));
        secondUserPushButton->setText(QCoreApplication::translate("AdminsTool", "Second user", nullptr));
        secondUserLineEdit->setText(QCoreApplication::translate("AdminsTool", "...", nullptr));
        showPrivatePushButton->setText(QCoreApplication::translate("AdminsTool", "Show", nullptr));
        ChatViewerLAbel_2->setText(QCoreApplication::translate("AdminsTool", "Public messages", nullptr));
        showPublicPushButton->setText(QCoreApplication::translate("AdminsTool", "Show", nullptr));
        label_2->setText(QCoreApplication::translate("AdminsTool", "\320\241ontrol", nullptr));
        kickPushButton->setText(QCoreApplication::translate("AdminsTool", "Kick", nullptr));
        banPushButton->setText(QCoreApplication::translate("AdminsTool", "Ban", nullptr));
        ChatViewerLAbel->setText(QCoreApplication::translate("AdminsTool", "Chat viewer", nullptr));
        infoLineEdit->setText(QCoreApplication::translate("AdminsTool", "Public chat messages", nullptr));
        menuMain_menu->setTitle(QCoreApplication::translate("AdminsTool", "Main menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminsTool: public Ui_AdminsTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSTOOL_H
