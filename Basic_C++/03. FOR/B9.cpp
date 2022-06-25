#include<iostream>
#include<stdlib.h>
#include<cmath>
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
	cout<<"\t1. Tinh tong S = 1 + 4 + 9 + ... + n^2.\n";
	cout<<"\t2. Tinh tong S = 1 - 4 + 9 - 16 + ... + ((-1)^(n-1))*n^2.\n";
	char a[100];
	cout<<"Nhap n: ";	cin>>a;
	do{
		if(!check(a))
		{
			cout<<"Khong hop le, moi nhap so theo yeu cau: "; cin>>a;
		}
	}while(!check(a));
	int n = atoi(a);
	long int S1=0,S2=0;
    cout<<"\nKet qua:\n";
    for(int i=1 ; i<=n ; i++)
    {
    	S1 += pow(i,2);
		S2 += pow(-1,i-1)* pow(i,2);
	}
	cout <<"1. Tong bang: "<<S1<<endl;
	cout<<"2. Tong bang "<<S2<<endl;
	return 0;
}
