#include<iostream>
#include<limits>
#include<cctype>
#include<iomanip>
using namespace std;

int check(float &n);
void enterAnInteger(int &n);
void input(int a[], int &m);
int countEven(int a[], int n);

int main()
{
	float m;
	int *p;
	cout<<"\nMoi nhap so phan tu cua day so: ";
	cin>>m;  check(m);
	int n = (int)m;
	int a[n];
	input(a,n);
	p = &countEven(a,n);
	cout<<"\nCo tat ca: "<<*p<<endl;
}
int check(float &n)
{
	do{
		if(!n || n !=(int)n || n < 0 )
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
			cin>>n;
		}
	}while(!n || n!=(int)n || n < 0 );
}

void enterAnInteger(int &n)   // bat loi so thuc khi nhap gia tri trong mang 2 chieu
{
	float a;
	cin>>a;	
	while(cin.fail() || a!=(int)a)
	{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen, moi nhap lai: ";
			cin>>a;
	}
	n=a;
}

void input(int a[], int &m)
{
	for(int i=0 ; i<m ; i++)
	{
		cout<<setw(5)<<"a["<<i+1<<"]=";
		enterAnInteger(a[i]); 
	}
}

int countEven(int a[], int n)
{
	int count = 0;
	int *dem;
	for(int i=0 ; i<n ; i++)
	{
		if(count % 2 == 0)
		{
			count++;
		}
	}
	dem = &count;
	return dem;
}
