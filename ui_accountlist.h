/********************************************************************************
** Form generated from reading UI file 'accountlist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTLIST_H
#define UI_ACCOUNTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountlist
{
public:
    QTableView *accountlist_tableView;
    QLineEdit *accountlist_searchEdit;
    QPushButton *accountlist_searchButton;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QPushButton *accountlist_exportButton;
    QPushButton *accountlist_backButton;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_5;

    void setupUi(QWidget *accountlist)
    {
        if (accountlist->objectName().isEmpty())
            accountlist->setObjectName(QStringLiteral("accountlist"));
        accountlist->resize(455, 444);
        accountlist_tableView = new QTableView(accountlist);
        accountlist_tableView->setObjectName(QStringLiteral("accountlist_tableView"));
        accountlist_tableView->setGeometry(QRect(50, 30, 381, 231));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(accountlist_tableView->sizePolicy().hasHeightForWidth());
        accountlist_tableView->setSizePolicy(sizePolicy);
        accountlist_tableView->setAlternatingRowColors(true);
        accountlist_tableView->setSortingEnabled(true);
        accountlist_tableView->horizontalHeader()->setVisible(false);
        accountlist_tableView->verticalHeader()->setVisible(false);
        accountlist_searchEdit = new QLineEdit(accountlist);
        accountlist_searchEdit->setObjectName(QStringLiteral("accountlist_searchEdit"));
        accountlist_searchEdit->setGeometry(QRect(50, 10, 231, 20));
        accountlist_searchButton = new QPushButton(accountlist);
        accountlist_searchButton->setObjectName(QStringLiteral("accountlist_searchButton"));
        accountlist_searchButton->setGeometry(QRect(340, 10, 91, 21));
        label_1 = new QLabel(accountlist);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(50, 330, 18, 16));
        label_2 = new QLabel(accountlist);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 330, 16, 16));
        label_3 = new QLabel(accountlist);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 325, 72, 20));
        dateEdit = new QDateEdit(accountlist);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(190, 320, 101, 21));
        accountlist_exportButton = new QPushButton(accountlist);
        accountlist_exportButton->setObjectName(QStringLiteral("accountlist_exportButton"));
        accountlist_exportButton->setGeometry(QRect(50, 280, 101, 21));
        accountlist_backButton = new QPushButton(accountlist);
        accountlist_backButton->setObjectName(QStringLiteral("accountlist_backButton"));
        accountlist_backButton->setGeometry(QRect(320, 280, 111, 21));
        label_4 = new QLabel(accountlist);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 320, 20, 31));
        label_6 = new QLabel(accountlist);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(380, 320, 51, 31));
        label_7 = new QLabel(accountlist);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(430, 320, 20, 31));
        label_5 = new QLabel(accountlist);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(300, 320, 81, 31));

        retranslateUi(accountlist);

        QMetaObject::connectSlotsByName(accountlist);
    } // setupUi

    void retranslateUi(QWidget *accountlist)
    {
        accountlist->setWindowTitle(QApplication::translate("accountlist", "Form", 0));
        accountlist_searchButton->setText(QApplication::translate("accountlist", "\346\220\234\347\264\242", 0));
        label_1->setText(QApplication::translate("accountlist", "\346\211\276\345\210\260", 0));
        label_2->setText(QApplication::translate("accountlist", "0", 0));
        label_3->setText(QApplication::translate("accountlist", "\346\235\241\347\273\223\346\236\234", 0));
        accountlist_exportButton->setText(QApplication::translate("accountlist", "\345\257\274\345\207\272", 0));
        accountlist_backButton->setText(QApplication::translate("accountlist", "\350\277\224\345\233\236", 0));
        label_4->setText(QApplication::translate("accountlist", "\345\210\260", 0));
        label_6->setText(QApplication::translate("accountlist", "0", 0));
        label_7->setText(QApplication::translate("accountlist", "\345\205\203", 0));
        label_5->setText(QApplication::translate("accountlist", "\345\205\261\351\234\200\350\246\201\347\255\271\346\254\276", 0));
    } // retranslateUi

};

namespace Ui {
    class accountlist: public Ui_accountlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTLIST_H
