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
    char name[40];     // ten nhan vien
    char office[30];       // phong lam viec
    int working_days;      // ngay lam viec
    float HSL;          // he so luong
    long salary;     // luong
    long reward;    // thuong
    long sum_salary; // tong luong
};
typedef struct NHANVIEN NV;

int check(float &n);
void heading();
void input(NV nv[], int n);
void Salary(NV nv[], int n);    // ham tinh luong co ban
void Reward(NV nv[], int n);    // ham tinh thuong
void Sum_salary(NV nv[], int n); // ham tinh tong luong
void output1NV(NV &nv);
void outputNV(NV nv[], int n);
void Swap(NV nv[], int n); // ham sap xep danh sach nhan vien theo thu tu giam dan cua tong luong

int main()
{
    NV nv[50];
    float m;
    cout << "\n\tMOI NHAP SO NHAN VIEN CAN NHAP VAO DANH SACH: ";
    cin >> m;
    check(m);
    int n = (int)m;
    input(nv, n);
    cout << "\n\tDANH SACH " << n << " NHAN VIEN VUA NHAP\n";
    outputNV(nv, n);
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
            if (nv[i].id.length() > 12)
            {
                cout << "\n\tKhong hop le, vui long kiem tra lai!\n";
            }
        } while (nv[i].id.length() > 12);
        cout << "\n\tHo va ten: ";
        cin.getline(nv[i].name, 40);

        cout << "\n\tPhong lam viec: ";
        cin.getline(nv[i].office, 30);

        do{
            cout << "\n\tHe so luong: ";
            cin >> nv[i].HSL;
            if(cin.fail() || nv[i].HSL < 0)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\tHe so luong yeu cau la mot so lon hon 0.\n"
                     << "\n\tDi lieu ban vua nhap khong hop le, vui long kiem tra lai!\n";
            }
        } while (cin.fail() || nv[i].HSL < 0);

        float days;
        do{
            cout << "\n\tSo ngay lam viec: ";
            cin >> days;
            if(cin.fail() || days !=(int)days || days < 0)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\tSo ngay lam viec yeu cau la mot so nguyen duong.\n"
                     << "\n\tDu lieu ban nhap vao khong hop le, vui long kiem tra lai!\n";
            }
        } while (cin.fail() || days != (int)days || days < 0);
        nv[i].working_days = (int)days;
    }
}

void Salary(NV nv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        nv[i].salary = nv[i].HSL * 17500;
    }
}

void Reward(NV nv[], int n)
{
    for (int i = 0; i < n; i++)
        if (nv[i].working_days <= 22)
        {
            nv[i].reward = 0;
            }
            else if (nv[i].working_days <= 24)
            {
                nv[i].reward = 50000;
                }
                else if (nv[i].working_days <= 26)
                {
                    nv[i].reward = 100000;
                    }
                    else
                    {
                         nv[i].reward = 300000;
                    }     
}

void Sum_salary(NV nv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        nv[i].sum_salary = nv[i].salary + nv[i].reward;
    }
}

void heading()
{
    cout << "\n+-----+--------------+-------------------------+----------------------+---------------+-------------+---------------+--------+------------+"
         << "\n| STT | MA NHAN VIEN |        HO VA TEN        |    PHONG LAM VIEC    | NGAY LAM VIEC | HE SO LUONG | LUONG CAN BAN | THUONG | TONG LUONG |"
         << "\n+-----+--------------+-------------------------+----------------------+---------------+-------------+---------------+--------+------------+\n";
}
void output1NV(NV &nv)
{
    cout << "|" << setw(14) << nv.id
         << "|" << setw(25) << strupr(nv.name)
         << "|" << setw(22) << strupr(nv.office)
         << "|" << setw(15) << nv.working_days
         << "|" << setw(13) << nv.HSL
         << "|" << setw(13) << (long)nv.salary
         << "|" << setw(10) << (long)nv.reward
         << "|" << setw(12) << (long)nv.sum_salary << "|"
         << "\n+-----+--------------+-------------------------+----------------------+---------------+-------------+---------------+--------+------------+\n";
}

void outputNV(NV nv[], int n)
{
    Salary(nv,n);
    Reward(nv, n);
    Sum_salary(nv, n);
    heading();
    for (int i = 0; i < n; i++)
    {
        cout << "|" << setw(5) << i + 1;
        output1NV(nv[i]);
    }
}
