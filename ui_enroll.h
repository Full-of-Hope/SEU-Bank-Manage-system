/********************************************************************************
** Form generated from reading UI file 'enroll.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLL_H
#define UI_ENROLL_H

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

class Ui_enroll
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *login_accountLabel;
    QLineEdit *login_accountInput;
    QLabel *login_accountStateLabel;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *login_passwdLabel;
    QLineEdit *login_passwdInput;
    QSpacerItem *verticalSpacer_3;
    QPushButton *login_okButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *login_backButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *enroll)
    {
        if (enroll->objectName().isEmpty())
            enroll->setObjectName(QStringLiteral("enroll"));
        enroll->resize(262, 289);
        verticalLayout_2 = new QVBoxLayout(enroll);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(enroll);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        login_accountLabel = new QLabel(widget);
        login_accountLabel->setObjectName(QStringLiteral("login_accountLabel"));
        QFont font;
        font.setPointSize(18);
        login_accountLabel->setFont(font);

        horizontalLayout->addWidget(login_accountLabel);

        login_accountInput = new QLineEdit(widget);
        login_accountInput->setObjectName(QStringLiteral("login_accountInput"));
        login_accountInput->setMaximumSize(QSize(16777211, 16777215));

        horizontalLayout->addWidget(login_accountInput);


        verticalLayout->addLayout(horizontalLayout);

        login_accountStateLabel = new QLabel(widget);
        login_accountStateLabel->setObjectName(QStringLiteral("login_accountStateLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font1.setBold(true);
        font1.setWeight(75);
        login_accountStateLabel->setFont(font1);

        verticalLayout->addWidget(login_accountStateLabel);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        login_passwdLabel = new QLabel(widget);
        login_passwdLabel->setObjectName(QStringLiteral("login_passwdLabel"));
        login_passwdLabel->setFont(font);

        horizontalLayout_2->addWidget(login_passwdLabel);

        login_passwdInput = new QLineEdit(widget);
        login_passwdInput->setObjectName(QStringLiteral("login_passwdInput"));
        login_passwdInput->setEchoMode(QLineEdit::Password);
        login_passwdInput->setCursorMoveStyle(Qt::LogicalMoveStyle);
        login_passwdInput->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(login_passwdInput);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        login_okButton = new QPushButton(widget);
        login_okButton->setObjectName(QStringLiteral("login_okButton"));
        QFont font2;
        font2.setPointSize(20);
        login_okButton->setFont(font2);

        verticalLayout->addWidget(login_okButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        login_backButton = new QPushButton(widget);
        login_backButton->setObjectName(QStringLiteral("login_backButton"));
        login_backButton->setFont(font2);

        verticalLayout->addWidget(login_backButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(widget);


        retranslateUi(enroll);

        QMetaObject::connectSlotsByName(enroll);
    } // setupUi

    void retranslateUi(QWidget *enroll)
    {
        enroll->setWindowTitle(QApplication::translate("enroll", "Form", 0));
        login_accountLabel->setText(QApplication::translate("enroll", "\350\264\246\345\217\267", 0));
        login_accountInput->setInputMask(QString());
        login_accountStateLabel->setText(QString());
        login_passwdLabel->setText(QApplication::translate("enroll", "\345\257\206\347\240\201", 0));
        login_okButton->setText(QApplication::translate("enroll", "\347\241\256\345\256\232", 0));
        login_backButton->setText(QApplication::translate("enroll", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class enroll: public Ui_enroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLL_H
