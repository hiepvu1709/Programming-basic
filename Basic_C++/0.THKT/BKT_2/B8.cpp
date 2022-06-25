#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

int check(float a)
{
    do
    {
        if (cin.fail() || a != (int)a)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nBan nhap sai dinh dang, moi nhap lai: ";
            cin >> a;
        }
    } while (cin.fail() || a != (int)a);
}

float tong(int x)
{
    if (x == 1)
        return 1;
    else
        return tong(x - 1) + (float)1 / x;
}

int main()
{
    cout << "\n\t-CHUONG TRINH SU DUNG HAM DE QUY TINH TONG S = 1/n\n";
    char t = 'Y';
    float n;
    while (toupper(t) == 'Y')
    {
    	cout << "\nMoi nhap gia tri n( SO NHAP TOI DA 6 CHU SO ): ";
	    cin >> n;
	    check(n);
	    cout << "Tong S = " << tong(n) << endl;
	    cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
	}
    return 0;
}
