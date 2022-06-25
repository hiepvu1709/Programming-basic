#include<iostream.h>
int main()
{
	int a[5];
	int *p = a;
	cout << "Moi ban nhap 5 so: ";
	cin >> *p >> *(p+1) >> *(p+2)>> *(p+3)>> *(p+4);
	cout << "Cac so ban vua nhap la:\n";
	for(int i = 0; i < 5; i++)
	{
		cout << a[i]<< " ";
	}
}		
// day cung la 1 cach in mang nhung no co han che
// boi vi neu ma cho mang toi 100 thi cu ngoi *p den 100 a