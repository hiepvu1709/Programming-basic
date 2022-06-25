#include<iostream>
#include<cmath>
#include<limits>
#include<iomanip>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void nhapmang(int a[MAX][MAX], int &m, int &n);
void xuatmang(int a[MAX][MAX], int &m, int &n);
void trungbinh(int a[MAX][MAX], int &m, int &n);
int check(float &m);

int main()
{
	cout<<"\n\t\tCHUONG TRINH TINH TRUNG CONG CAC PHAN TU TRONG MA TRAN\n";
	int c[MAX][MAX];
	float a,b;
	cout<<"\nNhap so dong: ";   cin>>a;   check(a);
	cout<<"\nNhap so cot: ";    cin>>b;   check(b);
	int nROW = (int)a;
	int nCOL = (int)b;
	nhapmang(c,nROW,nCOL);
	xuatmang(c,nROW,nCOL);
	trungbinh(c,nROW,nCOL);
	delete c;
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

void nhapmang(int mt[MAX][MAX], int &m, int &n)
{
	cout<<"\nMoi nhap cac phan tu cua ma tran:\n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<"a["<<i+1<<"]["<<j+1<<"]=";
			enterAnInteger(mt[i][j]);
		}
	}
}
void xuatmang(int mt[MAX][MAX], int &m, int &n)
{
	cout<<"\nMa tran vua nhap la:\n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<mt[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void trungbinh(int a[MAX][MAX], int &m, int &n)
{
	float tongpt = 0, tongle = 0, tongchan = 0 , tongam = 0;
	int pt = 0, sole = 0, sochan = 0, soam = 0;
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			tongpt += a[i][j];
			pt++;
			if(a[i][j] % 2 != 0)
			{
				tongle += a[i][j];
				sole++;
			}
			if(a[i][j] % 2 == 0)
			{
				tongchan += a[i][j];
				sochan++;
			}
			if(a[i][j] < 0)
			{
				tongam += a[i][j];
				soam++;
			}
		}
	}
	cout<<"\nTrung binh cong cac phan tu co trong ma tran bang "<<float(tongpt/pt)<<endl;
	if(tongle != NULL)
	{
		cout<<"\nTrung binh cong cac phan tu le co trong ma tran bang "<<float(tongle/sole)<<endl;
	}else{
		cout<<"\nKhong co phan tu le trong ma tran!";
	}
	if(tongchan != NULL)
	{
		cout<<"\nTrung binh cong cac phan tu chan co trong ma tran bang "<<float(tongchan/sochan)<<endl;
	}else{
		cout<<"\nKhong co phan tu chan trong ma tran!";
	}
	if(tongam != NULL)
	{
		cout<<"\nTrung binh cong cac phan tu am co trong ma tran bang "<<float(tongam/soam)<<endl;
	}else{
		cout<<"\nKhong co phan tu am trong ma tran!";
	}
}
