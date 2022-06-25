#include<iostream>
#include<limits>
#include<cctype>
#include<cmath>
#include<iomanip>
using namespace std;
#define MAX 100

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

void input(int a[], int &n)
{
	cout<<"\nMoi nhap cac phan tu cua mang:\n";
	for(int i=0 ; i<n ; i++)
	{
		cout<<setw(5)<<"a["<<i+1<<"]= ";
		enterAnInteger(a[i]);
	}
}

void output(int a[], int n)
{
	cout<<"\nTa co mang sau:\n";
	for(int i=0 ; i<n ; i++)
	{
		cout<<setw(5)<<a[i];
	}
}

void duachanvedau(int a[], int vitridoi)
{
	int tmp = a[vitridoi];    // bien tmp luu all cac gia tri thoa DK doi
	for(int i = vitridoi; i>0 ; i--)
	{
		a[i] = a[i-1];
	}
	a[0] = tmp;
}

void dua0vegiua(int a[], int vitridoi, int vitrichancuoi)
{
	// Do 0 nam giua mang nên 0 se là giá tri chan cuoi de thoa yêu cau bài toán
	for(int i = vitridoi ; i> vitrichancuoi ; i--)
	{
		a[i] = a[i-1];
	}
	a[vitrichancuoi] = 0;
}

void Swap(int a[], int n)
{
	// dua chan ve dau, le ve cuoi, 0 ve giua
	int i, count;
	int vitrichancuoi = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(a[i] % 2 == 0 && a[i] != 0)
		{
			duachanvedau(a,i);
		}
	}
	for(i =0; i<n ; i++)
	{
		if(a[i] % 2 != 0)
		{
			vitrichancuoi = i;
			break;
		}
	}
	for(i ; i<n ; i++)  // bo khoi tao i de tranh du 1 so 0
	{
		if(a[i] == 0)
		{
			dua0vegiua(a,i,vitrichancuoi);
		}
	}
}

int main()
{
	float m;
	int a[MAX];
	char t = 'Y';
	while(toupper(t) == 'Y')
	{
		cout<<"\nNhap so phan tu cua mang: ";
		cin>>m;
		while(!m || m!=(int)m || m<1 || m>MAX)
		{
			if(!m)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"\nBan nhap sai dinh damg, moi nhap lai: ";
				cin>>m;
			}
			if(m!=(int)m || m<1 || m>MAX)
			{
				cout<<"\nSo luong nhap vao yeu cau la mot so nguyen duong va nho hon 100,moi nhap lai: ";
				cin>>m;
			}
		}
		int n = (int)m;
		input(a,n);
		output(a,n);
		Swap(a,n);
		cout<<"\nDua chan ve dau, le ve cuoi, 0 ve giua thi\n";
		output(a,n);
		cout<<"\n\nBan co muon thu lai khong? (Y/N) : ";
		cin>>t;
	}
	delete[] a;
	return 0;
}
