#include<iostream>
#include<cmath>
#include<limits>
using namespace std;

void nhapa(int &n)
{
	float a;
	cin>>a;
    while(cin.fail() || a<0 || a!=(int)a)
	{
		cin.clear();
	   	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	    cout<<"Yeu cau nhap vao so nguyen duong. Nhap lai = ";
	    cin>>a;
	}	
	n=a;
}

void nhap(int a[], float &n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"] = ";
		nhapa(a[i]);
		for(int j=0; j<i; j++)
	    {
		    while(a[i]==a[j])
		    {
			    cout<<"So nhap vao khong duoc trung. Nhap lai "<<"a["<<i<<"] = ";
		    	cin>>a[i];
		    }
    	}
	}
}

void xuat(int a[], float n)
{
	for(short i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}

int chinhphuong(int a[], int n)
{
	int k;
	for(int i=0; i<n; i++)
	{
		float n=sqrt(a[i]);
		if(int(n)==n)
		{
			cout<<a[i]<<" ";
		}
	}
}

void hoanvi(int &x, int &y)
{
	int q=x;
	x=y;
	y=q;
}

void sapxepchantang(int a[], float n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]>a[j] && a[i]%2==0 && a[j]%2==0)
			{
				hoanvi(a[i],a[j]);
			}
		}
	}
}

void sapxeplegiam(int a[], float n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]<a[j] && a[i]%2!=0 && a[j]%2!=0)
			{
				hoanvi(a[i],a[j]);
			}
		}
	}
}


int main()
{
	int a[100];
	float n;
	cout<<"Nhap so phan tu mang = ";
	cin>>n;
	
	do{
        if(!cin || n<0 || n != (int)n)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"So nhap vao yeu cau la 1 so nguyen duong, vui long nhap lai: ";
            cin>>n;
        }
    }while(!cin || n<0 || n != (int)n);
    
	cout<<"\nNhap phan tu: "<<endl;
	nhap(a,n);
	cout<<"\nMang sau khi nhap:\n";
	xuat(a,n);
	
	cout<<"\n\nCac so chinh phuong la: ";
	chinhphuong(a,n);
	
	cout<<"\n\nCac phan tu chan trong mang tang dan la: \n";
	sapxepchantang(a,n);
	xuat(a,n);

	cout<<"\n\nCac phan tu le trong mang giam dan la: \n";
	sapxeplegiam(a,n);
	xuat(a,n);
	
	cout<<endl;
}
