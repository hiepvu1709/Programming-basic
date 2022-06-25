#include<iostream>
using namespace std;

void amount_under_50(MH mh[], int n)
{
    int count = 0;
    for (int i = 0; i < n;  i++)
    {
        if(mh[i].amount < 50)
        {
            count++;
        }
    }
    if(count!=0)
    {
        cout << "\n\t\tDANH SACH CAC MAT HANG CO SO LUONG DUOI 50\n";
        intoMoney(mh, n);
        heading();
        for (int i = 0; i < n; i++)
        {
            if (mh[i].amount < 50)
            {
                cout << "|" << setw(5) << i + 1;
                output1mh(mh[i]);
            }
        }
    }else{
        cout << "\n\t\tKHONG CO MAT HANG NAO CO SO LUONG DUOI 50!\n";
    }
}
