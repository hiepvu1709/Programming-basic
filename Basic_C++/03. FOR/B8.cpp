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
	char a[100],b[100];
	cout<<"Moi nhap chieu dai hinh chu nhat: "; cin>>a;
	do{
		if(!check(a))
		{
			cout<<"Khong hop le, moi nhap lai chieu dai: "; cin>>a;
		}
	}while(!check(a));
	cout<<"Moi nhap chieu rong hinh chu nhat: "; cin>>b;
	do{
		if(!check(b))
		{
			cout<<"Khong hop le, moi nhap lai chieu dai: "; cin>>b;
		}
	}while(!check(b));
	int x = atoi(a);
	int y = atoi(b);
	cout<<"Hinh chu nhat theo so do ban yeu cau la:\n";
	for(int i=1 ; i<=x ; i++)
	{
		for(int j=1 ; j<=y ; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
