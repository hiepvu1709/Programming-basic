#include<iostream>
#include<cmath>
#include<limits>
using namespace std;

int main()
{
	float n;
	float s, k;
	cout<<"Nhap so bac: ";
	cin>>n;
	
	do{
        if(!n || n<0 || n != (int)n)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"So nhap vao yeu cau la 1 so nguyen, vui long nhap lai: ";
            cin>>n;
        }
    }while(!n || n<0 || n != (int)n);
	
	cout<<"\nNhap phan tu k: ";
	cin>>k;
	
	do{
        if(!cin || n<0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"So nhap vao yeu cau la 1 so nguyen, vui long nhap lai: ";
            cin>>k;
        }
    }while(!cin || n<0);
	
	
	s=sqrt((float)k);
	for(int i=2; i<=n; i++)
	{
		s=sqrt(k+s);
	}
	cout<<"\nTong = "<<s<<endl;
}
