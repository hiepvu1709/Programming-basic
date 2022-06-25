#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
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
            cout << "\nSo nhap vao yeu cau la mot so nguyen , moi nhap lai: ";
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

void input(int b[], int &m)
{
    for (int i = 0; i < m; i++)
    {
        cout << setw(7) << "So thu " << i + 1 << " ( SO NHAP VAO TOI DA 6 CHU SO ): ";
        enterAnInteger(b[i]);
    }
}
void output(int b[], int &m)
{
    for (int i = 0; i < m; i++)
    {
        cout << setw(5) << b[i] << "\t";
    }
}

void xoa(int a[], int &n, float &k)
{
    cout << "\nNhap so k( SO NHAP TOI DA 6 CHU SO ): ";
    cin >> k;
    while (!k || k != (int)k || k < 0 || k > n)
    {
        if (!k || k != (int)k || k < 0 || k > n)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nBan nhap vi tri can xoa khong hop le, yeu cau nhap so nguyen duong, moi nhap lai: ";
            cin >> k;
        }
        if (k > n)
        {
            cout << "\nVi tri can xoa khong duoc lon hon so phan tu cua day so, moi nhap lai: ";
            cin >> k;
        }
    }
    for (int i = k - 1; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    cout << "\nDay so sau khi xoa la: ";
    output(a, n);
}
int main()
{
    float b, k;
    int n;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t- CHUONG TRINH NHAP VAO MOT DAY SO GOM n SO NGUYEN VA XOA MOT SO BAT KY ROI IN RA CAC SO CON LAI - \n";
        cout << "\nNhap so phan tu cua day so( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> b;
        check(b);
        n = (int)b;
        int a[n];
        input(a, n);
        cout << "\nCac so vua nhap la:\n";
        output(a, n);
        xoa(a, n, k);
        cout << "\nBan co muon thu lai khong? (Y/N) : ";
        cin >> t;
    }
    return 0;
}
