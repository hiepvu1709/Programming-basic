#include <iostream>
#include <cctype>
#include <limits>
using namespace std;

int check(float n)
{
    do
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nBan nhap sai dinh dang, moi nhap lai: ";
            cin >> n;
        }
    } while (cin.fail());
}

int main()
{
    float a, b, x;
    float *ptr1, *ptr2, *ptr3;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t CHUONG TRINH GIAI VA BIEN LUAN PHUONG TRINH BAC NHAT ax + b = 0 \n";
        cout << "\nMoi nhap gia tri a: ";
        cin >> a;
        check(a);
        cout << "\nMoi nhap gia tri b: ";
        cin >> b;
        check(b);
        ptr1 = &a;
        ptr2 = &b;
        ptr3 = &x;
        if (*ptr1 == 0)
        {
            if (*ptr2 == 0)
            {
                cout << "\nPhuong trinh co vo so nghiem!\n";
            }
            else
            {
                cout << "\nPhuong trinh vo nghiem!\n";
            }
        }
        else
        {
            *ptr3 = -((*ptr2) / (*ptr1));
            cout << "\nPhuong trinh co nghiem x = " << *ptr3 << endl;
        }
        cout << "\nBan co muon thu lai khong? (Y/N): ";
        cin >> t;
    }
    return 0;
}
