#ifndef BANK_H
#define BANK_H

#include <QMainWindow>

//首页

namespace Ui {
class bank;
}

//继承QMainWindow
class bank : public QMainWindow
{
    Q_OBJECT

public:
    //构造函数
    explicit bank(QWidget *parent = 0);
    //析构函数
    ~bank();

private slots:
    void on_loginButton_clicked();

    void on_createAccountButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::bank *ui;
};

#endif // BANK_H
