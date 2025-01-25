/********************************************************************************
** Form generated from reading UI file 'choice.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICE_H
#define UI_CHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choice
{
public:
    QPushButton *options_depositButton;
    QPushButton *options_passwdButton;
    QPushButton *options_lostButton;
    QPushButton *options_flowButton;
    QPushButton *options_withdrawButton;

    void setupUi(QWidget *choice)
    {
        if (choice->objectName().isEmpty())
            choice->setObjectName(QStringLiteral("choice"));
        choice->resize(415, 375);
        options_depositButton = new QPushButton(choice);
        options_depositButton->setObjectName(QStringLiteral("options_depositButton"));
        options_depositButton->setGeometry(QRect(20, 10, 361, 31));
        options_passwdButton = new QPushButton(choice);
        options_passwdButton->setObjectName(QStringLiteral("options_passwdButton"));
        options_passwdButton->setGeometry(QRect(20, 190, 361, 31));
        options_lostButton = new QPushButton(choice);
        options_lostButton->setObjectName(QStringLiteral("options_lostButton"));
        options_lostButton->setGeometry(QRect(20, 280, 361, 31));
        options_flowButton = new QPushButton(choice);
        options_flowButton->setObjectName(QStringLiteral("options_flowButton"));
        options_flowButton->setGeometry(QRect(20, 100, 361, 31));
        options_withdrawButton = new QPushButton(choice);
        options_withdrawButton->setObjectName(QStringLiteral("options_withdrawButton"));
        options_withdrawButton->setGeometry(QRect(20, 50, 361, 31));

        retranslateUi(choice);

        QMetaObject::connectSlotsByName(choice);
    } // setupUi

    void retranslateUi(QWidget *choice)
    {
        choice->setWindowTitle(QApplication::translate("choice", "Form", 0));
        options_depositButton->setText(QApplication::translate("choice", "\345\255\230\346\254\276", 0));
        options_passwdButton->setText(QApplication::translate("choice", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        options_lostButton->setText(QApplication::translate("choice", "\346\214\202\345\244\261", 0));
        options_flowButton->setText(QApplication::translate("choice", "\346\237\245\347\234\213\346\265\201\346\260\264", 0));
        options_withdrawButton->setText(QApplication::translate("choice", "\345\217\226\346\254\276", 0));
    } // retranslateUi

};

namespace Ui {
    class choice: public Ui_choice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICE_H
