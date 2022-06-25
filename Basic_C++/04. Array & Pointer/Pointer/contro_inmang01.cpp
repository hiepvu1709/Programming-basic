#include<iostream.h>
int main()
{
	int n;
	cout << "Moi ban nhap vao so phan tu cua mang: ";
	cin >> n;
	int a[n];
	int *ptr;
	ptr = &a[n];
	cout << "Moi ban nhap cac phan tu do:\n";
	for(int i = 0; i< n; i++)
	{
		cout << "a[" << i+1 << "]=";
		cin >> a[i];
	}	
	cout << "In mang:\n";
	for(int i = 0; i < n; i++)
	{
		cout << *(a+i) << " ";
	}	
	for(int i = 0;i <n; i++)
	{
		cout << "\nPhan tu " << i+1 << " co dia chi la: " << a+i<< endl;
	}
	return 0;
}	