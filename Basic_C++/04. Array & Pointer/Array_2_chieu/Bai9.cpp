// o day em moi chi dung lai la cong 2 ma tran cung cap , con khac cap thi em chua lam duoc

#include<iostream>
#include<limits>
#include<cmath>
#include<iomanip>
using namespace std;
#define MAX 100

void nhapmang(float a[MAX][MAX],float b[MAX][MAX], int &m, int &n);
void xuatmang(float a[MAX][MAX],float b[MAX][MAX], int &m, int &n);
void tong_2_mt(float a[MAX][MAX],float b[MAX][MAX], float c[MAX][MAX] ,int &m, int &n);
int check(float &m);

int main()
{
	cout<<"\n\tCHUONG TRINH TINH TONG HAI MA TRAN CUNG CAP\n";
	float c1[MAX][MAX],c2[MAX][MAX], c3[MAX][MAX];
	float a,b;
	cout<<"\nNhap so dong: ";   cin>>a;   check(a);
	cout<<"\nNhap so cot: ";    cin>>b;   check(b);
	int nROW = (int)a;
	int nCOL = (int)b;
	nhapmang(c1,c2,nROW,nCOL);
	xuatmang(c1,c2,nROW,nCOL);
	tong_2_mt(c1,c2,c3,nROW,nCOL);
	delete c1,c2,c3;
	return 0;
}

int check(float &n)
{
	do{
		if(!n || pow(n,2) != pow(n,2) || n !=(int)n || n < 0 || n>100)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
			cin>>n;
		}
	}while(!n || pow(n,2) != pow(n,2) || n!=(int)n || n < 0 || n>100);
}

void nhapmang(float a[MAX][MAX],float b[MAX][MAX], int &m, int &n)
{
	cout<<"\nMoi nhap cac phan tu cua ma tran 1:\n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(3)<<"a["<<i+1<<"]["<<j+1<<"]=";
			cin>>a[i][j];
			do{
				if(cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
					cout<<"\nDu lieu nhap vao mang yeu cau la so nguyen, moi nhap lai: ";
				 	cin>>a[i][j];
				}
			}while(cin.fail());
		}
	}
	cout<<"\nMoi nhap cac phan tu cua ma tran 2:\n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(3)<<"b["<<i+1<<"]["<<j+1<<"]=";
			cin>>b[i][j];
			do{
				if(cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
					cout<<"\nDu lieu nhap vao mang yeu cau la so nguyen, moi nhap lai: ";
				 	cin>>b[i][j];
				}
			}while(cin.fail());
		}
	}
}
void xuatmang(float a[MAX][MAX],float b[MAX][MAX], int &m, int &n)
{
	cout<<"\nHai ma tran vua nhap la:\n"
		<<"Ma tran thu nhat:\n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"Ma tran thu hai:\n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<b[i][j];
		}
		cout<<endl;
	}
}

void tong_2_mt(float a[MAX][MAX],float b[MAX][MAX], float c[MAX][MAX] ,int &m, int &n)
{
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	cout<<"\nTong hai ma tran la:\n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<c[i][j];
		}
		cout<<endl;
	}
}
