#include<iostream>
#include<cmath>
#include<limits>
#include<iomanip>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void input_arr(int a[MAX][MAX], int &n);
void output_arr(int a[MAX][MAX], int &n);
void sum1(int a[MAX][MAX], int &n);  // tong cac phan tu tren duong cheo chinh
void sum2(int a[MAX][MAX], int &n);  // tong cac phan tu tren duong cheo phu
void CT(int a[MAX][MAX], int &n);
int check(float &m);
void menu();

int main()
{
	int a[MAX][MAX];
	float m;
	cout<<"\n\nMoi nhap cap cua ma tran vuong: "; cin>>m; check(m);
	int n = (int)m;
	CT(a,n);
	delete a;
}

int check(float &n)
{
	do{
		if((!n) || (n !=(int)n) || (n < 0) || (n>MAX))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
			cin>>n;
		}
	}while((!n) || (n !=(int)n) || (n < 0) || (n>MAX));
}

void menu()
{
	cout<<"\n\t\t\tMENU"
		<<"\n\t\t1. Nhap ma tran vuong"						    
		<<"\n\t	2. Xuat ma tran vua nhap"					    
		<<"\n\t	3. In ra cac phan tu nam tren duong cheo chinh va tinh tong le, chan, cac phan tu"
		<<"\n\t	4. In ra cac phan tu nam tren duong cheo phu va tinh tong le, chan, cac phan tu"
		<<"\n\t	5. Thoat khoi chuong trinh"
		<<"\n\n\t\tCHU Y: NHAP THEO THU TU TU TREN XUONG DUOI CHO DUNG CHU TRINH!\n";			
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
void input_arr(int a[MAX][MAX], int &n)
{
	cout<<"\nMoi nhap cac phan tu cua ma tran vuong cap "<<n<<":\n";
	for(int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout<<setw(5)<<"a["<<i+1<<"]["<<j+1<<"]=";
			enterAnInteger(a[i][j]);
		}
	}
}

void output_arr(int a[MAX][MAX], int &n)
{
	cout<<"\nMa tran vuong cap "<<n<<" ma ban vua nhap du lieu co dang sau:\n\n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{ 
			cout<<setw(5)<<a[i][j]<<"\t";
		}
		cout<<endl;
	} 
}

void sum1(int a[MAX][MAX],int &n)
{
	int sum = 0,sum_odd = 0, sum_even = 0;
	cout<<"\n\nCac phan tu nam tren duong cheo chinh la:\n\n\t";
	for(int i=0;i<n;i++)
	{
		cout<<a[i][i]<<"\t";
		sum +=a[i][i];
		if(a[i][i] % 2 != 0)
		{
			sum_odd += a[i][i];
		}
		if( a[i][i] % 2 == 0)
		{
			sum_even += a[i][i];
		}
	}
	cout<<"\n\nTong cac phan tu tren duong cheo chinh bang "<<sum<<endl;
	if(sum_odd !=NULL)
	{
		cout<<"\n\nTong cac phan tu le tren duong cheo chinh bang "<<sum_odd<<endl;
	}else{
		cout<<"\n\nKhong co phan tu le tren duong cheo chinh!\n";
	}
	if(sum_even !=NULL)
	{
		cout<<"\n\nTong cac phan tu chan tren duong cheo chinh bang "<<sum_even<<endl;
	}else{
		cout<<"\n\nKhong co phan tu chan tren duong cheo chinh!\n";
	}
}

void sum2(int a[MAX][MAX], int &n)
{
	int sum = 0,sum_odd = 0, sum_even = 0;
	cout<<"\n\nCac phan tu nam tren duong cheo phu la:\n\n\t";
	for(int i=0;i<n;i++)
	{
		cout<<a[i][n-i-1]<<"\t";
		sum +=a[i][n-i-1];
		if(a[i][n-i-1] % 2 != 0)
		{
			sum_odd += a[i][n-i-1];
		}
		if( a[i][n-i-1] % 2 == 0)
		{
			sum_even += a[i][n-i-1];
		}
	}
	cout<<"\n\nTong cac phan tu tren duong cheo phu bang "<<sum<<endl;
	if(sum_odd !=NULL)
	{
		cout<<"\n\nTong cac phan tu le tren duong cheo phu bang "<<sum_odd<<endl;
	}else{
		cout<<"\n\nKhong co phan tu le tren duong cheo phu!\n";
	}
	if(sum_even !=NULL)
	{
		cout<<"\n\nTong cac phan tu chan tren duong cheo phu bang "<<sum_even<<endl;
	}else{
		cout<<"\n\nKhong co phan tu chan tren duong cheo phu!\n";
	}
}
void CT(int a[MAX][MAX], int &n)
{
	float lc;
	int luachon;
	while(luachon != 5)
	{	
		menu();
		cout<<"\nMoi nhap lua chon cua ban: ";   cin>>lc;  check(lc);
		luachon = (int)lc;
		switch(luachon)
		{
			case 1: input_arr(a,n);  break;
			case 2: output_arr(a,n); break;
			case 3: sum1(a,n); break;
			case 4: sum2(a,n); break;
			case 5: cout<<"\n\t - GOODBYE -\n";  break;
			default : cout<<"\n\tXIN LOI , LUA CHON BAN NHAP KHONG HOP LE!"; break;
		}
	}
}
