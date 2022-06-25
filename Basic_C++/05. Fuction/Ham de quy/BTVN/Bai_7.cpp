#include <iostream>
#include<limits>
using namespace std;
int sum(int x)
{ if (x==1)
	 return 0;
		else
	return sum(x-1) + x;
}
int main(){
	 int n;
	cout<<"Nhap n: "; cin>>n;
	do{
			if(!n)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Khong hop le, moi nhap lai: ";
				cin>>n;
			}
		}while(!n);
	cout<<"Tong la S = "<<sum(n)<<endl;
	return 0;
}
