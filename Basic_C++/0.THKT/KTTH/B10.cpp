#include<iostream>
#include<limits>
#include<cctype>
#include<cmath>
#include<iomanip>
using namespace std;
#define MAX 100

int check(float &a);
void enterAnInteger(int &n);
void input(int a[][MAX], int &m, int &n);
void otput(int a[][MAX], int &m, int &n);
bool check2(int a[]MAX), int vtdong, int vtcot, int &m, int &n);
void count(int a[]MAX), int &m, int &n);

int main()
{
	int a[MAX][MAX];
	float d,c;
	char t = 'Y';
	while(toupper(t) == 'Y')
	{
		cout<<"\n\t- CHUONG TRINH DEM SO LUONG PHAN TU HOANG HAU TRONG MA TRAN -\n";
		cout<<"\nMoi nhap so dong: ";
		cin>>d;
		check(d);
		cout<<"\nMoi nhap so cot: ";
		cin>>c;
		check(c);
		int m = (int)d;
		int n = (int)c;
		input(a,m,n);
		output(a,m,n);
		count(a,m,n);
		cout<<"\n\nBan co muon thu lai khong? (Y/N) : ";
		cin>>t;
	}
	//delete[] a;
	return 0;
}

int check(float &a)
{
	do{
		if(cin.fail() || a < 1 || a != (int)a || a > MAX)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong, moi nhap lai: ";				
			cin>>a;
		}
	}while(cin.fail() || a < 1 || a != (int)a || a > MAX);
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

void input(int a[MAX][MAX], int &m, int &n)
{
	cout<<"\nMoi nhap cac phan tu cua ma tran:\n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(7)<<"a["<<i+1<<"]["<<j+1<<"]= ";
			enterAnInteger(a[i][j]);
		}
	}
}

void output(int a[MAX][MAX], int &m, int &n)
{
	cout<<"\nTa co ma tran sau:\n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(7)<<a[i][j];
		}
	}
}

/*
	- kiem tra ptu do co lon nhta tren dong no dang dung hay k
	- kiem tra ptu do co lon nhat tren cot no dang dung hay khong
	- kiem tra phan tu do co lon nhat tren 2 duong cheo hay k
		+ tu vi tri phan tu hien tai , i--,j-- (giam qua trai)
		+ tu vi tri ----------------, i--,j++ (gia, qua phai)
		+ // i++,j++ (tang phai)
		+ // i++,j-- (tang trai)
	Sau khi thuc hien 3 ham tren , duyet ma tran se tim duoc phan tu "HOANG HAU"
*/

bool check2(int a[MAX]MAX), int vtdong, int vtcot, int &m, int &n)
{
	//kiem tra phan tu hoang hau
	
	int x = a[vtdong][vtcot];
	
	// kiemtradong
	for(int i =0; i<n ; i++)
	{
		if(a[vtdong][i] > x)
		{
			return false;
		}
	}
	// kiemtracot
	for(int j =0; j<m ; j++)
	{
		if(a[j][vtcot] > x)
		{
			return false;
		}
	}
	// kiem tra duong cheo thu nhat
	int vtdong1 = vtdong + 1;
	int vtcot1 = vtcot + 1;
	while(vtcot1 + 1 < cot && vtdong1 < vtdong)
	{
		if(a[vtcot1][vtdong1] > x)
		{
			return false;
		}
		// tang phai
		vtcot1++;
		vtdong1++;
	}
	vtdong1 = vtdong - 1;
	vtcot1 = vtcot - 1;
	while(vtcot1 - 1 >= 0 && vtdong1 < dong)
	{
		if(a[vtcot1][vtdong1] > x)
		{
			return false;
		}
		//tang trai
		vtdong1++;
		vtcot1--;
	}
	vtdong1 = vtdong -1;
	vtcot1 = vtcot + 1;
	while(vtdong1 - 1 >= 0 && vtcot1 < cot)
	{
		if (a[vtcot1][vtdong1] > x)
            return false;
        // giam phai
        vtdong1--;
        vtcot1++;
	}
	return true;
}

void Count(int a[MAX]MAX), int &m, int &n)
{
	int count = 0;
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(check2(a,i,j,m,n)==true)
			{
				count++;
			}
		}
	}
	if(count != 0)
	{
		cout<<"\nSo luong phan tu hoang hau la: "<<dem<<endl;
	}else{
		cout<<"\nLhong co phan tu hoang hau nao trong ma tran!\n";
	}
}

