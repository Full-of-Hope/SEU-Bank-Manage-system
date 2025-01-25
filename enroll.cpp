#include "enroll.h"
#include "ui_enroll.h"
#include "bank.h"
#include "bankserver.h"
#include "choice.h"

#include<QString>
#include <QDebug>
#include <QMessageBox>
#include <stdio.h>
#include<QTime>

enroll::enroll(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::enroll)
{
    ui->setupUi(this);


}

enroll::~enroll()
{
    delete ui;
}

void enroll::on_login_okButton_clicked()
{
    bankserver x;
    if (!x.Login(ui->login_accountInput->text().toStdString(),
                          ui->login_passwdInput->text().toStdString()))
    {
        ui->login_passwdInput->setText(QString::fromStdString(""));
        QMessageBox::critical(this, tr("错误"), tr("密码错误！"), tr("确认"), 0);
    }
    else if (x.GetLost())
    {
        if (!QMessageBox::critical(this, tr(""), tr("账户已被挂失！\n是否解除挂失？"), tr("解除挂失"), tr("返回"), 0, 1))
        {
            x.RidLost();
            choice *choice_windows;
            choice_windows = new choice();
            choice_windows->show();
            this->close();
        }
    }
    else
    {
        choice *choice_windows;
        choice_windows = new choice();
        choice_windows->show();
        this->close();
    }
}

void enroll::on_login_backButton_clicked()
{
    bank *bank_windows;
    bank_windows = new bank();
    bank_windows->show();
    this->close();
}

void enroll::on_login_accountInput_textChanged(const QString &arg1)
{
    bankserver x;
    if (arg1 == "")
    {
        ui->login_accountStateLabel->setText(QString::fromStdString(""));  //将 C++ 标准库中的 std::string 对象转换为 Qt 的 QString 对象
    }

    if (!x.AccountExist(arg1.toStdString()))
    {
        ui->login_accountStateLabel->setStyleSheet("color:red;");
        ui->login_accountStateLabel->setText(QString::fromStdString("× 账号不存在"));
    }
    else
    {
        ui->login_accountStateLabel->setStyleSheet("color:green;");
        ui->login_accountStateLabel->setText(QString::fromStdString("√"));
    }
}
