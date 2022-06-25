#include <iostream>
#include <limits>
#include <cmath>
#include <cctype>
using namespace std;

long tinhXn(int n)
{
    if (n == 0)
        return 1;
    long s = 0;
    for (int i = 1; i <= n; i++)
        s = s + pow(i, 2) * tinhXn(n - i);
    return s;
}
int check(float &n)
{
    do
    {
        if (!n || n != (int)n)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Khong hop le, moi nhap lai: ";
            cin >> n;
        }
    } while (!n || n != (int)n);
}
int main()
{
    float n;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
    	cout << "Nhap n( SO NHAP VAO TOI DA 6 CHU SO ): ";
	    cin >> n;
	    check(n);
	    cout << "X(" << n << ") = " << tinhXn(n) << endl;
	    cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
	}
    return 0;
}
