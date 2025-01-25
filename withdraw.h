#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <QWidget>

//取款

namespace Ui {
class withdraw;
}

class withdraw : public QWidget
{
    Q_OBJECT

public:
    explicit withdraw(QWidget *parent = 0);
    ~withdraw();

private slots:
    void on_deposit_okButton_clicked();

    void on_deposit_backButton_clicked();

private:
    Ui::withdraw *ui;
};

#endif // WITHDRAW_H
