#include <iostream>
#include <cmath>
#include <limits>
#include <cctype>
#include <iomanip>
using namespace std;
#define MAX 100

void nhapmang(int a[MAX][MAX], int &m, int &n);
void xuatmang(int a[MAX][MAX], int &m, int &n);
void max_chinh(int a[MAX][MAX], int &m, int &n);
int check(float &m);
void enterAnInteger(int &n);

int main()
{
    int c[MAX][MAX];
    float a, b;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t- CHUONG TRINH NHAP VAO 1 MA TRAN VA TIM PHAN TU LON NHAT TREN DUNG CHEO CHINH -\n";
        cout << "\nNhap so dong( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> a;
        check(a);
        cout << "\nNhap so cot( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> b;
        check(b);
        int nROW = (int)a;
        int nCOL = (int)b;
        nhapmang(c, nROW, nCOL);
        xuatmang(c, nROW, nCOL);
        max_chinh(c, nROW, nCOL);
        cout << "\nBan co muon thu lai khong? (Y/N): ";
        cin >> t;
    }
    delete c;
    return 0;
}
int check(float &n)
{
    do
    {
        if (!n || pow(n, 2) != pow(n, 2) || n != (int)n || n < 0 || n > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
            cin >> n;
        }
    } while (!n || pow(n, 2) != pow(n, 2) || n != (int)n || n < 0 || n > 100);
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
            cout << setw(7) << "a[" << i + 1 << "][" << j + 1 << "]=";
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
            cout << mt[i][j] << "\t";
        }
        cout << endl;
    }
}

void max_chinh(int a[MAX][MAX], int &m, int &n)
{
    if (m == n)
    {
        int max = a[0][0];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j && a[i][j] > max)
                {
                    max = a[i][j];
                }
            }
        }
        cout << "\nPhan tu lon nhat o duong cheo chinh la: " << max << endl;
    }
    else
    {
        cout << "\nDo hang va cot khong bang nhau nen khong co duong cheo chinh!\n";
    }
}
