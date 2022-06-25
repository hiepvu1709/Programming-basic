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

void findMax(int b[], int &m)
{
    int max = b[0];
    int vitri = 0;
    for (int i = 0; i < m; i++)
    {
        if (max < b[i])
        {
            max = b[i];
            vitri = i;
        }
    }
    cout << "\nSo lon nhat trong day so vua nhap la: " << max << " o vi tri thu " << vitri + 1 << endl;
}
int main()
{
    float b, k;
    int n;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t- CHUONG TRINH NHAP VAO MOT DAY SO GOM n SO NGUYEN VA TIM SO LON NHAT ROI IN RA VI TRI CUA SO LON NHAT - \n";
        cout << "\nNhap so phan tu cua day so( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> b;
        check(b);
        n = (int)b;
        int a[n];
        input(a, n);
        cout << "\nCac so vua nhap la:\n";
        output(a, n);
        findMax(a, n);
        cout << "\nBan co muon thu lai khong? (Y/N) : ";
        cin >> t;
    }
    return 0;
}
