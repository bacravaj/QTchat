/********************************************************************************
** Form generated from reading UI file 'startscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTSCREEN_H
#define UI_STARTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QStackedWidget>
#include "../sources/loginform.h"
#include "../sources/registrationform.h"

QT_BEGIN_NAMESPACE

class Ui_StartScreen
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    LoginForm *loginWidget;
    RegistrationForm *regWidget;

    void setupUi(QDialog *StartScreen)
    {
        if (StartScreen->objectName().isEmpty())
            StartScreen->setObjectName(QString::fromUtf8("StartScreen"));
        StartScreen->resize(350, 200);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartScreen->sizePolicy().hasHeightForWidth());
        StartScreen->setSizePolicy(sizePolicy);
        StartScreen->setMinimumSize(QSize(0, 0));
        StartScreen->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(StartScreen);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(StartScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        loginWidget = new LoginForm();
        loginWidget->setObjectName(QString::fromUtf8("loginWidget"));
        stackedWidget->addWidget(loginWidget);
        regWidget = new RegistrationForm();
        regWidget->setObjectName(QString::fromUtf8("regWidget"));
        stackedWidget->addWidget(regWidget);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(StartScreen);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StartScreen);
    } // setupUi

    void retranslateUi(QDialog *StartScreen)
    {
        StartScreen->setWindowTitle(QCoreApplication::translate("StartScreen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartScreen: public Ui_StartScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTSCREEN_H
