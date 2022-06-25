#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

int check(float &a)
{
    do
    {
        if (!a || a != (int)a)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "So nhap vao yeu cau la so nguyen , moi nhap lai: ";
            cin >> a;
        }
    } while (!a || a != (int)a);
}

void tinhGiaithua(int *ptr)
{
    int P = 1;
    if (*ptr > 0)
    {
        for (int i = 1; i <= *ptr; i++)
        {
            P *= i;
        }
        cout << "Giai thua cua " << *ptr << " la " << P << endl;
    }
    else
    {
        for (int i = -1; i >= *ptr; i--)
        {
            P *= i;
        }
        cout << "Giai thua cua " << *ptr << " la " << P << endl;
    }
}
int main()
{
    float a;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t CHUONG TRINH TINH GIAI THUA CUA 1 SO\n";
        cout << "\n Moi nhap gia tri nguyen bat ky: ";
        cin >> a;
        check(a);
        int a1 = (int)a;
        int *ptr = &a1;
        tinhGiaithua(ptr);
        cout << "\nBan co muon thu lai khong? (Y/N): ";
        cin >> t;
    }
    return 0;
}
