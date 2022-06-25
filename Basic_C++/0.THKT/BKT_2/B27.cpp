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
void trungbinh(int a[MAX][MAX], int &m, int &n);
void lietkeSNT(int a[MAX][MAX], int &m, int &n);
int check(float &m);

int main()
{
    int c[MAX][MAX];
    float a, b;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t\tCHUONG TRINH TINH TRUNG CONG CAC PHAN TU TRONG MA TRAN\n";
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
        trungbinh(c, nROW, nCOL);
        lietkeSNT(c, nROW, nCOL);
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

void trungbinh(int a[MAX][MAX], int &m, int &n)
{
    float tongle = 0;
    int sole = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                tongle += a[i][j];
                sole++;
            }
        }
    }
    if (tongle != NULL)
    {
        cout << "\nTrung binh cong cac phan tu le co trong ma tran bang " << float(tongle / sole) << endl;
    }
    else
    {
        cout << "\nKhong co phan tu le trong ma tran!";
    }
}

bool SNT(int &a)
{
    if (a < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt((float)a); i++)
        {
            if (a % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void lietkeSNT(int mt[MAX][MAX], int &m, int &n)
{
    int count(0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (SNT(mt[i][j]))
            {
                cout << setw(5) << mt[i][j];
                count++;
            }
        }
    }
    if (count != 0)
    {
        cout << " la cac so nguyen to co trong ma tran.\n"
             << "\tTong cong co " << count << " so nguyen to.\n";
    }
    else
    {
        cout << "\nKhong co so nguyen to nao trong ma tran.\n";
    }
}
