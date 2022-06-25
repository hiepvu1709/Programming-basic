#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cctype>
using namespace std;
#define MAX1 100
#define MAX2 200

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
void input1(int a[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << setw(5) << "a[" << i + 1 << "]=";
        enterAnInteger(a[i]);
    }
}
void input2(int b[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << setw(5) << "b[" << i + 1 << "]=";
        enterAnInteger(b[i]);
    }
}
void sapxep(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
}
void tronMang(int a[], int b[], int c[], float n, float m, int k)
{
    for (int i = 0; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }
    k = (int)n;
    for (int j = 0; j < m; j++)
    {
        c[k] = b[j];
        k++;
    }
    sapxep(c, k);
    cout << "\nKhi tron hai mang nhung van du duoc thu tu tang dan thi ta co mang moi nhu sau:\n";
    for (int i = 0; i < k; i++)
    {
        cout << setw(5) << c[i] << " ";
    }
}
int main()
{
    int a[MAX1], b[MAX1], c[MAX2], k = 0;
    float n, m;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t- CHUONG TRINH NHAP 2 MANG SO NGUYEN SAU DO TRON HAI MANG NHUNG VAN GIU DUOC TINH SAP XEP CUA MANG - \n";
        cout << "\n Nhap so phan tu cua mang 1: ";
        cin >> n;
        check(n);
        input1(a, n);
        cout << "\n Nhap sp phan tu cua mang 2: ";
        cin >> m;
        check(m);
        input2(b, m);
        tronMang(a, b, c, n, m, k);
        cout << "\nBan co muon thu lai khong? (Y/N): ";
        cin >> t;
    }
    delete a;
    delete b;
    delete c;
	return 0;
}
