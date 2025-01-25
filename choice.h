#ifndef CHOICE_H
#define CHOICE_H

#include <QWidget>

//登录后选择

namespace Ui {
class choice;
}

class choice : public QWidget
{
    Q_OBJECT

public:
    explicit choice(QWidget *parent = 0);
    ~choice();

private slots:
    void on_options_depositButton_clicked();   //存款

    void on_options_withdrawButton_clicked();  //取款

    void on_options_flowButton_clicked();      //流水账单

    void on_options_passwdButton_clicked();    //修改密码

    void on_options_lostButton_clicked();      //挂失

private:
    Ui::choice *ui;
};

#endif // CHOICE_H
