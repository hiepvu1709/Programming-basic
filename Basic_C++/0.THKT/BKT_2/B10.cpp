#include <iostream>
using namespace std;
int Tichle(int x)
{
     if (x == 1)
     {
     	return 1;
     }
     else 
     {
        return (2*x+1)*Tichle(x-1);
     }
}
int main ()
{
	int n;
	cout << " Nhap n : ";
	cin >> n;
	cout << " Tich 1 * 3 * 5 * ... * (2n - 1 ) = " << Tichle(n) << endl;
	return 0;
}
