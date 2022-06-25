#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

void Chuyendia(int num, char x, char y, char z)
{
    if (num > 0)
    {
        Chuyendia(num - 1, x, z, y);
        cout << x << " -> " << z << endl;
        Chuyendia(num - 1, y, x, z);
    }
}
int check(float &n)
{
    do
    {
        if (!n || n < 0 || n != (int)n)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo dia nhap vao yeu cau la mot so nguyen duong lon hon 0";
            cin >> n;
        }
    } while (!n || n < 0 || n != (int)n);
}
int main()
{
    float n;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
    	cout << "\nNhap so dia( SO NHAP VAO TOI DA 6 CHU SO ): ";
	    cin >> n;
	    check(n);
	    cout << "\nViec chuyen dia nhu sau:\n";
	    Chuyendia(n, 'A', 'B', 'C');
	    cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
	}
    return 0;
}
