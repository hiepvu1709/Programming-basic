#include<iostream>
using namespace std;

int main()
{
	int n, q = 0;
	cout<<"\nNhap chieu cao: ";
	cin>>n;
	while(n>0)
	{
		for(int i=1 ; i<n ; i++)
			cout<<" ";
		for(int k=0 ; k<=q ; k++)
			cout<<"*";
		n--;
		q+=2;
		cout<<"\n";
	}
}
