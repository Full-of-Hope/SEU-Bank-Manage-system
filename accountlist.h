#ifndef ACCOUNTLIST_H
#define ACCOUNTLIST_H

#include <QWidget>

//账户记录

namespace Ui {
class accountlist;
}

class accountlist : public QWidget
{
    Q_OBJECT

public:
    explicit accountlist(QWidget *parent = 0);
    ~accountlist();

private slots:


    void on_accountlist_backButton_clicked();            //返回

    void on_accountlist_exportButton_clicked();          //导出

    void on_dateEdit_dateChanged(const QDate &date);     //时间

    void on_accountlist_searchEdit_textChanged(const QString &arg1);  //搜索

private:
    Ui::accountlist *ui;

    void SetDefault();
};

#endif // ACCOUNTLIST_H
