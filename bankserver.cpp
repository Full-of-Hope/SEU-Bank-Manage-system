#include "bankserver.h"
#include"preparation.h"
#include"interest.h"

#include <fstream>
#include <QDebug>

bankserver::bankserver()
{

}
bool bankserver::AccountExist(string strNumber)
{
    return (db.ExistAccount(strNumber));
}


bool bankserver::AccountAdd(string strNum, string strNam, string strPas, string strAdd, int iTyp, double dInt, string strOpenum,string strOpe)
{
    if (strNam != "" &&
        strPas != "" &&
        strAdd != "" &&
        strOpenum != "" &&
        strOpe != ""
        )
    {
        db.AddAccount(strNum, strNam, strPas, strAdd, iTyp, dInt, strOpenum,strOpe);
        return true;
    }
    return false;
}


//bool bankserver::AccountEdit(string strNam, string strAdd, int iTyp, double dInt)
//{
//    if (strNam != "" && strAdd != "")
//    {
//        db.EditAccount(strCurrentNumber, strNam, strAdd, iTyp, dInt);
//        return true;
//    }
//    return false;
//}


bool bankserver::PasswdEdit(string strOldPasswd, string strPasswd)
{
    if (!db.CheckAccount(strCurrentNumber, strOldPasswd))
    {
        return false;
    }
    db.EditPasswd(strCurrentNumber, strPasswd);
    return true;
}


bool bankserver::Login(string strNumber, string strPasswd)
{
    if (!db.CheckAccount(strNumber, strPasswd))
        return false;

    strCurrentNumber = strNumber; //设置已经登录的账户
    return true;
}

//标记挂失
void bankserver::ReportLost(time_t tTime)
{
    db.SetLost(strCurrentNumber, tTime);
}

//取消挂失
void bankserver::RidLost()
{
    db.RidLost(strCurrentNumber);
}

//存款
void bankserver::Deposit(double dMoney, string strOpe)
{
    time_t tTime = time(NULL);
    db.DepositMoney(strCurrentNumber, tTime, dMoney, strOpe);
}

//取款
bool bankserver::Withdraw(double dMoney, string strOpe)
{
    time_t tTime = time(NULL);
    return db.WithdrawMoney(strCurrentNumber, tTime, dMoney, strOpe);
}


string bankserver::GetName()
{
    return db.GetName(strCurrentNumber);
}


string bankserver::GetAddress()
{
    return db.GetAddress(strCurrentNumber);
}


int bankserver::GetType()
{
    return db.GetType(strCurrentNumber);
}


double bankserver::GetInterest()
{
    return db.GetInterest(strCurrentNumber);
}


bool bankserver::GetLost()
{
    return db.GetLost(strCurrentNumber);
}


time_t bankserver::GetLostTime()
{
    return db.GetLostTime(strCurrentNumber);
}


string bankserver::GetOperatornum()
{
    return db.GetOperator(strCurrentNumber);
}

string bankserver::GetOperator()
{
    return db.GetOperator(strCurrentNumber);
}


string bankserver::GetNumber(int iNum)
{
    return db.GetNumber(iNum);
}


string bankserver::GetName(int iNum)
{
    return db.GetName(iNum);
}


string bankserver::GetAddress(int iNum)
{
    return db.GetAddress(iNum);
}


int bankserver::GetType(int iNum)
{
    return db.GetType(iNum);
}


double bankserver::GetInterest(int iNum)
{
    return db.GetInterest(iNum);
}


bool bankserver::GetLost(int iNum)
{
    return db.GetLost(iNum);
}


time_t bankserver::GetLostTime(int iNum)
{
    return db.GetLostTime(iNum);
}


string bankserver::GetOperatornum(int iNum)
{
    return db.GetOperatornum(iNum);
}


string bankserver::GetOperator(int iNum)
{
    return db.GetOperator(iNum);
}



int bankserver::GetNumberOfAccounts()
{
    return db.GetNumberOfAccounts();
}


int bankserver::GetNumberOfFlows()
{
    return db.GetNumberOfFlows(strCurrentNumber);
}


time_t bankserver::GetTime(int iFlow)
{
    return db.GetTime(strCurrentNumber, iFlow);
}


double bankserver::GetMoney(int iFlow)
{
    return db.GetMoney(strCurrentNumber, iFlow);
}


int bankserver::GetOperationType(int iFlow)
{
    return db.GetOperationType(strCurrentNumber, iFlow);
}

string bankserver::GetFlowOperatornum(int iFlow)
{
    return db.GetOperatornum(strCurrentNumber, iFlow);
}


string bankserver::GetFlowOperator(int iFlow)
{
    return db.GetOperator(strCurrentNumber, iFlow);
}


