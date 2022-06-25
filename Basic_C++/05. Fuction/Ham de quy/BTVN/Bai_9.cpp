#include<iostream>
#include<math.h>
#include<limits>
using namespace std;

long x(int n)
{
	if(n==0)
	return 1;
	
	long s=0;
	for(int i=1; i<=n; i++)
	{
		s=s+pow(i,2)*x(n-i);
	}
	return s;
}

int main()
{
	float n;
	float xn;
	cout<<"Nhap n: ";cin>>n;
	
	do{
        if(!n || n<1 || n != (int)n)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"So nhap vao yeu cau la 1 so nguyen duong, vui long nhap lai: ";
            cin>>n;
        }
    }while(!n || n<1 || n != (int)n);
	
	cout<<"x(n) = "<<x(n)<<endl;
}
