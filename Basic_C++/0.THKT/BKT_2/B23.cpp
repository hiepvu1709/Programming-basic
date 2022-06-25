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
        cout << "\nSo nhap vao yeu cau la mot so nguyen, moi nhap lai: ";
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

void timx(int &n, int a[])
{
    float x;
    int count = 0, vitri = 0;
    cout << "\nMoi nhap gia tri can tim( SO NHAP VAO TOI DA 6 CHU SO ): ";
    cin >> x;
    do
    {
        if (!x || n != (int)n || n > 100000)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen , moi nhap lai: ";
            cin >> n;
        }
    } while (!n || n != (int)n || n > 100000);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            vitri = i;
            count++;
        }
    }
    if (count == 0)
    {
        cout << "\nKhong tim thay " << x << " o trong mang.\n";
    }
    else
    {
        cout << "\nTim thay " << x << " o trong mang va o vi tri thu " << vitri + 1 << endl;
    }
}

void CT(int n, int a[])
{
    nhapmang(n, a);
    cout << "\n\tCac phan tu vua nhap la: ";
    xuatmang(n, a);
    timx(n, a);
    cout << endl;
}

int main()
{
    float b, x;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n CHUONG TRINH NHAP VAO n PHAN TU CUA MANG 1 CHIEU VA SAP XEP THEO THU TU TANG DAN\n";
        cout << "\n\tNhap so phan tu cua mang( SO  HAP VAO TOI DA 6 CHU SO ): ";
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
