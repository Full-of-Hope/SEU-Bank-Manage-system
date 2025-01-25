#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QWidget>

//修改密码

namespace Ui {
class changepassword;
}

class changepassword : public QWidget
{
    Q_OBJECT

public:
    explicit changepassword(QWidget *parent = 0);
    ~changepassword();

private slots:
    void on_login_okButton_clicked();

    void on_login_backButton_clicked();

    void on_login_passwdInput_textEdited(const QString &arg1);

    void on_login_confirmPasswdInput_textEdited(const QString &arg1);

private:
    Ui::changepassword *ui;
};

#endif // CHANGEPASSWORD_H
