#include<iostream>
#include<limits>
#include "header.h"
#include "output.cpp"
#include "amountUnder_50.cpp"
using namespace std;

void inputMH(MH mh[], int n)
{
    cout << "\n\t\tNHAP THONG TIN " << n << " MAT HANG\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\tThong tin mat hang thu " << i + 1 << " :\n";
        fflush(stdin);
        cout << "\n\tMa mat hang (10 ky tu): ";
        getline(cin, mh[i].id);
        do
        {
            if (mh[i].id.length() > 10)
            {
                cout << "\n\tMa mat hang nhap vao yeu cau 10 ky tu, vui long kiem tra lai!\n";
                cout << "\n\tMa mat hang (10 ky tu) : ";
                getline(cin, mh[i].id);
            }
        } while (mh[i].id.length() > 10);

        cout << "\n\tTen mat hang: ";
        cin.getline(mh[i].name, 30);

        float slg;
        cout << "\n\tSo luong: ";
        cin >> slg;
        while(cin.fail() || slg < 1 || slg != (int)slg)
        {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\tBan nhap sai dinh dang, vui long kiem tra lai!\n";
                cout << "\n\tSo luong: ";
                cin >> slg;
            }
            if (slg < 1 || slg != (int)slg)
            {
                cout << "\n\tSo luong mat hang yeu cau la so nguyen duong, vui long kiem tra lai!\n";
                cin >> slg;
            }
        }
        mh[i].amount = (int)slg;

        long dg;
        cout << "\n\tDon gia: ";
        cin >> dg;
        while (cin.fail() || dg < 1)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\tBan nhap sai dinh dang, vui long kiem tra lai!\n";
                cout << "\n\tDon gia: ";
                cin >> dg;
            }
            if (slg < 1)
            {
                cout << "\n\tDon gia mat hang yeu cau la so nguyen duong, vui long kiem tra lai!\n";
                cin >> dg;
            }
        }
        mh[i].price = dg;
    }
}