double bankserver::GetTotal()
{
    interest Ecocalc;
    Ecocalc.SetType(GetType()); //计算
    for (int i = 0; i < GetNumberOfFlows(); i++)
    {
        if (GetOperationType(i) == 0) //存款
            Ecocalc.Add(GetMoney(i), GetTime(i));
        else //取款
            Ecocalc.Sub(GetMoney(i), GetTime(i));
    }

    return Ecocalc.Query(time(nullptr));
}


double bankserver::GetPrepare(time_t iDay)
{
    double dAns = 0;

    time_t tTime1 = time(nullptr);
    time_t tTime2 = iDay;

    if (tTime1 >= tTime2) //非法时间
        return 0;

    for (int k = 0; k < GetNumberOfAccounts(); k++) //检查所有账户
    {
        strCurrentNumber = GetNumber(k);

        interest Ecocalc; //计算

        Ecocalc.SetType(GetType());

        for (int i = 0; i < GetNumberOfFlows(); i++)
        {
            if (GetOperationType(i) == 0) //存款
                Ecocalc.Add(GetMoney(i), GetTime(i));
            else //取款
                Ecocalc.Sub(GetMoney(i), GetTime(i));
        }

        dAns += (Ecocalc.QueryPrepare(tTime2));
    }

    return dAns;
}

//将帐户列表导出为html格式
void bankserver::ExportAccountFile(string strFileName)
{
    ofstream oFile(strFileName, ios::trunc);

    oFile<<"<html>\n<body>\n<table border='1'>\n<tr>\n<th>账号</th>\n<th>姓名</th>\n<th>地址</th>\n<th>储种</th>\n"
         <<"<th>利息</th>\n<th>是否挂失</th>\n<th>员工号</th>\n</tr>操作员</th>\n</th>\n";

    int iNumberOfAccounts = GetNumberOfAccounts();

    for (int i = 0; i < iNumberOfAccounts; i++)
    {
        int iTmpType = GetType(i);
        bool bLost = GetLost(i);

        string strTypeString; //输出类型
        string strInterestString; //输出利息
        switch (iTmpType)
        {

        case 0:
            strTypeString = "一年期";
            strInterestString = "1.98";
            break;
        case 1:
            strTypeString = "三年期";
            strInterestString = "2.25";
            break;
        case 2:
            strTypeString = "五年期";
            strInterestString = "3.5";
            break;
        }

        string strLostString;
        if (bLost)
        {

            time_t tTime = GetLostTime(i);

            char szTime[100] = {'\0'};

            tm *pTm = new tm;
            localtime_s(pTm, &tTime);

            pTm->tm_year += 1900;
            pTm->tm_mon += 1;

            sprintf_s(szTime, "%04d年%02d月%02d日 %02d:%02d:%02d",
                      pTm->tm_year,
                      pTm->tm_mon,
                      pTm->tm_mday,
                      pTm->tm_hour,
                      pTm->tm_min,
                      pTm->tm_sec);

            strLostString = szTime;

            delete pTm;
            pTm = NULL;
        }
        else
        {
            strLostString = "否";
        }

        oFile<<"<tr>\n";
        oFile<<"<td>"<<GetNumber(i)<<"</td>\n";
        oFile<<"<td>"<<GetName(i)<<"</td>\n";
        oFile<<"<td>"<<GetAddress(i)<<"</td>\n";
        oFile<<"<td>"<<strTypeString<<"</td>\n";
        oFile<<"<td>"<<strInterestString<<"</td>\n";
        oFile<<"<td>"<<strLostString<<"</td>\n";
        oFile<<"<td>"<<GetOperator(i)<<"</td>\n";
        oFile<<"</tr>\n";
    }


    oFile<<"</table>\n</body>\n</html>\n";
}



// 导出账户信息
void bankserver::ExportFlowFile(string strFileName)
{
    ofstream oFile(strFileName, ios::trunc);

    oFile<<"<html>\n<body>\n<table border='1'>\n<tr>\n<th>操作时间</th>\n<th>操作类型</th>\n<th>金额</th>\n<th>员工号</th>\n<th>操作员</th>\n</tr>\n";

    int iNumberOfFlows = GetNumberOfFlows();

    for (int i = 0; i < iNumberOfFlows; i++)
    {
        int iTmpType = GetOperationType(i);
        time_t tTime = GetTime(i);

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

        oFile<<"<tr>\n";
        oFile<<"<td>"<<strTime<<"</td>\n";
        oFile<<"<td>"<<strTypeString<<"</td>\n";
        oFile<<"<td>"<<GetMoney(i)<<"</td>\n";
        oFile<<"<td>"<<GetFlowOperator(i)<<"</td>\n";
        oFile<<"</tr>\n";
    }

    oFile<<"</table>\n</body>\n</html>\n";
}
