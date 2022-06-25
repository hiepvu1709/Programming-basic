#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[100],*ptr_a,dem=0;
	cout<<"Nhap so phan tu cua mang: ";cin>>n;
	cout<<"Nhap mang:\n";
	for (int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	ptr_a=&a[0]; // gan dia chi con tro vao dia chi cua phan tu thu nhat
	//Dem va in ra tong cac phan tu chan. Tim phan tu lon nhat
	cout << "Nhung phan tu chan trong mang la: ";
	while (ptr_a!=&a[n])  // khi dia chi cua con tro khac dia chi cua phan tu thu n
	{
		if (*ptr_a%2==0)  // gia tri cua con tro chia lay du cho 2 = 0
		{
			cout << *ptr_a << " ";  // in ra gia tri con tro
			dem++;
		}
		ptr_a++;	// con tro tang gia tri len 1
	}
	cout<<"\nCo tat ca "<<dem<<" phan tu chan trong mang.\n";
	return 0;
}
