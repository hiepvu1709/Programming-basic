
#include<iostream.h>
int main()
{
	int n,sum = 0;
	cout << "Moi ban nhap so phan tu cua mang: ";
	cin >> n;
	int a[n];
	int *p,*q;
	p = &a[n];
	q = &sum;
	cout << "Moi ban nhap cac phan tu cua mang:\n";
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i+1 << "]=";
		cin >> a[i];
	}
	cout << "\nIn mang: ";
	for(int i = 0; i < n; i++)
	{
		cout << *(a+i)<< " ";
	}	
	for(int i = 0; i < n; i++)
	{
		sum += *(a+i);
	}
	cout << "\nTong cac phan tu trong mang bang: " << *q << endl;
	return 0;
}			