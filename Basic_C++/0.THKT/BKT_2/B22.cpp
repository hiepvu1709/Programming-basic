#include <iostream>
#include <limits>
#include <iomanip>
#include <cctype>
using namespace std;

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
        cout << "\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
        cin >> a;
    }
    n = a;
}
void nhapmang(int &n, int a[])
{
    cout << "\n\tMoi nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << "a[" << i + 1 << "]=";
        enterAnInteger(a[i]);
    }
}
void xuatmang(int &n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << a[i];
    }
}

void Swap1(int &n, int a[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

void CT(int n, int a[])
{
    nhapmang(n, a);
    cout << "\n\tCac phan tu vua nhap la: ";
    xuatmang(n, a);
    cout << "\n\tCac phan tu cua mang sau khi duoc sap xep theo thu tu tang dan la: ";
    Swap1(n, a);
    xuatmang(n, a);
    cout << endl;
}

int main()
{
    float b;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n CHUONG TRINH NHAP VAO n PHAN TU CUA MANG 1 CHIEU VA SAP XEP THEO THU TU TANG DAN\n";
        cout << "\n\tNhap so phan tu cua mang: ";
        cin >> b;
        check(b);
        int n = (int)b;
        int a[n];
        CT(n, a);
        cout << "\nBan co muon thu lai khong? (Y/N) : ";
        cin >> t;
    }
    return 0;
}
