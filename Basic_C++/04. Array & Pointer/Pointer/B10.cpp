#include <iostream>
#include <cmath>
#include <limits>
#include <cctype>
using namespace std;

int check(float &a)
{
    do
    {
        if (!a)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap sai dinh dang , moi nhap lai: ";
            cin >> a;
        }
    } while (!a);
}

void GIAI(float *a, float *b, float *c)
{
    float delta, x1, x2;
    if (*a == 0)
    {
        // a== 0 phuong trinh tro thanh phuong trinh bac mot bx + c = 0
        if (*b == 0)
        {
            if (*c == 0)
            {
                cout << "Phuong trinh vo so nghiem" << endl;
            }
            else
            {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        }
        else
        {
            cout << "Phuong trinh co nghiem duy nhat: " << (float)-((*c) / (*b)) << endl;
        }
    }
    else
    {
        delta = (*b) * (*b) - 4 * (*a) * (*c);
        if (delta > 0)
        {
            x1 = (-(*b) + sqrt(delta)) / (2 * (*a));
            x2 = (-(*b) - sqrt(delta)) / (2 * (*a));
            cout << "Nghiem thu nhat x1 = " << x1 << endl;
            cout << "Nghiem thu hai x2 = " << x2 << endl;
        }
        else if (delta == 0)
        {
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -((*b) / 2.0 * (*a)) << endl;
        }
        else
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
}

int main()
{
    float a, b, c, delta, x1, x2;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\tCHUONG TRINH GIAI VA BIEN LUAN PHUONG TRINH BAC 2\n";
        cout << "Nhap a( SO NHAP VAO TOI DA 6 CHU SO ) = ";
        cin >> a;
        check(a);
        cout << "Nhap b( SO NHAP VAO TOI DA 6 CHU SO ) = ";
        cin >> b;
        check(b);
        cout << "Nhap c( SO NHAP VAO TOI DA 6 CHU SO ) = ";
        cin >> c;
        check(c);
        float *ptr1 = &a;
        float *ptr2 = &b;
        float *ptr3 = &c;
        GIAI(ptr1, ptr2, ptr3);
        cout << "\nBan co muon thu lai khong? (Y/N): ";
        cin >> t;
    }
    return 0;
}
