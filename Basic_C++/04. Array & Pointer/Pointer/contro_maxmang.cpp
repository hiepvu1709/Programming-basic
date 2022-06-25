#include<iostream.h>

int main()
{
	int n;
	cout << "Moi nhap so phan tu cua mang: ";
	cin >> n;
	int a[n];
	int *p = &a[n];
	cout << "Moi nhap cac phan tu cua mang:\n";
	for(int i =0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	cout << "In mang: ";
	for(int i = 0; i < n; i++)
	{
		cout << *(a+i) << " ";
	}
	int max;
	*p = max;
	for(int i = 0; i<n;i++)
	{
		if(*p < *(p+i))
		{
			*p = *(p+i);
		}
	}
	cout << "\nGia tri lon nhat trong mang la: " << *p << endl;
	return 0;
}