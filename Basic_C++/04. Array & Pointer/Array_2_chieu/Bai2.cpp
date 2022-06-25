#include<iostream>
#include<limits>
#include<cmath>
#include<iomanip>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void input_arr(int mt[MAX][MAX],  int &m, int &n);
void output_arr(int mt[MAX][MAX], int &m, int &n);
void sum_row(int mt[MAX][MAX], int n, int d);
void sum_col(int mt[MAX][MAX], int m, int c);
void sum_matrix(int mt[MAX][MAX], int &m, int &n);
void Program(int mt[MAX][MAX], int &m, int &n);
int check(float &n);

int main()
{
	cout<<"\n\tCHUONG TRINH TINH TINH TONG DONG, COT CUA MA TRAN THEO YEU CAU\n";
	int mt[MAX][MAX];
	float a,b;
	cout<<"\nNhap so dong: ";  cin>>a;   check(a);
	cout<<"\nNhap so cot: ";   cin>>b;   check(b);
	int nROW = (int)a;
	int nCOL = (int)b;
	Program(mt,nROW,nCOL);
	delete mt;
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
	cout<<"\nMang vua nhap la: \n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<mt[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void sum_row(int mt[MAX][MAX], int n, int d)
{
	int sum(0);
	for(int j=0 ; j<n ; j++)
	{
		sum+=mt[d-1][j];
	}
	cout<<"\nTong dong = "<<sum<<endl;
}
void sum_col(int mt[MAX][MAX], int m, int c)
{
	int sum(0);
	for(int i=0 ; i<m ; i++)
	{
		sum+=mt[i][c-1];
	}
	cout<<"\nTong cot = "<<sum<<endl;
}

void sum_matrix(int mt[MAX][MAX], int &m, int &n)
{
	int sum(0);
	cout << "Tong cac phan tu trong ma tran vua nhap bang ";	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			sum += mt[i][j];
			}
		}
	cout<<"\n\nTong cac phan tu cua mang bang "<<sum<<endl;
}
void Program(int mt[MAX][MAX], int &m, int &n)
{
	input_arr(mt,m,n);
	output_arr(mt,m,n);
	float row, col; 
	cout<<"\nNhap dong can tinh tong: "; cin>>row;  check(row);
	do{
		if(row > m)
		{
			cout<<"\nSo dong ban nhap vuot qua so dong cua ma tran, moi nhap lai: ";
			cin>>row;
		}
	}while(row>m);
	int d = int(row);
	sum_row(mt,n,d);
	cout<<"\n\nNhap cot can tinh tong: ";  cin>>col;  check(col);
	do{
		if(col > n)
		{
			cout<<"\nSo cot ban nhap vuot qua so dong cua ma tran, moi nhap lai: ";
			cin>>col;
		}
	}while(col > n);
	int c = (int)col;
	sum_col(mt,m,c);
	sum_matrix(mt,m,n);
}
