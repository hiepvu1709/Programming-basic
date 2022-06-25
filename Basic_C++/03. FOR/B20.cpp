#include<iostream>
#include<limits>
using namespace std;
int banbe(long, long);
int banbe(double a, double b)
{
	long tong_a=0;
	cout<<"\nUoc cua "<<a<< " la: ";
	for(int i=1; i<=a; i++)
	{
		if(a%i==0)
		{
			cout<<i<<" ";
			tong_a=tong_a+i;
		}
	}
	cout<<"\nTong cac uoc cua "<<a<<" la: "<<tong_a<<endl;
	
	
		long tong_b=0;
	cout<<"\nUoc cua "<<b<< " la: ";
	for(int i=1; i<=b; i++)
	{
		if(b%i==0)
		{
			cout<<i<<" ";
			tong_b=tong_b+i;
		}
	}
	cout<<"\nTong cac uoc cua "<<b<<" la: "<<tong_b<<endl;
	
	if(tong_a==tong_b)
	{
		cout<<"\nHai so: "<<a<<" va "<<b<<" la ban be"<<endl;
	}
	else
	{
		cout<<"\nHai so: "<<a<<" va "<<b<<" khong la ban be"<<endl;
	}
}

int check(char* a)
{
	int i=0;
	while(a[i]!=NULL)
	{
		if(a[i]<'0' || a[i]>'9')
		return 0;
		i++;
	}
	return 1;
}

int main()
{
	unsigned long a,b;
	cout<<"Nhap a: ";cin>>a;
	while(!a || a != (int)a)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"Nhap lai: ";
		cin>>a;
	}
	cout<<"Nhap b: ";cin>>b;
	
	char s[100];
	cout<<"nhap vao 1 so nguyen: ";
	cin>>s;
	do
	{
		if(!check(s))
	    {
  	  	    cout<<"Khong hop le, Yeu cau nhap vao so nguyen: ";
		    cin>>s;
    	}
	}while(!check(s));

	while(a<=0)
    {
    	cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"nhap lai a:";
        cin>>a;
    }

    while(b<=0)
    {
    	cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"nhap lai b:";
        cin>>b;
    }
    
    banbe(a,b);
}
