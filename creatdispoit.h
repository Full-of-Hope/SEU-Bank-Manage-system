#ifndef CREATDISPOIT_H
#define CREATDISPOIT_H

#include <QWidget>



//第一次存款，创建存款信息


namespace Ui {
class CreatDispoit;
}

class CreatDispoit : public QWidget
{
    Q_OBJECT

public:
    explicit CreatDispoit(QWidget *parent = 0);
    ~CreatDispoit();

private slots:
    void on_login_okButton_clicked();

    void on_login_backButton_clicked();

    void on_login_passwdInput_textEdited(const QString &arg1);

    void on_login_confirmPasswdInput_textEdited(const QString &arg1);

    void on_login_typeCombobox_currentIndexChanged(int index);

private:
    Ui::CreatDispoit *ui;
};

#endif // CREATDISPOIT_H
