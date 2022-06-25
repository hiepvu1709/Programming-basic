#include <iostream>
#include<limits>
#include<cmath>
#include<iomanip>
using namespace std;
#define MAX 100

int check(float &n)
{
	do{
		if(!n || n !=(int)n || n < 0 || n>100)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
			cin>>n;
		}
	}while(!n || n!=(int)n || n < 0 || n>100);
}
void enterAnInteger(int &n)   // bat loi so thuc khi nhap gia tri trong mang 2 chieu
{
	float a;
	cin>>a;	
	while(cin.fail() || pow(a,2) != pow(a,2))
	{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
			cin>>a;
	}
	n=a;
}
void input(int b[],int m)
{
	for(int i=0 ; i<m ; i++)
	{
		cout<<setw(5)<<"b["<<i+1<<"]="; 
		enterAnInteger(b[i]);
	}
}
void demso(int a[], int n)
{
	int soduong = 0, soam = 0, so0 = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(a[i] > 0) soduong++;
		if(a[i] < 0) soam++;
		if(a[i] == 0) so0++;
	}
		cout<<"So cac so duong la: "<<soduong<<endl;
		cout<<"So cac so am la: "<<soam<<endl;
	 	cout<<"So cac so bang 0: "<<so0<<endl;
}
int main()
{
	int a[MAX],n;
	float b;
	cout<<"\n\tNhap so phan tu cua mang: "; cin>>b; check(b);
	n = (int)b;
	input(a,n);
	demso(a,n);
	delete a;
	return 0;
}
