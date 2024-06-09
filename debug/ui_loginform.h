/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *loginEdit;
    QLineEdit *passwordEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *registrarionPushButton;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
        LoginForm->resize(530, 268);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginForm->sizePolicy().hasHeightForWidth());
        LoginForm->setSizePolicy(sizePolicy);
        LoginForm->setMinimumSize(QSize(0, 0));
        LoginForm->setMaximumSize(QSize(16777215, 16777215));
        LoginForm->setBaseSize(QSize(325, 200));
        QPalette palette;
        QBrush brush(QColor(81, 58, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        LoginForm->setPalette(palette);
        verticalLayout = new QVBoxLayout(LoginForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(5);
        formLayout->setVerticalSpacing(8);
        formLayout->setContentsMargins(-1, 15, -1, -1);
        label = new QLabel(LoginForm);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(LoginForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        loginEdit = new QLineEdit(LoginForm);
        loginEdit->setObjectName(QString::fromUtf8("loginEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, loginEdit);

        passwordEdit = new QLineEdit(LoginForm);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        buttonBox = new QDialogButtonBox(LoginForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        registrarionPushButton = new QPushButton(LoginForm);
        registrarionPushButton->setObjectName(QString::fromUtf8("registrarionPushButton"));

        horizontalLayout->addWidget(registrarionPushButton);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("LoginForm", "Login:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginForm", "Password:", nullptr));
        registrarionPushButton->setText(QCoreApplication::translate("LoginForm", "Registration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
