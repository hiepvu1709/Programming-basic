#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

double luythua(int x)
{
	if (x == 1)
		return 1; 
	else
		return (float)pow(x,x)* luythua(x-1);
}

int main()
{
	int n;
	cout<<"Nhap n = "; cin>>n;
	do{
			if(!n)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Khong hop le, moi nhap lai: ";
				cin>>n;
			}
	}while(!n);
	cout<<"Ket qua: "<<luythua(n)<<endl;
}
