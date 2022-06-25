#include<iostream>
#include<limits>
using namespace std;

void dayNhiPhan(int i,int n, int *X)
{// val la cac gia tri co the gan tron X
	for(int val = 0; val < 2 ; val++) // val co the nhan 2 gia tri  0 va 1
	{
		X[i] = val; 
		if(i==(n-1)) // neu i la ptu cuoi cung cua day
		{
			int j;
			for(j=0 ; j<n ; j++)
			{
				cout<<X[j];
			}
				cout<<endl;
		}else
			{
				dayNhiPhan(i+1,n,X);
			}
	}
}
int main()
{
	int n;
	cout<<"Nhap n: ";  cin>>n;
	do{
			if(!n)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Khong hop le, moi nhap lai: ";
				cin>>n;
			}
		}while(!n);
	int X[n];
	cout<<"Day nhi phan co do dai "<<n<<" la: ";
	dayNhiPhan(0,n,X);
}
