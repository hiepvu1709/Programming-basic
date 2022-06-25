#include <iostream>
#include<cmath>
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
	cout << "Nhap so: "; cin>>a;
	do{
		if(!check(a))
		{
			cout<<"Khong hop le, nhap lai: "; cin>>a;
		}
	}while(!check(a));
	int so = atoi(a);
	cout << "So dao nguoc cua " << so << " la ";
	for (; so != 0; so = so / 10) {
	cout << so % 10;
	}
	return 0;
}
