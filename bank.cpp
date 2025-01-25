#include "bank.h"
#include "ui_bank.h"
#include"enroll.h"
#include"creatdispoit.h"

#include <QDebug>
#include <QDialog>
#include <QMessageBox>
#include <QString>


bank::bank(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bank)
{
    ui->setupUi(this);


//    setWindowFlags(Qt::WindowCloseButtonHint | Qt::MSWindowsFixedSizeDialogHint); //窗口有关闭按钮,窗口大小固定
//    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);  //移除了窗口的最大化按钮
//    setWindowFlags(windowFlags() & ~Qt::CustomizeWindowHint);       //移除了窗口的自定义按钮（如系统菜单）
//    setWindowFlags(windowFlags() & ~Qt::WindowCloseButtonHint);     //移除了窗口的关闭按钮
//    setFixedSize(this->width(), this->height()); //固定窗口的大小

}

bank::~bank()
{
    delete ui;
}

//登录，并关闭当前窗口
void bank::on_loginButton_clicked()
{
    enroll * enroll_windows;
    enroll_windows = new enroll();
    enroll_windows->show();
    this->close();
}

//创建账户
void bank::on_createAccountButton_clicked()
{
    CreatDispoit * CreatDispoit_windows;
    CreatDispoit_windows = new CreatDispoit();
    CreatDispoit_windows->show();
    this->close();
}

//退出
void bank::on_exitButton_clicked()
{
  this->close();
}

