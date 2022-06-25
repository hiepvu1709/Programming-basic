#include<iostream>
#include<limits>
#include<iomanip>
#include<cmath>
using namespace std;

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
void nhapmang(int &n, int a[])
{
	
	cout<<"\n\tMoi nhap cac phan tu cua mang:\n";
	for(int i=0 ; i<n ; i++)
	{
		cout<<setw(5)<<"a["<<i+1<<"]=";
		enterAnInteger(a[i]);
	}
}
void xuatmang(int &n, int a[])
{
	cout<<"\nCac phan tu vua nhap la:\n";
	for(int i=0 ; i<n ; i++)
	{
		cout<<setw(5)<<a[i]<<" ";
	}
}
void tongLe(int a[], int n)
{
	int sum = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(a[i] % 2 != 0)
		{
			sum+=a[i];
		}
	}
	cout<<"\nTong cac so le trong mang bang "<<sum<<endl;
}

int main()
{
	cout<<"\n CHUONG TRINH NHAP VAO n PHAN TU CUA MANG 1 CHIEU VA IN RA TONG CAC PHAN TU LE TRONG MANG\n";
	float b;
	int n;
	cout<<"Nhap so phan tu cua mang: "; cin>>b; check(b);
	n = (int)b;
	int a[n];
	nhapmang(n,a);
	xuatmang(n,a);
	tongLe(a,n);
	return 0;
}
