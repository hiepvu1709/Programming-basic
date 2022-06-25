#include <iostream>
#include <conio.h>
#include <limits>
#include <cctype>
using namespace std;

int check(float n)
{
    do
    {
        if (cin.fail() || n != (int)n)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nBan nhap sai dinh dang, moi nhap lai: ";
            cin >> n;
        }
    } while (cin.fail() || n != (int)n);
}

int main()
{
    float a1, b1;
    int *ptr1, *ptr2, sum;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
	    cout << "\nNhap gia tri a( TOI DA 6 CHU SO ) = ";
	    cin >> a1;
	    check(a1);
	    cout << "\nNhap gia tri b( TOI DA 6 CHU SO ) = ";
	    cin >> b1;
	    check(b1);
	    int a = (int)a1;
	    int b = (int)b1;
	    ptr1 = &a;
	    ptr2 = &b;
	    sum = *ptr1 + *ptr2;
	    cout << "\nTong 2 so la: " << sum << endl;
	    cout << "\nBan co muon thu lai khong? (Y/N): ";
        cin >> t;
	}
    return 0;
}
