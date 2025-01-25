#include "choice.h"
#include "ui_choice.h"
#include"bankserver.h"
#include"deposit.h"
#include"withdraw.h"
#include"flowlist.h"
#include"changepassword.h"
#include"bank.h"

#include<QTime>
#include <QDebug>
#include <QMessageBox>
#include <ctime>
#include<QInputDialog>
#include<QLineEdit>

using namespace std;
choice::choice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choice)
{
    ui->setupUi(this);

    QTime time;
    time.start();  //测量时间的类

}

choice::~choice()
{
    delete ui;
}

void choice::on_options_depositButton_clicked()
{
    //打开存款窗口
    deposit *deposit_windows;
    deposit_windows = new deposit();
    deposit_windows->show();
    this->close();
}

void choice::on_options_withdrawButton_clicked()
{
    //打开取款窗口
    withdraw *withdraw_windows;
    withdraw_windows = new withdraw();
    withdraw_windows->show();
    this->close();
}

void choice::on_options_flowButton_clicked()
{
    flowlist *flowlist_windows;
    flowlist_windows = new flowlist();
    flowlist_windows->show();
    this->close();
}

void choice::on_options_passwdButton_clicked()
{
    changepassword *changepassword_windows;
    changepassword_windows = new changepassword();
    changepassword_windows->show();
    this->close();
    delete this;
}

void choice::on_options_lostButton_clicked()
{
    int result = QMessageBox::warning(this, tr(""), tr("确认挂失吗？"), tr("确认"), tr("取消"), 0, 1);
    switch (result)
    {
    case 0:
        QTime currenttime;
        currenttime.start();
        time_t tCurrentTime = currenttime.elapsed();
        bankserver x;
        x.ReportLost(tCurrentTime);
        QMessageBox::information(this, tr(""), tr("账户已挂失！"), tr("确认"), 0);

        bank *bank_windows;
        bank_windows = new bank();
        bank_windows->show();
        this->close();
        break;
    }
}
