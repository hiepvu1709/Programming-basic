#include<iostream.h>
void nhapmangtangdan(int a[],int n)
{
	cout<<"Nhap mang: \n";
	int i=0;
	while(i<n)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
//vi nhap mang tang dan nen neu dang nhap cac so tang dan ma co 1 so nho hon so hien tai thi se yeu cau ban nhap lai phan tu do
		if(i>0&&a[i]<=a[i-1]) 
		continue;
		i++;
	}
}
void xuatmang(int a[],int n)
{
	cout<<"\nXuat mang: ";
	for(int i=0 ; i<n ; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int n;
	cout<<"Moi nhap so phan tu cua mang: ";
	cin>>n;
	int a[n];
	nhapmangtangdan(a,n);
	xuatmang(a,n);
}