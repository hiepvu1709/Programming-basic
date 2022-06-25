#include<iostream.h>
int main()
{
	int n,max = 0,vitri = 0;
	cout << "Moi nhap so phan tu cua mang: "; cin >> n;
	int a[n];
	int *p;
	p =&a[n];
	cout << "Nhung phan tu cua mang la:\n";
	for(int i =0; i< n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	for(int i =0; i<n; i++)
	{
		if(max < *(a+i))
		max = *(a+i);
		vitri = i;
	}
	cout << "Gia tri lon hat dau tien trong mang la: " << max;
	cout << "\nO vi tri so " << vitri << endl;
	return 0;
}