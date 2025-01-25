/********************************************************************************
** Form generated from reading UI file 'bank.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANK_H
#define UI_BANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bank
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *createAccountButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *exitButton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *bank)
    {
        if (bank->objectName().isEmpty())
            bank->setObjectName(QStringLiteral("bank"));
        bank->resize(393, 363);
        centralWidget = new QWidget(bank);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(24);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        verticalLayout->addWidget(loginButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        createAccountButton = new QPushButton(widget);
        createAccountButton->setObjectName(QStringLiteral("createAccountButton"));

        verticalLayout->addWidget(createAccountButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        exitButton = new QPushButton(widget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setMouseTracking(false);

        verticalLayout->addWidget(exitButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(widget);

        bank->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(bank);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 393, 17));
        bank->setMenuBar(menuBar);
        mainToolBar = new QToolBar(bank);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        bank->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(bank);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        bank->setStatusBar(statusBar);

        retranslateUi(bank);

        loginButton->setDefault(true);


        QMetaObject::connectSlotsByName(bank);
    } // setupUi

    void retranslateUi(QMainWindow *bank)
    {
        bank->setWindowTitle(QApplication::translate("bank", "bank", 0));
        label->setText(QApplication::translate("bank", "\346\254\242\350\277\216\357\274\201", 0));
        loginButton->setText(QApplication::translate("bank", "\347\231\273\345\275\225", 0));
        createAccountButton->setText(QApplication::translate("bank", "\345\210\233\345\273\272\350\264\246\346\210\267", 0));
        exitButton->setText(QApplication::translate("bank", "\351\200\200\345\207\272\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class bank: public Ui_bank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANK_H
