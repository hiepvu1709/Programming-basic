#include <iostream>
#include <conio.h>
#include <limits>
#include <cctype>
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

void hoanvi(float *x, float *y)
{
    float tg = *x;
    *x = *y;
    *y = tg;
}
int main()
{
    float a1, b1;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
	    cout << "\nNhap gia tri thu nhat( TOI DA 6 CHU SO ) = ";
	    cin >> a1;
	    check(a1);
	    cout << "\nNhap gia tri thu hai( TOI DA 6 CHU SO ) = ";
	    cin >> b1;
	    check(b1);
	    hoanvi(&a1, &b1);
	    cout << "\nGia tri sau khi hoan doi la: " << endl;
	    cout << "a1 = " << a1 << ", b1 = " << b1 << endl;
		cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
}
    return 0;
}
