/********************************************************************************
** Form generated from reading UI file 'creatdispoit.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATDISPOIT_H
#define UI_CREATDISPOIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreatDispoit
{
public:
    QLabel *login_passwdLabel;
    QLineEdit *login_passwdInput;
    QLabel *login_repeatPasswdState;
    QLabel *login_addressLabel;
    QLineEdit *login_addressInput;
    QLineEdit *login_nameInput;
    QLabel *login_confirmPasswdLabel;
    QLineEdit *login_accountInput;
    QLineEdit *login_confirmPasswdInput;
    QLabel *login_nameLabel;
    QLabel *login_accountLabel;
    QLineEdit *login_interestInput;
    QComboBox *login_typeCombobox;
    QLabel *login_typeLabel;
    QLabel *login_interestLabel;
    QPushButton *login_okButton;
    QPushButton *login_backButton;
    QLineEdit *login_employeename;
    QLabel *login_employeenameLabel;
    QLineEdit *login_employeeInput;
    QLabel *login_employeeLabel;
    QLabel *login_principalLabel;
    QLineEdit *login_principal;

    void setupUi(QWidget *CreatDispoit)
    {
        if (CreatDispoit->objectName().isEmpty())
            CreatDispoit->setObjectName(QStringLiteral("CreatDispoit"));
        CreatDispoit->resize(518, 605);
        login_passwdLabel = new QLabel(CreatDispoit);
        login_passwdLabel->setObjectName(QStringLiteral("login_passwdLabel"));
        login_passwdLabel->setGeometry(QRect(20, 101, 72, 15));
        login_passwdInput = new QLineEdit(CreatDispoit);
        login_passwdInput->setObjectName(QStringLiteral("login_passwdInput"));
        login_passwdInput->setGeometry(QRect(90, 91, 351, 31));
        login_passwdInput->setFocusPolicy(Qt::StrongFocus);
        login_passwdInput->setEchoMode(QLineEdit::Password);
        login_repeatPasswdState = new QLabel(CreatDispoit);
        login_repeatPasswdState->setObjectName(QStringLiteral("login_repeatPasswdState"));
        login_repeatPasswdState->setGeometry(QRect(90, 171, 351, 16));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setBold(true);
        font.setWeight(75);
        login_repeatPasswdState->setFont(font);
        login_addressLabel = new QLabel(CreatDispoit);
        login_addressLabel->setObjectName(QStringLiteral("login_addressLabel"));
        login_addressLabel->setGeometry(QRect(20, 210, 72, 15));
        login_addressInput = new QLineEdit(CreatDispoit);
        login_addressInput->setObjectName(QStringLiteral("login_addressInput"));
        login_addressInput->setGeometry(QRect(90, 200, 351, 31));
        login_nameInput = new QLineEdit(CreatDispoit);
        login_nameInput->setObjectName(QStringLiteral("login_nameInput"));
        login_nameInput->setGeometry(QRect(90, 51, 351, 31));
        login_confirmPasswdLabel = new QLabel(CreatDispoit);
        login_confirmPasswdLabel->setObjectName(QStringLiteral("login_confirmPasswdLabel"));
        login_confirmPasswdLabel->setGeometry(QRect(20, 141, 72, 15));
        login_accountInput = new QLineEdit(CreatDispoit);
        login_accountInput->setObjectName(QStringLiteral("login_accountInput"));
        login_accountInput->setGeometry(QRect(90, 11, 351, 31));
        login_accountInput->setMaximumSize(QSize(16777211, 16777215));
        login_accountInput->setReadOnly(true);
        login_confirmPasswdInput = new QLineEdit(CreatDispoit);
        login_confirmPasswdInput->setObjectName(QStringLiteral("login_confirmPasswdInput"));
        login_confirmPasswdInput->setGeometry(QRect(90, 131, 351, 31));
        login_confirmPasswdInput->setEchoMode(QLineEdit::Password);
        login_confirmPasswdInput->setClearButtonEnabled(false);
        login_nameLabel = new QLabel(CreatDispoit);
        login_nameLabel->setObjectName(QStringLiteral("login_nameLabel"));
        login_nameLabel->setGeometry(QRect(20, 61, 72, 15));
        login_accountLabel = new QLabel(CreatDispoit);
        login_accountLabel->setObjectName(QStringLiteral("login_accountLabel"));
        login_accountLabel->setGeometry(QRect(20, 21, 72, 15));
        login_interestInput = new QLineEdit(CreatDispoit);
        login_interestInput->setObjectName(QStringLiteral("login_interestInput"));
        login_interestInput->setGeometry(QRect(90, 300, 351, 31));
        login_interestInput->setFocusPolicy(Qt::WheelFocus);
        login_interestInput->setReadOnly(true);
        login_typeCombobox = new QComboBox(CreatDispoit);
        login_typeCombobox->setObjectName(QStringLiteral("login_typeCombobox"));
        login_typeCombobox->setGeometry(QRect(90, 250, 351, 31));
        login_typeLabel = new QLabel(CreatDispoit);
        login_typeLabel->setObjectName(QStringLiteral("login_typeLabel"));
        login_typeLabel->setGeometry(QRect(20, 260, 72, 15));
        login_interestLabel = new QLabel(CreatDispoit);
        login_interestLabel->setObjectName(QStringLiteral("login_interestLabel"));
        login_interestLabel->setGeometry(QRect(20, 310, 72, 15));
        login_okButton = new QPushButton(CreatDispoit);
        login_okButton->setObjectName(QStringLiteral("login_okButton"));
        login_okButton->setGeometry(QRect(140, 540, 93, 28));
        login_backButton = new QPushButton(CreatDispoit);
        login_backButton->setObjectName(QStringLiteral("login_backButton"));
        login_backButton->setGeometry(QRect(250, 540, 93, 28));
        login_employeename = new QLineEdit(CreatDispoit);
        login_employeename->setObjectName(QStringLiteral("login_employeename"));
        login_employeename->setGeometry(QRect(90, 460, 351, 31));
        login_employeenameLabel = new QLabel(CreatDispoit);
        login_employeenameLabel->setObjectName(QStringLiteral("login_employeenameLabel"));
        login_employeenameLabel->setGeometry(QRect(20, 470, 72, 15));
        login_employeeInput = new QLineEdit(CreatDispoit);
        login_employeeInput->setObjectName(QStringLiteral("login_employeeInput"));
        login_employeeInput->setGeometry(QRect(90, 410, 351, 31));
        login_employeeLabel = new QLabel(CreatDispoit);
        login_employeeLabel->setObjectName(QStringLiteral("login_employeeLabel"));
        login_employeeLabel->setGeometry(QRect(20, 420, 72, 15));
        login_principalLabel = new QLabel(CreatDispoit);
        login_principalLabel->setObjectName(QStringLiteral("login_principalLabel"));
        login_principalLabel->setGeometry(QRect(20, 360, 72, 15));
        login_principal = new QLineEdit(CreatDispoit);
        login_principal->setObjectName(QStringLiteral("login_principal"));
        login_principal->setGeometry(QRect(90, 350, 351, 31));

        retranslateUi(CreatDispoit);

        QMetaObject::connectSlotsByName(CreatDispoit);
    } // setupUi

    void retranslateUi(QWidget *CreatDispoit)
    {
        CreatDispoit->setWindowTitle(QApplication::translate("CreatDispoit", "Form", 0));
        login_passwdLabel->setText(QApplication::translate("CreatDispoit", "\345\257\206\347\240\201", 0));
        login_passwdInput->setText(QString());
        login_repeatPasswdState->setText(QString());
        login_addressLabel->setText(QApplication::translate("CreatDispoit", "\345\234\260\345\235\200", 0));
        login_confirmPasswdLabel->setText(QApplication::translate("CreatDispoit", "\347\241\256\350\256\244\345\257\206\347\240\201", 0));
        login_accountInput->setInputMask(QString());
        login_confirmPasswdInput->setText(QString());
        login_nameLabel->setText(QApplication::translate("CreatDispoit", "\345\247\223\345\220\215", 0));
        login_accountLabel->setText(QApplication::translate("CreatDispoit", "\350\264\246\345\217\267", 0));
        login_interestInput->setText(QApplication::translate("CreatDispoit", "1.98", 0));
        login_typeCombobox->clear();
        login_typeCombobox->insertItems(0, QStringList()
         << QApplication::translate("CreatDispoit", "\344\270\200\345\271\264\346\234\237", 0)
         << QApplication::translate("CreatDispoit", "\344\270\211\345\271\264\346\234\237", 0)
         << QApplication::translate("CreatDispoit", "\344\272\224\345\271\264\346\234\237", 0)
        );
        login_typeLabel->setText(QApplication::translate("CreatDispoit", "\345\202\250\347\247\215", 0));
        login_interestLabel->setText(QApplication::translate("CreatDispoit", "\345\210\251\346\201\257", 0));
        login_okButton->setText(QApplication::translate("CreatDispoit", "\347\241\256\350\256\244", 0));
        login_backButton->setText(QApplication::translate("CreatDispoit", "\350\277\224\345\233\236", 0));
        login_employeenameLabel->setText(QApplication::translate("CreatDispoit", "\345\221\230\345\267\245\345\247\223\345\220\215", 0));
        login_employeeLabel->setText(QApplication::translate("CreatDispoit", "\345\221\230\345\267\245\345\217\267", 0));
        login_principalLabel->setText(QApplication::translate("CreatDispoit", "\346\234\254\351\207\221", 0));
    } // retranslateUi

};

namespace Ui {
    class CreatDispoit: public Ui_CreatDispoit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATDISPOIT_H
