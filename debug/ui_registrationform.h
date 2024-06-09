/********************************************************************************
** Form generated from reading UI file 'registrationform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONFORM_H
#define UI_REGISTRATIONFORM_H

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

class Ui_RegistrationForm
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *loginEdit;
    QLineEdit *passwordEdit;
    QLineEdit *confirmEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *loginPushButton;

    void setupUi(QWidget *RegistrationForm)
    {
        if (RegistrationForm->objectName().isEmpty())
            RegistrationForm->setObjectName(QString::fromUtf8("RegistrationForm"));
        RegistrationForm->resize(576, 288);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegistrationForm->sizePolicy().hasHeightForWidth());
        RegistrationForm->setSizePolicy(sizePolicy);
        RegistrationForm->setMinimumSize(QSize(0, 0));
        RegistrationForm->setMaximumSize(QSize(1111111, 1111111));
        verticalLayout = new QVBoxLayout(RegistrationForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label = new QLabel(RegistrationForm);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(RegistrationForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(RegistrationForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        loginEdit = new QLineEdit(RegistrationForm);
        loginEdit->setObjectName(QString::fromUtf8("loginEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginEdit->sizePolicy().hasHeightForWidth());
        loginEdit->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, loginEdit);

        passwordEdit = new QLineEdit(RegistrationForm);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        sizePolicy1.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy1);
        passwordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordEdit);

        confirmEdit = new QLineEdit(RegistrationForm);
        confirmEdit->setObjectName(QString::fromUtf8("confirmEdit"));
        sizePolicy1.setHeightForWidth(confirmEdit->sizePolicy().hasHeightForWidth());
        confirmEdit->setSizePolicy(sizePolicy1);
        confirmEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, confirmEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(RegistrationForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        loginPushButton = new QPushButton(RegistrationForm);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(loginPushButton->sizePolicy().hasHeightForWidth());
        loginPushButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(loginPushButton);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(loginPushButton, loginEdit);
        QWidget::setTabOrder(loginEdit, passwordEdit);
        QWidget::setTabOrder(passwordEdit, confirmEdit);

        retranslateUi(RegistrationForm);

        QMetaObject::connectSlotsByName(RegistrationForm);
    } // setupUi

    void retranslateUi(QWidget *RegistrationForm)
    {
        RegistrationForm->setWindowTitle(QCoreApplication::translate("RegistrationForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegistrationForm", "Login:", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrationForm", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("RegistrationForm", "Confirm password", nullptr));
        loginPushButton->setText(QCoreApplication::translate("RegistrationForm", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationForm: public Ui_RegistrationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONFORM_H
