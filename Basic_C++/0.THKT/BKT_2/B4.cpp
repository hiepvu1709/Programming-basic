#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

float LuyThua(float x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return LuyThua(x, n + 1) * 1 / x;
    }
    return LuyThua(x, n - 1) * x;
}
int check(float &n)
{
    do
    {
        if (!n || n != (int)n)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen: ";
            cin >> n;
        }
    } while (!n || n != (int)n);
}
int main()
{
    cout << "\n\t-CHUONG TRINH TINH LUY THUA-\n";
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        float x, n;
        cout << "\nMoi nhap gia tri n( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> n;
        check(n);
        cout << "\nMoi nhap gia tri cua x( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> x;
        check(x);
        cout << "\nP(x,n)= " << LuyThua(x, n) << endl;
        cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
    }
    return 0;
}
