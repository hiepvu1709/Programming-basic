#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

int giai_thua(float x)
{
    if (x == 0)
        return 1;
    else
        return giai_thua(x - 1) * x;
}

int check(float &a)
{
    do
    {
        if (!a || a < 0 || a != (int)a)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Khong hop le, moi nhap lai: ";
            cin >> a;
        }
    } while (!a || a < 0 || a != (int)a);
}
void TH(float n, float k, float C)
{
	cout<<"\n\tCHUONG TRINH TINH TO HOP CHAP k CUA n VOI n NHAP VAO TU BAN PHIM\n";
	char t = 'Y';
	while (toupper(t) == 'Y')
	{
		cout << "Nhap n( SO NHAP VAO TOI DA 6 CHU SO ): ";
	    cin >> n;
	    check(n);
	    cout << "Nhap k( SO NHAP VAO TOI DA 6 CHU SO ): ";
	    cin >> k;
	    check(k);
	    do
	    {
	        if (n < k)
	        {
	            cout << "So n khong duoc nho hon k, moi nhap lai: ";
	            cin >> n;
	        }
	    } while (n < k);
	    C = giai_thua(n) / (giai_thua(k) * giai_thua(n - k));
	    cout << "To hop chap " << k << " cua" << n << " la " << C << endl;
	    cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
	}
}
int main()
{
    float n, k;
    float C;
    TH(n, k, C);
    return 0;
}
