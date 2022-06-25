#include <iostream>
#include <limits>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;
#define MAX 100

int check(float &n);
void enterAnInteger(int &n);
void input(int b[MAX], int &m);
void output(int b[MAX], int &m);
void sum_odd(int b[MAX], int &m);

int main()
{
    int b[MAX];
    float n;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t- CHUONG TRINH NHAP VAO DAY n SO , IN RA TONG CAC SO LE TRONG DAY -\n";
        cout << "\nMoi nhap so phan tu cua day so( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> n;
        check(n);
        int m = (int)n;
        input(b, m);
        output(b, m);
        sum_odd(b, m);
        cout << "\nBan co muon thu lai khong?(Y/N) : ";
        cin >> t;
    }
    return 0;
}

int check(float &n)
{
    do
    {
        if (!n || n != (int)n || n < 1 || n > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen, moi nhap lai: ";
            cin >> n;
        }
    } while (!n || n != (int)n || n < 1 || n > 100);
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

void input(int b[MAX], int &m)
{
    cout << "\n  Moi nhap cac so cua day so:\n";
    for (int i = 0; i < m; i++)
    {
        cout << setw(7) << "So thu " << i + 1 << ": ";
        enterAnInteger(b[i]);
    }
}

void output(int b[MAX], int &m)
{
    cout << "\nDay so vua nhap la:\n";
    for (int i = 0; i < m; i++)
    {
        cout << setw(5) << b[i] << "\t";
    }
}

void sum_odd(int b[MAX], int &m)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if (b[i] % 2 != 0)
        {
            sum += b[i];
        }
    }
    cout << "\nTong cac so le trong day so vua nhap bang " << sum << endl;
}
