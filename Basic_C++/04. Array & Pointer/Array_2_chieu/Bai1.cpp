#include<iostream>
#include<limits>
#include<cmath>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void nhapmang(int mt[MAX][MAX], int &m, int &n);
void xuatmang(int mt[MAX][MAX], int &m, int &n);
int check(float &n);

int main()
{
	cout<<"\n\tCHUONG TRINH NHAP XUAT MA TRAN\n";
	int mt[MAX][MAX];
	float a,b;
	cout<<"\nNhap so dong: ";  cin>>a;  check(a);
	cout<<"\nNhap so cot: ";   cin>>b;  check(b);
	int nROW = (int)a;
	int nCOL = (int)b;
	nhapmang(mt,nROW,nCOL);
	xuatmang(mt,nROW,nCOL);
	delete mt;
	return 0;
}
int check(float &n)
{
	do{
		if((!n) || (n !=(int)n) || (n < 0) || (n>100))
		{
			cin.clear();
			
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
			cin>>n;
		}
	}while((!n) || (n !=(int)n) || (n < 0) || (n>100));
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
void nhapmang(int mt[MAX][MAX], int &m, int &n)
{
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<"a["<<i+1<<"]["<<j+1<<"]=";
			enterAnInteger(mt[i][j]);
		}
	}
}
void xuatmang(int mt[MAX][MAX], int &m, int &n)
{
	cout<<"\nTa co ma tran sau: \n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<mt[i][j]<<"\t";
		}
		cout<<endl;
	}
}
