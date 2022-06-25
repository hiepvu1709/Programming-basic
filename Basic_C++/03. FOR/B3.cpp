#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nMoi nhap chieu cao: ";
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<i ; j++)
			cout<<" ";
		for(int j=i ; j<n ; j++)
			cout<<"*";  // them dau cach vao truoc hoac sau * thi se thanh tam giac can nguoc
						// con de nguyen nhu tren thi la tam giac vuong can nguoc o ben phai
		cout<<endl;
	}
	return 0;
}
