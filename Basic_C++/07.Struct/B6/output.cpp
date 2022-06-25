#include<iostream>
#include<iomanip>
using namespace std;

void heading()
{
    cout << "\n+-----+-------------+--------------------------------+----------+-------------+-------------------+"
         << "\n| STT | MA MAT HANG |          TEN MAT HANG          | SO LUONG |   DON GIA   |    THANH TIEN     |"
         << "\n+-----+-------------+--------------------------------+----------+-------------+-------------------+\n";
}

void output1mh(MH &mh)
{
    cout << "|" << setw(13) << mh.id
         << "|" << setw(32) << strupr(mh.name)
         << "|" << setw(10) << mh.amount
         << "|" << setw(13) << mh.price
         << "|" << setw(15) << (long)mh.money
         << " VND|" << setw(5)
         << "\n+-----+-------------+--------------------------------+----------+-------------+-------------------+\n";
}

void outputMH(MH mh[], int n)
{
    cout << "\n\t\tDANH SACH " << n << " MAT HANG VUA NHAP\n";
    intoMoney(mh, n);
    heading();
    for (int i = 0; i < n; i++)
    {
        cout << "|" << setw(5) << i + 1;
        output1mh(mh[i]);
    }
}
