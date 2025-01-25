/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deposit
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *deposit_moneyLabel;
    QLineEdit *deposit_moneyInput;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *login_employeeLabel;
    QLineEdit *login_employeeInput;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *deposit_okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *deposit_backButton;

    void setupUi(QWidget *deposit)
    {
        if (deposit->objectName().isEmpty())
            deposit->setObjectName(QStringLiteral("deposit"));
        deposit->resize(277, 287);
        verticalLayout_2 = new QVBoxLayout(deposit);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(deposit);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        deposit_moneyLabel = new QLabel(widget);
        deposit_moneyLabel->setObjectName(QStringLiteral("deposit_moneyLabel"));
        QFont font;
        font.setPointSize(14);
        deposit_moneyLabel->setFont(font);

        horizontalLayout->addWidget(deposit_moneyLabel);

        deposit_moneyInput = new QLineEdit(widget);
        deposit_moneyInput->setObjectName(QStringLiteral("deposit_moneyInput"));
        deposit_moneyInput->setMaximumSize(QSize(16777211, 16777215));

        horizontalLayout->addWidget(deposit_moneyInput);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        login_employeeLabel = new QLabel(widget);
        login_employeeLabel->setObjectName(QStringLiteral("login_employeeLabel"));
        login_employeeLabel->setFont(font);

        horizontalLayout_2->addWidget(login_employeeLabel);

        login_employeeInput = new QLineEdit(widget);
        login_employeeInput->setObjectName(QStringLiteral("login_employeeInput"));

        horizontalLayout_2->addWidget(login_employeeInput);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        deposit_okButton = new QPushButton(widget);
        deposit_okButton->setObjectName(QStringLiteral("deposit_okButton"));
        QFont font1;
        font1.setPointSize(16);
        deposit_okButton->setFont(font1);

        horizontalLayout_4->addWidget(deposit_okButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        deposit_backButton = new QPushButton(widget);
        deposit_backButton->setObjectName(QStringLiteral("deposit_backButton"));
        deposit_backButton->setFont(font1);

        horizontalLayout_4->addWidget(deposit_backButton);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(widget);


        retranslateUi(deposit);

        QMetaObject::connectSlotsByName(deposit);
    } // setupUi

    void retranslateUi(QWidget *deposit)
    {
        deposit->setWindowTitle(QApplication::translate("deposit", "Form", 0));
        deposit_moneyLabel->setText(QApplication::translate("deposit", "\345\255\230\346\254\276\351\207\221\351\242\235", 0));
        deposit_moneyInput->setInputMask(QString());
        login_employeeLabel->setText(QApplication::translate("deposit", "\345\221\230\345\267\245\345\217\267\347\240\201", 0));
        label->setText(QApplication::translate("deposit", "\345\221\230\345\267\245\345\247\223\345\220\215", 0));
        deposit_okButton->setText(QApplication::translate("deposit", "\347\241\256\350\256\244", 0));
        deposit_backButton->setText(QApplication::translate("deposit", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class deposit: public Ui_deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
