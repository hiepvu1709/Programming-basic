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
        if (!n || n != (int)n || n < 0 || n > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen , moi nhap lai: ";
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

void tong_trungbinhcong(int b[], int &m)
{
    int sum = 0, count = 0;
    for (int i = 0; i < m; i++)
    {
        sum += b[i];
        count++;
    }
    cout << "\nTong cac so cua day so bang " << sum << endl;
    cout << "\nTrung binh cong bang " << (float)sum / count << endl;
}
int main()
{
    float b, k;
    int n;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t- CHUONG TRINH NHAP VAO MOT DAY SO GOM n SO NGUYEN , TINH TONG VA TRUNG BINH CONG DAY SO - \n";
        cout << "\nNhap so phan tu cua day so( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> b;
        check(b);
        n = (int)b;
        int a[n];
        input(a, n);
        cout << "\nCac so vua nhap la:\n";
        output(a, n);
        tong_trungbinhcong(a, n);
        cout << "\nBan co muon thu lai khong? (Y/N) : ";
        cin >> t;
    }
    return 0;
}
