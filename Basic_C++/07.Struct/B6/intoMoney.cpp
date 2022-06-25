#include<iostream>
using namespace std;

void intoMoney(MH mh[], int n)
{
    for (int i = 0; i < n; i++)
    {
        mh[i].money = mh[i].amount * mh[i].price;
    }
}
