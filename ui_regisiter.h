/********************************************************************************
** Form generated from reading UI file 'regisiter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISITER_H
#define UI_REGISITER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regisiter
{
public:
    QLineEdit *login_passwdInput;
    QPushButton *login_backButton;
    QLineEdit *login_accountInput;
    QLabel *login_accountLabel;
    QPushButton *login_okButton;
    QLabel *login_accountStateLabel;
    QLabel *login_passwdLabel;

    void setupUi(QWidget *regisiter)
    {
        if (regisiter->objectName().isEmpty())
            regisiter->setObjectName(QStringLiteral("regisiter"));
        regisiter->resize(466, 300);
        login_passwdInput = new QLineEdit(regisiter);
        login_passwdInput->setObjectName(QStringLiteral("login_passwdInput"));
        login_passwdInput->setGeometry(QRect(80, 130, 351, 31));
        login_passwdInput->setEchoMode(QLineEdit::Password);
        login_passwdInput->setCursorMoveStyle(Qt::LogicalMoveStyle);
        login_passwdInput->setClearButtonEnabled(false);
        login_backButton = new QPushButton(regisiter);
        login_backButton->setObjectName(QStringLiteral("login_backButton"));
        login_backButton->setGeometry(QRect(240, 190, 93, 28));
        login_accountInput = new QLineEdit(regisiter);
        login_accountInput->setObjectName(QStringLiteral("login_accountInput"));
        login_accountInput->setGeometry(QRect(80, 60, 351, 31));
        login_accountInput->setMaximumSize(QSize(16777211, 16777215));
        login_accountLabel = new QLabel(regisiter);
        login_accountLabel->setObjectName(QStringLiteral("login_accountLabel"));
        login_accountLabel->setGeometry(QRect(30, 70, 31, 16));
        login_okButton = new QPushButton(regisiter);
        login_okButton->setObjectName(QStringLiteral("login_okButton"));
        login_okButton->setGeometry(QRect(130, 190, 93, 28));
        login_accountStateLabel = new QLabel(regisiter);
        login_accountStateLabel->setObjectName(QStringLiteral("login_accountStateLabel"));
        login_accountStateLabel->setGeometry(QRect(80, 100, 351, 16));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setBold(true);
        font.setWeight(75);
        login_accountStateLabel->setFont(font);
        login_passwdLabel = new QLabel(regisiter);
        login_passwdLabel->setObjectName(QStringLiteral("login_passwdLabel"));
        login_passwdLabel->setGeometry(QRect(30, 140, 31, 16));

        retranslateUi(regisiter);

        QMetaObject::connectSlotsByName(regisiter);
    } // setupUi

    void retranslateUi(QWidget *regisiter)
    {
        regisiter->setWindowTitle(QApplication::translate("regisiter", "Form", 0));
        login_backButton->setText(QApplication::translate("regisiter", "\350\277\224\345\233\236", 0));
        login_accountInput->setInputMask(QString());
        login_accountLabel->setText(QApplication::translate("regisiter", "\350\264\246\345\217\267", 0));
        login_okButton->setText(QApplication::translate("regisiter", "\347\241\256\350\256\244", 0));
        login_accountStateLabel->setText(QString());
        login_passwdLabel->setText(QApplication::translate("regisiter", "\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class regisiter: public Ui_regisiter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISITER_H
