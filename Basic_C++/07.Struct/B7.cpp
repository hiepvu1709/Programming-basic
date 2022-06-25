//Vu Xuan Hiep - DHTI15A2ND

#include <iostream>
#include <conio.h>
#include <limits>
#include <iomanip>
#include <string.h>
using namespace std;

struct NHANVIEN
{
    string id;       // ma nhan vien
    string name;     // ten nhan vien
    long salary;     // luong
    long stipend;    // phu cap
    long sum_salary; // tong luong
};
typedef struct NHANVIEN NV;

int check(float &n);
void heading();
void input(NV nv[], int n);
void Stipend(NV nv[], int n);    // ham tinh phu cap
void Sum_salary(NV nv[], int n); // ham tinh tong luong
void output1NV(NV &nv);
void outputNV(NV nv[], int n);
void Swap(NV nv[], int n); // ham sap xep danh sach nhan vien theo thu tu giam dan cua tong luong

int main()
{
    NV nv[50];
    float m;
    cout << "\n\tMoi nhap so nhan vien can nhap vao danh sach: ";
    cin >> m;
    check(m);
    int n = (int)m;
    input(nv, n);
    cout<<"\n\tDACH SACH "<<n<<" NHAN VIEN VUA NHAP\n";
    outputNV(nv, n);
    Swap(nv, n);
    delete[] nv;
    return 0;
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

void input(NV nv[], int n)
{
    cout << "\n\t\tMoi nhap thong tin " << n << " nhan vien\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\tThong tin nhan vien thu " << i + 1 << " :\n";
        fflush(stdin);
        do
        {
            cout << "\n\tMa nhan vien (gioi han 14 ky tu): ";
            getline(cin, nv[i].id);
            if (nv[i].id.length() > 14)
            {
                cout << "\n\tKhong hop le, vui long kiem tra lai!\n";
            }
        } while (nv[i].id.length() > 14);
        do
        {
            cout << "\n\tHo va ten: ";
            getline(cin, nv[i].name);
            if (nv[i].name.length() > 24)
            {
                cout << "\n\tKhong hop le, vui long kiem tra lai!\n";
            }
        } while (nv[i].name.length() > 24);
        float lg;
        cout << "\n\tLuong: ";
        cin >> lg;
        while (cin.fail() || lg != (int)lg || lg < 0)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\tBan nhap sai dinh dang, vui long kiem tra lai!";
                cout << "\n\tLuong: ";
                cin >> lg;
            }
            if (lg != (int)lg || lg < 0)
            {
                cout << "\n\tLuong nhap vao yeu cau la mot so nguyen duong,vui long kiem tra lai!";
                cout << "\n\tLuong: ";
                cin >> lg;
            }
        }
        nv[i].salary = (int)lg;
    }
}

void Stipend(NV nv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        nv[i].stipend = 0.25 * nv[i].salary;
    }
}

void Sum_salary(NV nv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        nv[i].sum_salary = nv[i].salary + nv[i].stipend;
    }
}

void heading()
{
    cout << "\n+-----+----------------+-------------------------+-------------+-----------+--------------+"
         << "\n| STT |  MA NHAN VIEN  |        HO VA TEN        |    LUONG    |  PHU CAP  |  TONG LUONG  |"
         << "\n+-----+----------------+-------------------------+-------------+-----------+--------------+\n";
}
void output1NV(NV &nv)
{
    cout << "|" << setw(16) << nv.id
         << "|" << setw(25) << nv.name
         << "|" << setw(13) << (long)nv.salary
         << "|" << setw(11) << nv.stipend
         << "|" << setw(14) << (long)nv.sum_salary << "|"
         << "\n+-----+----------------+-------------------------+-------------+-----------+--------------+\n";
}

void outputNV(NV nv[], int n)
{
    Stipend(nv,n);
    Sum_salary(nv,n);
    heading();
    for (int i = 0; i < n; i++)
    {
        cout << "|" << setw(5) << i + 1;
        output1NV(nv[i]);
    }
}

void Swap(NV nv[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(nv[i].sum_salary < nv[j].sum_salary)
            {
                NV tmp = nv[i];
                nv[i] = nv[j];
                nv[j] = tmp;
            }
        }
    }
    cout << "\n\tDANH SACH TONG LUONG CUA " << n << " NHAN VIEN SAU KHI SAP XEP GIAM DAN\n";
    outputNV(nv, n);
}
