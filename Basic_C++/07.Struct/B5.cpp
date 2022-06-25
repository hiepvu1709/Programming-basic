//Vu Xuan Hiep - DHTI15A2ND

#include <iostream>
#include <string.h>
#include <conio.h>
#include <limits>
#include <iomanip>
using namespace std;

struct Student
{
    string id;      // ma sinh vien
    char name[50];  // ten
    float DLT, DTH; // diem ly thuyet
};
typedef struct Student SV;

int check(float &n);
void inputSV(SV sv[], int n);
void heading();
void output1sv(SV &sv);
void outputSV(SV sv[], int n);
void failDLT(SV sv[], int n);
void failDTH(SV sv[], int n);

int main()
{
    SV sv[50];
    float m;
    cout << "\nMoi nhap so sinh vien can nhap vao danh sach: ";
    cin >> m;
    check(m);
    int n = (int)m;
    inputSV(sv, n);
    outputSV(sv, n);
    failDLT(sv, n);
    failDTH(sv, n);
    delete[] sv;
}

int check(float &n)
{
    do
    {
        if (!n || n != (int)n || n < 0 || n > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
            cin >> n;
        }
    } while (!n || n != (int)n || n < 0 || n > 100);
}

void inputSV(SV sv[], int n)
{
    cout << "\n\t\tMoi nhap thong tin " << n << " sinh vien\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\tThong tin sinh vien thu " << i + 1 << " :\n";
        fflush(stdin);
        cout << "\n\tMa sinh vien (10 ky tu) : ";
        getline(cin, sv[i].id);
        do
        {
            if (sv[i].id.length() > 10)
            {
                cout << "\n\tMa sinh vien nhap vao yeu cau 10 ky tu, vui long kiem tra lai!\n";
                cout << "\n\tMa sinh vien (10 ky tu) : ";
                getline(cin, sv[i].id);
            }
        } while (sv[i].id.length() > 10);
    //
        cout << "\n\tHo va ten: ";
        cin.getline(sv[i].name, 50);
    //
        cout << "\n\tDiem ly thuyet: ";
        cin >> sv[i].DLT;
        while (cin.fail() || sv[i].DLT < 0 || sv[i].DLT > 10)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\tBan nhap sai dinh dang, moi nhap lai!\n"
                     << "\n\tDiem ly thuyet: ";
                cin >> sv[i].DLT;
            }
            if (sv[i].DLT < 0 || sv[i].DLT > 10)
            {
                cout << "\n\tDiem nhap vao yeu cau nam trong thang diem 10, vui long kiem tra lai!\n"
                     << "\n\tDiem ly thuyet: ";
                cin >> sv[i].DLT;
            }
        }
    //
        cout << "\n\tDiem thuc hanh: ";
        cin >> sv[i].DTH;
        while (cin.fail() || sv[i].DTH < 0 || sv[i].DTH > 10)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\tBan nhap sai dinh dang, moi nhap lai!\n"
                     << "\n\tDiem thuc hanh: ";
                cin >> sv[i].DTH;
            }
            if (sv[i].DTH < 0 || sv[i].DTH > 10)
            {
                cout << "\n\tDiem nhap vao yeu cau nam trong thang diem 10, vui long kiem tra lai!\n"
                     << "\n\tDiem thuc hanh: ";
                cin >> sv[i].DTH;
            }
        }
    }
}

void heading()
{
    cout << "\n+-----+--------------+---------------------+----------------+----------------+"
         << "\n| STT | MA SINH VIEN |      HO VA TEN      | DIEM LY THUYET | DIEM THUC HANH |"
         << "\n+-----+--------------+---------------------+----------------+----------------+\n";
}

void output1sv(SV &sv)
{
    cout << "|" << setw(14) << sv.id
         << "|" << setw(21) <<strupr(sv.name)
         << "|" << setw(16) << sv.DLT
         << "|" << setw(16) << sv.DTH << "|"
         << "\n+-----+--------------+---------------------+----------------+----------------+\n";
}

void outputSV(SV sv[], int n)
{
    cout << "\n\t\tDANH SACH " << n << " SINH VIEN VUA NHAP\n";
    heading();
    for (int i = 0; i < n; i++)
    {
        cout << "|" << setw(5) << i + 1;
        output1sv(sv[i]);
    }
}

void failDLT(SV sv[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(sv[i].DLT < 5)
            count++;
    }
    if(count!=0)
    {
        cout << "\n\t\tDANH SACH CAC SINH VIEN TRUOT DIEM LY THUYET\n";
        heading();
        for (int i = 0; i < n; i++)
        {
            if(sv[i].DLT < 5)
            {
                cout << "|" << setw(5) << i + 1;
                output1sv(sv[i]);
            }
        }
    }else{
        cout << "\n\t\tKHONG CO SINH VIEN NAO TRUOT DIEM LY THUYET!\n";
    }
}

void failDTH(SV sv[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (sv[i].DTH < 5)
            count++;
    }
    if (count != 0)
    {
        cout << "\n\t\tDANH SACH CAC SINH VIEN TRUOT DIEM THUC HANH\n";
        heading();
        for (int i = 0; i < n; i++)
        {
            if (sv[i].DTH < 5)
            {
                cout << "|" << setw(5) << i + 1;
                output1sv(sv[i]);
            }
        }
    }else{
        cout << "\n\t\tKHONG CO SINH VIEN NAO TRUOT DIEM THUC HANH!\n";
    }
}
