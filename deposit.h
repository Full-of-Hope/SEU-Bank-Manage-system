#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QWidget>

//存款

namespace Ui {
class deposit;
}

class deposit : public QWidget
{
    Q_OBJECT

public:
    explicit deposit(QWidget *parent = 0);
    ~deposit();

private slots:
    void on_deposit_okButton_clicked();

    void on_deposit_backButton_clicked();

private:
    Ui::deposit *ui;
};

#endif // DEPOSIT_H
