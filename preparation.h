#ifndef PREPARATION_H
#define PREPARATION_H

//准备工作，对文件，账户信息的处理

#include<map>
#include<QString>
#include<vector>
#include<string>

using namespace std;

class preparation
{
public:
    preparation();

    //文件操作
    void GetFile();
    void WriteFile();

    //账户操作
    void AddAccount(string, string, string, string, int, double, string,string);//添加账户
    void EditAccount(string, string, string, int, double);
    void EditPasswd(string, string);
    void SetLost(string, time_t);//标记挂失
    void RidLost(string);//标记未挂失
    bool ExistAccount(string);//判断账户是否存在
    bool CheckAccount(string, string);//判断账号是否与密码匹配

    //账户信息
    string GetName(string);  //姓名
    string GetAddress(string);//地址
    int GetType(string);   //储种
    double GetInterest(string);//利息
    bool GetLost(string);//是否挂失
    time_t GetLostTime(string);//挂失时间
    string GetOperatornum(string);//员工号
    string GetOperator(string);//员工姓名

    //得到信息 ：get information by the index in vAccount
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
    int GetNumberOfFlows(string);

    //get information of the flow by account number
    //and index of the flow
    time_t GetTime(string, int);
    double GetMoney(string, int);
    int GetOperationType(string, int);
    string GetOperatornum(string, int);
    string GetOperator(string, int);

    //存款和取款
    void DepositMoney(string, time_t, double, string);
    bool WithdrawMoney(string, time_t, double, string);

private:
    //This structure records the flow for every account.
    struct flowInfo
    {
        time_t tTime;       // when the deal happens
        double dMoney;      // how much money
        int iOperationType; // the type of the operation,
                            //deposit
                            //withdraw
        string strOperatornum;
        string strOperator; // the operator name of the deal
    };

   //This structure records the information of every accounts.
    struct accountInfo
    {
        string strNumber="";       // account number, generated automatically
        string strName="";         //name of the account owner
        string strPasswd="";       // password of the account
        string strAddress="";      // address of the account owner
        int iType;              // type of the account(1 year,2 years,3 years)

        double dInterest;       // interest, set according to the type
        bool bLost;             // lost or not
        time_t tLostTime;       // if lost, this variable has some value
        string strOperatornum="";     // the operator who open the account
        string strOperator="";        // identity of the account
        vector<flowInfo> vFlow;    // flow of the account

    };

    vector<accountInfo> vAccount; // 使用数组存储所有帐户信息
    map<string, int> mAccount; // map account number to the index of the account in vAccount

    map<string, double> mMoney; //map account number to how much money the account has

};

#endif // PREPARATION_H
