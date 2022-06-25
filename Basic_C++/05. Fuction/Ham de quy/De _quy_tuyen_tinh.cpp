#include<iostream>
#include<limits>
using namespace std;

int factorial(int n)
{
	if(n==0)	return 1;
	return n*factorial(n-1);
}
int main()
{
	int n;
	cout<<"Nhap so can tinh : "; cin>>n;
	do{
			if(!n)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Khong hop le, moi nhap lai: ";
				cin>>n;
			}
	}while(!n);
	int kq = factorial(n);
	cout<<"Ket qua : "<<kq<<endl;
	return 0;
}
