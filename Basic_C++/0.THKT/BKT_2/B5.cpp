#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

int check(float a)
{
    do
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nBan nhap sai dinh dang, moi nhap lai: ";
            cin >> a;
        }
    } while (cin.fail());
}

void checkTRiangle(float a, float b, float c)
{
    cout << "\nKiem tra ba canh co do dai lan luot la:\n"
         << a << " " << b << " " << c << endl;
    if (a + b > c || a + c > b || b + c > a)
    {
        cout << "\nDo dai ba canh tren du dieu kien tao thanh tam giac\n";
    }
    else
    {
        cout << "\nKhong thoa man la ba canh cua tam giac.\n";
    }
}

int main()
{
    char t = 'Y';
    float a, b, c;
    while (toupper(t) == 'Y')
    {
        cout << "\n\t-CHUONG TRINH NHAP VAO BA SO VA KIEM TRA BA SO DO CO TAO THANH TAM GIAC HAY KHONG-\n";
        cout << "\nMoi nhap do dai ba canh a,b,c ( SO NHAP VAO TOI DA 6 CHU SO )\n";
        cout << "\na = ";
        cin >> a;
        check(a);
        cout << "\nb = ";
        cin >> b;
        check(b);
        cout << "\nc = ";
        cin >> c;
        check(c);
        checkTRiangle(a, b, c);
        cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
    }
    system("pause");
}
