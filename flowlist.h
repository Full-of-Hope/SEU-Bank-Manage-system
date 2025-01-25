#ifndef FLOWLIST_H
#define FLOWLIST_H

#include <QWidget>

//打印流水

namespace Ui {
class flowlist;
}

class flowlist : public QWidget
{
    Q_OBJECT

public:
    explicit flowlist(QWidget *parent = 0);
    ~flowlist();

private slots:
    void on_accountlist_searchEdit_textChanged(const QString &arg1);

    void on_accountlist_exportButton_clicked();

    void on_accountlist_backButton_clicked();

private:
    Ui::flowlist *ui;

    void SetDefault();
};

#endif // FLOWLIST_H
