#ifndef INTEREST_H
#define INTEREST_H

//金额、利息计算

#include"preparation.h"
#include<vector>
#include<time.h>

class interest
{
public:
    interest();
    void SetType(int);        //类型
    void Add(double, time_t); //添加
    void Sub(double, time_t); //删除
    double Query(time_t);  //查询1
    double QueryPrepare(time_t); //查询2


private:
    int iType;     //类型

    //链表 flow
    struct Flow
    {
        double dMoney;  //money change
                        // deposit
                        // withdraw
        time_t tTime;   // time of operation
    };
    double dMoney;      // money till some point of time
    vector<Flow> vFlow;
};

#endif // INTEREST_H
