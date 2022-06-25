#include<iostream>
#include<limits>
#include<cmath>
#include<iomanip>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void input_arr(int mt[MAX][MAX], int &m, int &n);
void output_arr(int mt[MAX][MAX], int &m, int &n);
bool SNT(int &a);
void lietkeSNT(int mt[MAX][MAX], int &m, int &n);
int check(float &n);


int main()
{
	cout<<"\n\t\tCHUONG TRINH LIET KE VA DEM SO LUONG SO NGUYEN TO CO TRONG MA TRAN\n";
	int mt[MAX][MAX];
	float a,b;
	cout<<"\nNhap so dong: ";  cin>>a;  check(a);
	cout<<"\nNhap so cot: ";   cin>>b;  check(b);
	int nROW = (int)a;
	int nCOL = (int)b;
	input_arr(mt,nROW,nCOL);
	output_arr(mt,nROW,nCOL);
	lietkeSNT(mt,nROW,nCOL);
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
	cout<<"\nMa tran vua nhap la: \n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<mt[i][j]<<"\t";
		}
		cout<<endl;	
	}
	cout<<"\n\n";
}

bool SNT(int &a)
{
	if(a < 2)
	{
		return false;
	}else{
		for(int i=2 ; i <= sqrt((float)a) ; i++)
		{
			if(a % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}

void lietkeSNT(int mt[MAX][MAX], int &m, int &n)
{
	int count(0);
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(SNT(mt[i][j]))
			{
				cout<<setw(5)<<mt[i][j];
				count++;
			}
		}
	}
	if(count != 0)
	{
		cout<<" la cac so nguyen to co trong ma tran.\n"
			<<"\tTong cong co "<<count<<" so nguyen to.\n";
	}else{
		cout<<"\nKhong co so nguyen to nao trong ma tran.\n";
	}
}
