#include <iostream>
#include <iomanip>
#include<limits>
#include<cmath>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void input(int b[MAX],int &m);
void output(int b[MAX], int &m);
int last_even(int b[MAX], int &m);
int check(float &n);

int main()
{
	cout<<"\n\tCHUONG TRINH TIM PHAN TU CHAN CUOI CUNG TRONG MANG\n";
	int b[MAX];
	float n;
	cout<<"\nMoi nhap so phan tu cua mang 1 chieu: ";  cin>>n;  check(n);
	int m = (int)n;
	input(b,m);
	output(b,m);
	cout<<"\n\nPhan tu chan cuoi cung cua mang la: "<<last_even(b,m);
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

int last_even(int a[MAX], int &m)
{
	for(int i = m - 1; i >= 0; i--)
    {
        if(a[i] % 2 == 0)
        {
            return a[i];
        }
    }
    return -1;
}
