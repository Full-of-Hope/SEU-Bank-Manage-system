#include "preparation.h"

#include <QDebug>
#include <QDialog>
#include <QMessageBox>
#include <fstream>
#include <map>
#include <time.h>

using namespace std;

preparation::preparation()
{
    GetFile();

}


//从文件中读取
void preparation::GetFile()
{
    vAccount.clear();
    mAccount.clear();
    mMoney.clear();

    int iNumOfAccounts;   // number of accounts
    int iNumOfFlow;       // number of flows

    //文件地址
    ifstream iFile("D:\\QT try\\bank_system\\bankinfo.txt");
    if (!iFile)  // the file not exist
    {
        iNumOfAccounts = 0; // 0 account

        WriteFile();
        return;
    }

    iFile >> iNumOfAccounts;

    for (int i = 0; i < iNumOfAccounts; i++)
    {
        accountInfo tmpAccount; // get a record, and pushback to vector
        string strTmpString;    // for the convenience of infile

        //使用了很多getline（），因为字符串中可能存在空格
        //getline（iFile，strTmpString）用于跳过ENTER键
        iFile >> tmpAccount.strNumber;
        getline(iFile, strTmpString);
        getline(iFile, tmpAccount.strName);
        getline(iFile, tmpAccount.strPasswd);
        getline(iFile, tmpAccount.strAddress);
        iFile >> tmpAccount.iType >> tmpAccount.dInterest >> tmpAccount.bLost >> tmpAccount.tLostTime;
        getline(iFile, strTmpString);
        getline(iFile, tmpAccount.strOperatornum);
        getline(iFile,tmpAccount.strOperator);
        //iFile >> iNumOfFlow;

        mMoney[tmpAccount.strNumber] = 0; // initialize the money in the account

        for (int j = 0; j < iNumOfAccounts; j++)
        {
            flowInfo tmpFlow;   //get a flow, and pushback to vector

            iFile >> tmpFlow.tTime >> tmpFlow.dMoney >> tmpFlow.iOperationType;
            getline(iFile, strTmpString);
            getline(iFile, tmpFlow.strOperator);

            if (tmpFlow.iOperationType == 0) // 存款
                mMoney[tmpAccount.strNumber] += tmpFlow.dMoney;
            else // 取款
                mMoney[tmpAccount.strNumber] -= tmpFlow.dMoney;
            tmpAccount.vFlow.push_back(tmpFlow);
        }

        mAccount[tmpAccount.strNumber] = vAccount.size(); //将帐号映射到索引

        vAccount.push_back(tmpAccount);
    }
}

//在文件中写入数据
void preparation::WriteFile()
{
    int iNumOfAccounts = vAccount.size();


    ofstream oFile("D:\\QT try\\bank_system\\bankinfo.txt");

    oFile << iNumOfAccounts << "\n";

    for (int i = 0; i < iNumOfAccounts; i++)
    {
        accountInfo tmpAccount = vAccount[i];

        int iNumOfFlow = tmpAccount.vFlow.size();

        oFile << tmpAccount.strNumber << "\n"
              << tmpAccount.strName << "\n"
              << tmpAccount.strPasswd << "\n"
              << tmpAccount.strAddress << "\n"
              << tmpAccount.iType << "\n"
              << tmpAccount.dInterest << "\n"
              << tmpAccount.bLost << "\n"
              << tmpAccount.tLostTime << "\n"
              << tmpAccount.strOperatornum << "\n"
              << tmpAccount.strOperator << "\n"
              << iNumOfFlow << "\n";

        for (int j = 0; j < iNumOfFlow; j++)
        {
            flowInfo tmpFlow = tmpAccount.vFlow[j];

            oFile << tmpFlow.tTime << "\n"
                  << tmpFlow.dMoney << "\n"
                  << tmpFlow.iOperationType << "\n"
                  << tmpFlow.strOperator << "\n";
        }
    }
}


void preparation::AddAccount(string strNum="", string strNam="", string strPas="", string strAdd="", int iTyp=0, double dInt=0.0, string strOpenum="",string strOpe="")
{
    accountInfo tmpAccountInfo;
    tmpAccountInfo.strNumber = strNum;
    tmpAccountInfo.strName = strNam;
    tmpAccountInfo.strPasswd = strPas;
    tmpAccountInfo.strAddress = strAdd;
    tmpAccountInfo.iType = iTyp;
    tmpAccountInfo.dInterest = dInt;
    tmpAccountInfo.bLost = false;
    tmpAccountInfo.tLostTime = time(nullptr);
    tmpAccountInfo.strOperatornum = strOpenum;
    tmpAccountInfo.strOperator=strOpe;
    vAccount.push_back(tmpAccountInfo);
    vAccount[vAccount.size() - 1].vFlow.clear();


//     do not delete Getfile()!
//     I do not think it is necessary, but without it the program has bugs
//     it is to refresh the memory

    WriteFile();
    GetFile();
}


void preparation::EditAccount(string strNum, string strNam, string strAdd, int iTyp, double dInt)
{
    vAccount[mAccount[strNum]].strName = strNam;
    vAccount[mAccount[strNum]].strAddress = strAdd;
    vAccount[mAccount[strNum]].iType = iTyp;
    vAccount[mAccount[strNum]].dInterest = dInt;


    WriteFile();
    GetFile();
}


