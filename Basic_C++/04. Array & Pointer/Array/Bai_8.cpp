#include <iostream>
#include <iomanip>
#include<limits>
#include<cmath>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void input(int b[MAX],int &m);
void output(int b[MAX], int &m);
void find_max(int b[MAX], int &m);
int check(float &n);

int main()
{
	cout<<"\n\tCHUONG TRINH TIM GIA TRI LON NHAT TRONG MAG 1 CHIEU\n";
	int b[MAX];
	float n;
	cout<<"\nMoi nhap so phan tu cua mang 1 chieu: ";  cin>>n;  check(n);
	int m = (int)n;
	input(b,m);
	output(b,m);
	find_max(b,m);
	delete b;
	return 0;
}

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

void input(int b[MAX],int &m)
{
	cout<<"\n  Moi nhap cac phan tu cua mang:\n";
	for (int i=0;i<m;i++)
	{ 
		cout<<setw(5)<<"b["<<i+1<<"]="; 
		enterAnInteger(b[i]);
	}
}
void output(int b[MAX], int &m)
{
	cout<<"\nMang vua nhap la:\n";
	for(int i=0 ; i<m ; i++)
	{
		cout<<setw(5)<<b[i]<<"\t";
	}
}

void find_max(int b[MAX], int &m)
{
	int max = b[0];
	for(int i=0 ; i<m ; i++)
	{
		if(b[i] > max)
		{
			max = b[i];
		}
	}
	cout<<"\nPHAN TU LON NHAT TORNG MANG 1 CHIEU LA: "<<max<<endl;
}
