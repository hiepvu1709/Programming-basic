#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <cctype>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void nhapmang(int a[MAX][MAX], int &m, int &n);
void xuatmang(int a[MAX][MAX], int &m, int &n);
void chinhphuong(int a[MAX][MAX], int &m, int &n);
void soam_dautien(int a[MAX][MAX], int &m, int &n);
int check(float &m);

int main()
{
    int c[MAX][MAX];
    float a, b;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t- CHUONG TRINH NHAP VAO MOT MA TRAN CAP mxn ROI IN RA CAC SO CHINH PHUONG VA VI TRI SO AM DAU TIEN-\n";
        cout << "\nNhap so dong: ";
        cin >> a;
        check(a);
        cout << "\nNhap so cot: ";
        cin >> b;
        check(b);
        int nROW = (int)a;
        int nCOL = (int)b;
        nhapmang(c, nROW, nCOL);
        xuatmang(c, nROW, nCOL);
        chinhphuong(c, nROW, nCOL);
        soam_dautien(c, nROW, nCOL);
        cout << "\nBan co muon thu lai khong? (Y/N) : ";
        cin >> t;
    }
    delete c;
    return 0;
}
int check(float &n)
{
    do
    {
        if (!n || pow(n, 2) != pow(n, 2) || n != (int)n || n < 0 || n > 100000)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
            cin >> n;
        }
    } while (!n || pow(n, 2) != pow(n, 2) || n != (int)n || n < 0 || n > 100000);
}

void enterAnInteger(int &n) // bat loi so thuc khi nhap gia tri trong mang 2 chieu
{
    float a;
    cin >> a;
    while (cin.fail() || a != (int)a)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nSo nhap vao yeu cau la mot so nguyen, moi nhap lai: ";
        cin >> a;
    }
    n = a;
}

void nhapmang(int mt[MAX][MAX], int &m, int &n)
{
    cout << "\nMoi nhap cac phan tu cua ma tran( SO NHAP VAO TOI DA 6 CHU SO ):\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << "a[" << i + 1 << "][" << j + 1 << "]=";
            enterAnInteger(mt[i][j]);
        }
    }
}
void xuatmang(int mt[MAX][MAX], int &m, int &n)
{
    cout << "\nMa tran vua nhap la:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << mt[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void chinhphuong(int a[MAX][MAX], int &m, int &n)
{
    int count(0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sqrt(a[i][j]) * sqrt(a[i][j]) == a[i][j])
            {
                cout << a[i][j] << " ; ";
                count++;
            }
        }
    }
    if (count == 0)
    {
        cout << "\nKhong co so chinh phuong nao trong ma tran!\n";
    }
    else
    {
        cout << " la cac so chinh phuong trong ma tran!";
    }
}

void soam_dautien(int a[MAX][MAX], int &m, int &n)
{
    int value = 0, dong = 0, cot = 0, count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < 0)
            {
                value = a[i][j];
                dong = i + 1;
                cot = j + 1;
                count++;
                break;
            }
        }
    }
    if (count == 1)
    {
        cout << "\nSo am dau tien la " << value << " o dong " << dong << " cot " << cot << endl;
    }
    else
    {
        cout << "\nKhong co so am nao trong ma tran!" << endl;
    }
}