void preparation::EditPasswd(string strNum, string strPas)
{
    vAccount[mAccount[strNum]].strPasswd = strPas;

    WriteFile();
}

//标记挂失
void preparation::SetLost(string strNum, time_t tTim)
{
    vAccount[mAccount[strNum]].bLost = true;
    vAccount[mAccount[strNum]].tLostTime = tTim;
    WriteFile();
}

//标记未挂失
void preparation::RidLost(string strNum)
{
    vAccount[mAccount[strNum]].bLost = false;
    vAccount[mAccount[strNum]].tLostTime = 0;
    WriteFile();
}

//查找账户是否存在
bool preparation::ExistAccount(string strNumber)
{
    map<string, int>::iterator iter;
    iter = mAccount.find(strNumber);
    return (iter != mAccount.end());
}

//判断账号是否与密码匹配
bool preparation::CheckAccount(string strNumber, string strPasswd)
{
    if (!ExistAccount(strNumber)) /// the account does not exist
        return false;

    return (vAccount[mAccount[strNumber]].strPasswd == strPasswd);
}



string preparation::GetName(string strNumber)
{
    return vAccount[mAccount[strNumber]].strName;
}


string preparation::GetAddress(string strNumber)
{
    return vAccount[mAccount[strNumber]].strAddress;
}


int preparation::GetType(string strNumber)
{
    return vAccount[mAccount[strNumber]].iType;
}


double preparation::GetInterest(string strNumber)
{
    return vAccount[mAccount[strNumber]].dInterest;
}


bool preparation::GetLost(string strNumber)
{
    return vAccount[mAccount[strNumber]].bLost;
}


time_t preparation::GetLostTime(string strNumber)
{
    return vAccount[mAccount[strNumber]].tLostTime;
}


string preparation::GetOperatornum(string strNumber)
{
    return vAccount[mAccount[strNumber]].strOperatornum;

}


string preparation::GetOperator(string strNumber)
{
    return vAccount[mAccount[strNumber]].strOperator;
}



string preparation::GetNumber(int iNum)
{
    return vAccount[iNum].strNumber;
}


string preparation::GetName(int iNum)
{
    return vAccount[iNum].strName;
}


string preparation::GetAddress(int iNum)
{
    return vAccount[iNum].strAddress;
}


int preparation::GetType(int iNum)
{
    return vAccount[iNum].iType;
}


double preparation::GetInterest(int iNum)
{
    return vAccount[iNum].dInterest;
}


bool preparation::GetLost(int iNum)
{
    return vAccount[iNum].bLost;
}


time_t preparation::GetLostTime(int iNum)
{
    return vAccount[iNum].tLostTime;
}


string preparation::GetOperatornum(int iNum)
{
    return vAccount[iNum].strOperatornum;
}


string preparation::GetOperator(int iNum)
{
    return vAccount[iNum].strOperator;
}



int preparation::GetNumberOfAccounts()
{
    return vAccount.size();
}


int preparation::GetNumberOfFlows(string strNumber)
{
    return vAccount[mAccount[strNumber]].vFlow.size();
}


time_t preparation::GetTime(string strNumber, int iFlow)
{
    return vAccount[mAccount[strNumber]].vFlow[iFlow].tTime;
}


double preparation::GetMoney(string strNumber, int iFlow)
{
    return vAccount[mAccount[strNumber]].vFlow[iFlow].dMoney;
}


int preparation::GetOperationType(string strNumber, int iFlow)
{
    return vAccount[mAccount[strNumber]].vFlow[iFlow].iOperationType;
}


string preparation::GetOperatornum(string strNumber, int iFlow)
{
    return vAccount[mAccount[strNumber]].vFlow[iFlow].strOperatornum;
}


string preparation::GetOperator(string strNumber, int iFlow)
{
    return vAccount[mAccount[strNumber]].vFlow[iFlow].strOperator;
}


void preparation::DepositMoney(string strNumber, time_t tTim, double dMon, string strOpe)
{
    flowInfo tmpFlowInfo;
    tmpFlowInfo.tTime = tTim;
    tmpFlowInfo.dMoney = dMon;
    tmpFlowInfo.iOperationType = 0;
    tmpFlowInfo.strOperator = strOpe;
    vAccount[mAccount[strNumber]].vFlow.push_back(tmpFlowInfo);
    mMoney[strNumber] += dMon;
    WriteFile();
    GetFile();
}


bool preparation::WithdrawMoney(string strNumber, time_t tTim, double dMon, string strOpe)
{
    if (dMon > mMoney[strNumber])
    {
        return false;
    }
    flowInfo tmpFlowInfo;
    tmpFlowInfo.tTime = tTim;
    tmpFlowInfo.dMoney = dMon;
    tmpFlowInfo.iOperationType = 1;
    tmpFlowInfo.strOperator = strOpe;
    vAccount[mAccount[strNumber]].vFlow.push_back(tmpFlowInfo);
    mMoney[strNumber] -= dMon;
    WriteFile();
    GetFile();
    return true;
}
