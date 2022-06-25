#include <iostream>
#include <limits>
#include <cmath>
#include <cctype>
using namespace std;

bool ktrasont(int x)
{
    int i;
    bool kq = true;
    for (int i = 2; i < x; i++)
        if (x % i == 0)
            kq = false;
    return kq;
}

int check(float &n)
{
    do
    {
        if (cin.fail() || n < 1)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nguyen to la so tu nhien lon hon 1 , no chia het cho 1 va chinh no.\n"
                 << "Du lieu ban vua nhap khong dung , moi nhap lai: ";
            cin >> n;
        }
    } while (cin.fail() || n < 1);
}

int main()
{
    float n;
    cout << "\n\t-CHUONG TRINH IN RA CAC SO NGUYEN TO TRONG PHAM VI n\n";
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\nNhap so nguyen duong n( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> n;
        check(n);
        cout << "Cac so nguyen to trong pham vi tu 1 den " << n << " la: ";
        for (int i = 1; i <= n; i++)
            if (ktrasont(i))
                cout << i << " ";
        cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
    }
    return 0;
}

