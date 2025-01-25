/********************************************************************************
** Form generated from reading UI file 'flowlist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWLIST_H
#define UI_FLOWLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flowlist
{
public:
    QPushButton *accountlist_searchButton;
    QLineEdit *accountlist_searchEdit;
    QTableView *accountlist_tableView;
    QPushButton *accountlist_backButton;
    QPushButton *accountlist_exportButton;
    QLabel *label_1;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_2;

    void setupUi(QWidget *flowlist)
    {
        if (flowlist->objectName().isEmpty())
            flowlist->setObjectName(QStringLiteral("flowlist"));
        flowlist->resize(487, 408);
        accountlist_searchButton = new QPushButton(flowlist);
        accountlist_searchButton->setObjectName(QStringLiteral("accountlist_searchButton"));
        accountlist_searchButton->setGeometry(QRect(370, 30, 101, 21));
        accountlist_searchEdit = new QLineEdit(flowlist);
        accountlist_searchEdit->setObjectName(QStringLiteral("accountlist_searchEdit"));
        accountlist_searchEdit->setGeometry(QRect(20, 31, 321, 20));
        accountlist_tableView = new QTableView(flowlist);
        accountlist_tableView->setObjectName(QStringLiteral("accountlist_tableView"));
        accountlist_tableView->setGeometry(QRect(20, 60, 451, 251));
        accountlist_tableView->setAlternatingRowColors(true);
        accountlist_tableView->setSortingEnabled(true);
        accountlist_tableView->horizontalHeader()->setVisible(false);
        accountlist_tableView->verticalHeader()->setVisible(false);
        accountlist_backButton = new QPushButton(flowlist);
        accountlist_backButton->setObjectName(QStringLiteral("accountlist_backButton"));
        accountlist_backButton->setGeometry(QRect(310, 360, 131, 31));
        accountlist_exportButton = new QPushButton(flowlist);
        accountlist_exportButton->setObjectName(QStringLiteral("accountlist_exportButton"));
        accountlist_exportButton->setGeometry(QRect(50, 360, 131, 31));
        label_1 = new QLabel(flowlist);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(30, 315, 31, 31));
        label_6 = new QLabel(flowlist);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 315, 20, 31));
        label_4 = new QLabel(flowlist);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 315, 71, 31));
        label_3 = new QLabel(flowlist);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 320, 72, 20));
        label_5 = new QLabel(flowlist);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 315, 61, 31));
        label_2 = new QLabel(flowlist);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 320, 21, 21));

        retranslateUi(flowlist);

        QMetaObject::connectSlotsByName(flowlist);
    } // setupUi

    void retranslateUi(QWidget *flowlist)
    {
        flowlist->setWindowTitle(QApplication::translate("flowlist", "Form", 0));
        accountlist_searchButton->setText(QApplication::translate("flowlist", "\346\220\234\347\264\242", 0));
        accountlist_backButton->setText(QApplication::translate("flowlist", "\350\277\224\345\233\236", 0));
        accountlist_exportButton->setText(QApplication::translate("flowlist", "\345\257\274\345\207\272\345\205\250\351\203\250", 0));
        label_1->setText(QApplication::translate("flowlist", "\346\211\276\345\210\260", 0));
        label_6->setText(QApplication::translate("flowlist", "\345\205\203", 0));
        label_4->setText(QApplication::translate("flowlist", "0", 0));
        label_3->setText(QApplication::translate("flowlist", "\346\235\241\347\273\223\346\236\234", 0));
        label_5->setText(QApplication::translate("flowlist", "\350\264\246\346\210\267\345\205\261\350\256\241", 0));
        label_2->setText(QApplication::translate("flowlist", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class flowlist: public Ui_flowlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWLIST_H
