#ifndef ENROLL_H
#define ENROLL_H

#include <QWidget>

//登录

namespace Ui {
class enroll;
}

class enroll : public QWidget
{
    Q_OBJECT

public:
    explicit enroll(QWidget *parent = 0);
    ~enroll();

private slots:
    void on_login_okButton_clicked();

    void on_login_backButton_clicked();

    void on_login_accountInput_textChanged(const QString &arg1);

private:
    Ui::enroll *ui;
};

#endif // ENROLL_H
