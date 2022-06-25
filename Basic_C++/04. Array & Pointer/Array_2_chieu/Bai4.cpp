#include<iostream>
#include<limits>
#include<cmath>
#include<iomanip>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void input_arr(int mt[MAX][MAX], int &m, int &n);
void output_arr(int mt[MAX][MAX], int &m, int &n);
void chuyenvi(int mt[MAX][MAX], int &m, int &n);
int check(float &n);

int main()
{
	cout<<"\n\tCHUONG TRINH NHAP MA TRAN VA TIM MA TRAN CHUYEN VI CUA MA TRAN BAN DAU\n";
	int mt[MAX][MAX];
	float a,b;
	cout<<"\nNhap so dong: ";  cin>>a;  check(a);
	cout<<"\nNhap so cot: ";   cin>>b;  check(b);
	int nROW = (int)a;
	int nCOL = (int)b;
	input_arr(mt,nROW,nCOL);
	output_arr(mt,nROW,nCOL);
	chuyenvi(mt,nROW,nCOL);
	delete mt;
	return 0;
}
int check(float &n)
{
	do{
		if((!n) || (pow(n,2) != pow(n,2)) || (n !=(int)n) || (n < 0) || (n>100))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
			cin>>n;
		}
	}while((!n) || (pow(n,2) != pow(n,2)) || (n !=(int)n) || (n < 0) || (n>100));
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

void input_arr(int mt[MAX][MAX], int &m, int &n)
{
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<"a["<<i+1<<"]["<<j+1<<"]=";
			enterAnInteger(mt[i][j]);
		}
	}
}
void output_arr(int mt[MAX][MAX], int &m, int &n)
{
	cout<<"\nTa co ma tran sau: \n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<mt[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void chuyenvi(int mt[MAX][MAX], int &m, int &n)
{
	cout<<"\nMa tran chuyen vi cua ma tran tren la:\n";
	for(int i=0 ; i < n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			cout<<setw(5)<<mt[j][i]<<"\t";
		}
		cout<<endl;
	}
}
