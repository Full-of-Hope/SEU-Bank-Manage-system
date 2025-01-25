#ifndef BANKSERVER_H
#define BANKSERVER_H

#include"preparation.h"

#include <string>

using namespace std;

//各种服务函数

class bankserver
{
public:
    bankserver();
    //  账户操作
    bool AccountExist(string);
    bool AccountAdd(string, string, string, string, int, double, string,string);
    //bool AccountEdit(string, string, int, double);
    bool PasswdEdit(string, string);
    bool Login(string, string);
    void ReportLost(time_t);
    void RidLost();

    void Deposit(double, string);
    bool Withdraw(double, string);

    //得到临时账户的信息
    string GetName();
    string GetAddress();
    int GetType();
    double GetInterest();
    bool GetLost();
    time_t GetLostTime();
    string GetOperatornum();
    string GetOperator();

    //information by the index in vAccount
    string GetNumber(int);
    string GetName(int);
    string GetAddress(int);
    int GetType(int);
    double GetInterest(int);
    bool GetLost(int);
    time_t GetLostTime(int);
    string GetOperatornum(int);
    string GetOperator(int);

    //get number
    int GetNumberOfAccounts();
    int GetNumberOfFlows();

    time_t GetTime(int);
    double GetMoney(int);
    int GetOperationType(int);
    string GetFlowOperator(int);
    string GetFlowOperatornum(int);

    //defgroup get information of the flow by index of the flow
    double GetTotal();
    double GetPrepare(time_t);

    //export the list
    void ExportAccountFile(string);
    void ExportFlowFile(string);

private:
    preparation db; // 我们可以在这里定义一个数据库

    string strCurrentNumber; // the account login now
};

#endif // BANKSERVER_H
