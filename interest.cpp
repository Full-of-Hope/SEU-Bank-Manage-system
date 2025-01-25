#include "interest.h"

#include"QDebug"

interest::interest()
{
    dMoney = 0;
    vFlow.clear();
}

void interest::SetType(int iSetType)
{
    iType = iSetType;
}

void interest::Add(double dMoney, time_t tTime)
{
    Flow tmpFlow;
    tmpFlow.tTime = tTime;
    tmpFlow.dMoney = dMoney;
    vFlow.push_back(tmpFlow);
}


void interest::Sub(double dMoney, time_t tTime)
{
    double dMoneyNeeded = dMoney;
    int iTmpPos = vFlow.size() - 1;    // pointer to the flow
    while (dMoneyNeeded > 0 && iTmpPos >= 0)
    {
        if (tTime < vFlow[iTmpPos].tTime) // time no match
        {
            iTmpPos--;
        }
        else if (vFlow[iTmpPos].dMoney > dMoneyNeeded) // enough money
        {
            vFlow[iTmpPos].dMoney -= dMoneyNeeded;
            dMoneyNeeded = 0;
            iTmpPos--;
        }
        else // money not enough
        {
            dMoneyNeeded -= vFlow[iTmpPos].dMoney;
            vFlow[iTmpPos].dMoney = 0;
            iTmpPos--;
        }
    }
}

//计算从某个给定的时间点 tTime 到当前（或指定）时间点为止，所有存款的累积利息
double interest::Query(time_t tTime)
{
    double dAns = 0; // ans for the query
    int iTmpTime; // relate to type
    double dInterest; // store the interest
    switch (iType)
    {
    case 0:    // 1 year
        iTmpTime = 31536000;
        dInterest = 1.98;
        break;
    case 1: //3 year
        iTmpTime = 94608000;
        dInterest = 2.25;
        break;
    case 2: // 5 year
        iTmpTime = 157680000;
        dInterest = 3.5;
        break;
    }

    for (int i = 0; i < (int)vFlow.size(); i++)
    {
        //计算利息
        int iYieldInterestYear = ((int)difftime(tTime, vFlow[i].tTime)) / iTmpTime;
        double dYieldInterest = vFlow[i].dMoney;
        for (int j = 1; j <= iYieldInterestYear; j++)
            dYieldInterest = dYieldInterest * (1 + (dInterest / 100));
        dAns += dYieldInterest;
    }
    return dAns;
}

//计算从每个存款的存入时间到两个不同时间点（tTime1 和 tTime2）之间的利息变化
double interest::QueryPrepare(time_t tTime2)
{
    time_t tTime1 = time(nullptr);
    double dAns = 0; // ans for the query
    int iTmpTime; // relate to type
    double dInterest; // store the interest
    switch (iType)
    {
    case 0: // 1 year
        iTmpTime = 31536000;
        dInterest = 1.98;
        break;
    case 1: // 3 year
        iTmpTime = 94608000;
        dInterest = 2.25;
        break;
    case 2: // 5 year
        iTmpTime = 157680000;
        dInterest = 3.5;
        break;
    }

    for (int i = 0; i < (int)vFlow.size(); i++)
    {
        int iDifftime1 = (int)difftime(tTime1, vFlow[i].tTime);
        int iDifftime2 = (int)difftime(tTime2, vFlow[i].tTime);
        if (((iDifftime1 / iTmpTime) + 1) * iTmpTime <= iDifftime2)
        {
            int iYieldInterestYear = iDifftime2 / iTmpTime;
            double dYieldInterest = vFlow[i].dMoney;
            for (int j = 1; j <= iYieldInterestYear; j++)
                dYieldInterest = dYieldInterest * (1 + (dInterest / 100));
            dAns += dYieldInterest;
        }
    }
    return dAns;
}
