#include "flowlist.h"
#include "ui_flowlist.h"
#include"bankserver.h"
#include"choice.h"

#include<QString>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QTableView>
#include <stdio.h>
#include<ctime>

using namespace std;

flowlist::flowlist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::flowlist)
{
    ui->setupUi(this);



    SetDefault();

    bankserver x;
    ui->label_4->setText(QString::number(x.GetTotal()));


}

flowlist::~flowlist()
{
    delete ui;
}

void flowlist::on_accountlist_searchEdit_textChanged(const QString &arg1)
{
    string strSearchString = arg1.toStdString();
    QStandardItemModel *model = new QStandardItemModel(this);

    ui->accountlist_tableView->setModel(model);  //管理表格视图中的数据。

    model->setHorizontalHeaderItem(0, new QStandardItem("操作时间"));
    model->setHorizontalHeaderItem(1, new QStandardItem("操作类型"));
    model->setHorizontalHeaderItem(2, new QStandardItem("金额"));
    model->setHorizontalHeaderItem(3, new QStandardItem("员工号"));
    model->setHorizontalHeaderItem(4, new QStandardItem("操作员"));

    //设置列宽
    ui->accountlist_tableView->setColumnWidth(0, 200);
    ui->accountlist_tableView->setColumnWidth(1, 150);
    ui->accountlist_tableView->setColumnWidth(2, 200);
    ui->accountlist_tableView->setColumnWidth(3, 80);
    ui->accountlist_tableView->setColumnWidth(4, 120);

    //ui->accountlist_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->accountlist_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->accountlist_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    bankserver x;
    int iNumberOfFlows = x.GetNumberOfFlows();

    int iItemsFinded = -1;
    for (int i = 0; i < iNumberOfFlows; i++)
    {
        bankserver x;
        int iTmpType = x.GetOperationType(i);
        time_t tTime = x.GetTime(i);

        string strTypeString;
        switch (iTmpType)
        {
        case 0:
            strTypeString = "存款";
            break;
        case 1:
            strTypeString = "取款";
            break;
        }

        string strTime;
        char szTime[100] = {'\0'};

        tm *pTm = new tm;
        localtime_s(pTm, &tTime);
        //pTm = localtime(&time_t_time);
        pTm->tm_year += 1900;
        pTm->tm_mon += 1;

        sprintf_s(szTime, "%04d年%02d月%02d日 %02d:%02d:%02d",
                  pTm->tm_year,
                  pTm->tm_mon,
                  pTm->tm_mday,
                  pTm->tm_hour,
                  pTm->tm_min,
                  pTm->tm_sec);

        strTime = szTime;

        delete pTm;
        pTm = NULL;

        if (x.GetMoney(i) == arg1.toDouble() ||
            strTypeString.find(strSearchString) != string::npos ||
            strTime.find(strSearchString) != string::npos ||
            x.GetOperator(i).find(strSearchString) != string::npos)
        {
            iItemsFinded++;

            //设置视图模型
            model->setItem(iItemsFinded, 0, new QStandardItem(QString::fromStdString(strTime)));  //时间
            model->setItem(iItemsFinded, 1, new QStandardItem(QString::fromStdString(strTypeString)));//操作类型
            model->setItem(iItemsFinded, 2, new QStandardItem(QString::number(x.GetMoney(i))));//金额
            model->setItem(iItemsFinded, 3, new QStandardItem(QString::fromStdString(x.GetFlowOperatornum(i))));//员工号
            model->setItem(iItemsFinded, 4, new QStandardItem(QString::fromStdString(x.GetFlowOperator(i))));//操作员姓名
        }
    }
    ui->label_2->setNum(iItemsFinded + 1);
}

void flowlist::on_accountlist_exportButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("导出"),
                                                    "",
                                                    tr("超文本标记语言文件 (*.html)"));
    if (!fileName.isNull())
    {
        //fileName是文件名
        bankserver x;
        x.ExportFlowFile(fileName.toStdString());
        QMessageBox::information(this, NULL,
                                 tr("导出成功"),
                                 tr("确认"));
    }
}

void flowlist::on_accountlist_backButton_clicked()
{
    choice *choice_windows;
    choice_windows = new choice();
    choice_windows->show();
    this->close();
}

//违约
void flowlist::SetDefault()
{
    QStandardItemModel *model = new QStandardItemModel(this);
    ui->accountlist_tableView->setModel(model);

    model->setHorizontalHeaderItem(0, new QStandardItem("操作时间"));
    model->setHorizontalHeaderItem(1, new QStandardItem("操作类型"));
    model->setHorizontalHeaderItem(2, new QStandardItem("金额"));
    model->setHorizontalHeaderItem(4, new QStandardItem("员工号"));
    model->setHorizontalHeaderItem(3, new QStandardItem("操作员"));

    ui->accountlist_tableView->setColumnWidth(0, 200);
    ui->accountlist_tableView->setColumnWidth(1, 150);
    ui->accountlist_tableView->setColumnWidth(2, 200);
    ui->accountlist_tableView->setColumnWidth(3, 80);
    ui->accountlist_tableView->setColumnWidth(4, 120);

    //ui->accountlist_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->accountlist_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->accountlist_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    bankserver x;
    int iNumberOfFlows = x.GetNumberOfFlows();

    for (int i = 0; i < iNumberOfFlows; i++)
    {
        int iTmpType = x.GetOperationType(i);
        time_t tTime = x.GetTime(i);
        //qDebug()<<("Type=")<<(iTmpType);
        string strTypeString;
        switch (iTmpType)
        {
        case 0:
            strTypeString = "存款";
            break;
        case 1:
            strTypeString = "取款";
            break;
        }
        //qDebug()<<("String=")<<(QString::fromStdString(strTypeString));

        string strTime;
        char szTime[100] = {'\0'};

        tm *pTm = new tm;
        localtime_s(pTm, &tTime);
        //pTm = localtime(&time_t_time);
        pTm->tm_year += 1900;
        pTm->tm_mon += 1;

        sprintf_s(szTime, "%04d年%02d月%02d日 %02d:%02d:%02d",
                  pTm->tm_year,
                  pTm->tm_mon,
                  pTm->tm_mday,
                  pTm->tm_hour,
                  pTm->tm_min,
                  pTm->tm_sec);

        strTime = szTime;
        //qDebug()<<"here";

        delete pTm;
        pTm = NULL;

        model->setItem(i, 0, new QStandardItem(QString::fromStdString(strTime)));
        model->setItem(i, 1, new QStandardItem(QString::fromStdString(strTypeString)));
        model->setItem(i, 2, new QStandardItem(QString::number(x.GetMoney(i))));
        model->setItem(i, 3, new QStandardItem(QString::fromStdString(x.GetFlowOperatornum(i))));
        model->setItem(i, 4, new QStandardItem(QString::fromStdString(x.GetFlowOperator(i))));
    }
    ui->label_2->setNum(iNumberOfFlows);
}
