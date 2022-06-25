#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>
#include <cctype>
using namespace std;
#define MAX 100

void nhapmang(float a[MAX][MAX], int &m, int &n);
void xuatmang(float a[MAX][MAX], int &m, int &n);
void ktsoluong(float a[MAX][MAX], int &m, int &n);
void sapxep(float a[MAX][MAX], int &m, int &n);
int check(float &m);

int main()
{
    float c[MAX][MAX];
    float a, b;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t- CHUONG TRINH TIM CAC PHAN TU TRONG DOAN [10;100] -\n";
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
        ktsoluong(c, nROW, nCOL);
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
        if (!n || n != (int)n || n < 0 || n > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
            cin >> n;
        }
    } while (!n || n != (int)n || n < 0 || n > 100);
}

void nhapmang(float mt[MAX][MAX], int &m, int &n)
{
    cout << "\nMoi nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i + 1 << "][" << j + 1 << "]=";
            cin >> mt[i][j];
            do
            {
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\nDu lieu nhap vao mang yeu cau la so nguyen, moi nhap lai: ";
                    cin >> mt[i][j];
                }
            } while (cin.fail());
        }
    }
}
void xuatmang(float mt[MAX][MAX], int &m, int &n)
{
    cout << "\nTa co ma tran sau:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mt[i][j] << "\t";
        }
        cout << endl;
    }
}

void ktsoluong(float a[MAX][MAX], int &m, int &n)
{
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] >= 10 && a[i][j] <= 100)
            {
                count++;
            }
        }
    }
    cout << "\nCo tat ca " << count << " so nam trong doan [10;100].\n";
}

