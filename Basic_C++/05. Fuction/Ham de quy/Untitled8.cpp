#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

float luythua(float x, float y)
{ 
		if(y==0)
		{
			return 1;
		}else if(y>0)
		{
			float a = x;
			for(int i=0 ; i<=y ; i++)
			{
				x*=a;
			}
			return x;
		}else{
			float b = 1.0/x;
			x = 1.0/x;
			for(int i = -1 ; i>= y  ; i++)
			{
				x*=b;
			}
			return x;
		}
	}
int KTSN(float &x)
{
	do{
		if(!x || x!=(int)x )
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la so nguyen duong , moi nhap lai: ";
			cin>>x;
		}
	}while(!x || x!=(int)x );
}
int main()
{
	float a, n;
	cout << "Nhap co so a: "; cin >> a;  KTSN(a);
	cout << "Nhap so mu n: "; cin >> n;  KTSN(n);
	cout<<"("<<a<<")^"<<n<<"= "<<luythua(a,n)<<endl;
	return 0;
}
