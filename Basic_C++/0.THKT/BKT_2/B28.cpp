#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <cctype>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void nhapmang(int a[MAX][MAX], int &m, int &n);
void xuatmang(int a[MAX][MAX], int &m, int &n);
int KiemTraMaTranCoToanSoLe(int a[MAX][MAX], int &m, int &n);
int check(float &m);

int main()
{
    int c[MAX][MAX];
    float a, b;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t\tCHUONG TRINH KIEM TRA MA TRAN CO TOAN LE KHONG\n";
        cout << "\nNhap so dong( so nhap vao toi da 6 chu so): ";
        cin >> a;
        check(a);
        cout << "\nNhap so cot( so nhap vao toi da 6 chu so ): ";
        cin >> b;
        check(b);
        int nROW = (int)a;
        int nCOL = (int)b;
        nhapmang(c, nROW, nCOL);
        xuatmang(c, nROW, nCOL);
        int flag = KiemTraMaTranCoToanSoLe(c, nROW, nCOL);
        if (flag == 1)
        {
            cout << "\nMa tran toan so le\n";
        }
        else
        {
            cout << "\nMa tran khong hoan toan la so le\n";
        }
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
        if (!n || n != (int)n || n < 0 || n > 100000)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
            cin >> n;
        }
    } while (!n || n != (int)n || n < 0 || n > 100000);
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
    cout << "\nMoi nhap cac phan tu cua ma tran( so nhap vao toi da 6 chu so ):\n";
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
}

int KiemTraMaTranCoToanSoLe(int a[MAX][MAX], int &m, int &n)
{
    int flag = 1; // gi? s? ban d?u ma tr?n toàn s? duong
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                flag = 1;
            }
        }
    }
    return flag;
}
