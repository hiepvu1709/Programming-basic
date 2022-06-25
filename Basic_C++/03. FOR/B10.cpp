#include<iostream>
#include<stdlib.h>
using namespace std;
int check(char* a)
{
	int i=0;
	while(a[i]!=NULL)
	{
		if(a[i]<'0' || a[i] > '9')
		return 0;
		i++;
	}
	return 1;
}
int main()
{
	char a[100];
	cout<<"Nhap chieu cao: "; cin>>a;
	do{
		if(!check(a))
		{
			cout<<"Khong hop le, moi nhap so theo yeu cau: "; cin>>a;
		}
	}while(!check(a));
	int n = atoi(a);
	cout<<"Hinh tam hiac theo yeu cau:\n";
	for(int i=0; i<n; i++)
	{	
		for(int j=0; j<n; j++)
		{
			if(j==0||i==n-1||i==j)
			{
				cout<<"*";
			}
			else
				cout<<" ";	
		}
		cout<<endl;
	}
	return 0;
}
