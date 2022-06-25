#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int m,n;
	cout<<"\n Nhap dong: ";
	cin>>m;
	cout<<"\n Nhap cot: ";
	cin>>n;
	// khai bao so dong
	int **a = new int *[m];
	// khai bao so cot
	for(int i=0 ; i<m ; i++)
	{
		a[i] = new int[n];
	}
	for(int i=0 ; i<m ; i++){
		for(int j=0 ; j<n ; j++){
			cout<<setw(7)<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
	cout<<"Mang hai chieu vua nhap la: \n";
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
	for(int i=0 ; i<m ; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	return 0;
}
