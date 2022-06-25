#include<iostream.h>
int main()
{
	int n;
	cout << "Moi ban nhap so phan tu cua mang: ";
	cin >> n;
	int a[n];
	int *p = &a[n];
	cout << "Moi nhap cac phan tu cua mang:\n";
	for(int i = 0; i < n; i++)
	{
		cout << "a[" <<i+1 << "]=";
		cin >> a[i];
	}
	cout << "In mang: ";
	for(int i = 0; i< n; i++)
	{
		cout << *(a+i) << " ";
	}
	cout << "\nDao nguoc mang: ";
	for(int i = n - 1; i >= 0; i--)
	{
		cout << *(a+i) << " ";
	}
	cout << "\n-----------------------------\n";
}				