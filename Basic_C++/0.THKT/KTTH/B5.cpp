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

void TanSuatXuatHien(int a[], int n)
{
	for(int i=0 ; i<n ; i++)
	{
		int count = 0;
		for(int j =0 ; j<n ; j++)
		{
			if(a[i] == a[j])
			{
				if(i<=j)
				{
					count++;
				}else{
					break;
				}
			}
		}
		if(count != 0)
		{
			cout<<"\nGia tri "<<a[i]<<" co tan suat xuat hien la "<<count<<endl;
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
		TanSuatXuatHien(a,n);
		cout<<"\nBan co muon thu lai khong? (Y/N): ";
		cin>>t;
	}
	delete[] a;
	return 0;
}
