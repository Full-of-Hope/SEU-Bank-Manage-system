#include "deposit.h"
#include "ui_deposit.h"
#include"choice.h"
#include"bankserver.h"

#include <QDebug>
#include <QMessageBox>
#include <QPlainTextEdit>

deposit::deposit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deposit)
{
    ui->setupUi(this);



    ui->deposit_moneyInput->setText("0"); //将文本内容设置为字符串"0"
    ui->deposit_moneyInput->setFocus();  //输入焦点设置到deposit_moneyInput组件上。
                                         //这意味着当用户接下来与窗口交互时，输入将直接进入到这个组件中，而不是窗口中的其他组件。


}

deposit::~deposit()
{
    delete ui;
}

void deposit::on_deposit_okButton_clicked()
{
    switch (QMessageBox::warning(this, NULL,
                                 tr("确认存入") + (ui->deposit_moneyInput->text()) + tr("元吗?"),
                                 tr("确认"), tr("取消"), 0, 1))
    {
    case 0:
        bankserver x;
        x.Deposit((ui->deposit_moneyInput->text()).toDouble(),
                           (ui->login_employeeInput->text()).toStdString());
        QMessageBox::information(this, NULL,
                                 tr("成功存入") + (ui->deposit_moneyInput->text()) + tr("元！"),
                                 tr("确认"));
        choice *choice_windows;
        choice_windows = new choice();
        choice_windows->show();
        this->close();
        break;
    }
}

void deposit::on_deposit_backButton_clicked()
{
    choice *choice_windows;
    choice_windows = new choice();
    choice_windows->show();
    this->close();
}
