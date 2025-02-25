#include "changepassword.h"
#include "ui_changepassword.h"
#include"choice.h"
#include"bankserver.h"

#include <QDebug>
#include <QMessageBox>
#include <QPlainTextEdit>
#include<QString>

changepassword::changepassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::changepassword)
{
    ui->setupUi(this);

    setWindowFlags(Qt::WindowCloseButtonHint | Qt::MSWindowsFixedSizeDialogHint);
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
    setWindowFlags(windowFlags() & ~Qt::CustomizeWindowHint);
    setFixedSize(this->width(), this->height());
}

changepassword::~changepassword()
{
    delete ui;
}

void changepassword::on_login_okButton_clicked()
{
    int result = QMessageBox::warning(this, tr(""), tr("确认修改密码吗？"), tr("确认"), tr("返回"), 0, 1);
    if (result == 0)
    {
        if (ui->login_passwdInput->text() != ui->login_confirmPasswdInput->text())
        {
            ui->login_passwdInput->setText(QString::fromStdString(""));
            ui->login_confirmPasswdInput->setText(QString::fromStdString(""));
            QMessageBox::critical(this, tr("错误"), tr("请重新检查你的输入！"), tr("确认"), 0);
            return;
        }
        bankserver x;
        if (!x.PasswdEdit(ui->login_passwdInput_old->text().toStdString(),
                                   ui->login_passwdInput->text().toStdString()))
        {
            ui->login_passwdInput->setText(QString::fromStdString(""));
            ui->login_confirmPasswdInput->setText(QString::fromStdString(""));
            ui->login_passwdInput_old->setText(QString::fromStdString(""));
            QMessageBox::critical(this, tr("错误"), tr("密码输入错误！"), tr("确认"), 0);
            return;
        }
        QMessageBox::information(this, tr(""), tr("密码修改成功！"), tr("确认"), 0);

        choice *choice_windows;
        choice_windows = new choice();
        choice_windows->show();
        this->close();
        delete this;
    }
}

void changepassword::on_login_backButton_clicked()
{
    choice *choice_windows;
    choice_windows = new choice();
    choice_windows->show();
    this->close();
}

void changepassword::on_login_passwdInput_textEdited(const QString &arg1)
{
    if (arg1 != ui->login_confirmPasswdInput->text())
    {
        ui->login_repeatPasswdState->setStyleSheet("color:red;");
        ui->login_repeatPasswdState->setText(QString::fromStdString("× 密码重复不正确"));
    }
    else
    {
        ui->login_repeatPasswdState->setStyleSheet("color:green;");
        ui->login_repeatPasswdState->setText(QString::fromStdString("√"));
    }
}

void changepassword::on_login_confirmPasswdInput_textEdited(const QString &arg1)
{
    if (arg1 != ui->login_passwdInput->text())
    {
        ui->login_repeatPasswdState->setStyleSheet("color:red;");
        ui->login_repeatPasswdState->setText(QString::fromStdString("× 密码重复不正确"));
    }
    else
    {
        ui->login_repeatPasswdState->setStyleSheet("color:green;");
        ui->login_repeatPasswdState->setText(QString::fromStdString("√"));
    }
}
