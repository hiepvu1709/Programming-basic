#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int check(char* a)
{
	int i=0;
	while(a[i] != NULL)
	{
		if(a[i] < '1' || a[i] > '9')
		return 0;
		i++;
	}
	return 1;
}
int main()
{
	char a[5];
	cout<<"Nhap n: ";  cin>>a;
	do{
		if(!check(a))
		{
			cout<<"Khong hop le, moi nhap lai: ";  cin>>a;
		}
	}while(!check(a));
	long int n = atoi(a);
	long tmp;
	int P=1;
	tmp=n;
	while(tmp!=0)
	{
		P=P*(tmp%10);
		tmp=tmp/10;
	}
	cout<<"Tich cac chu so cua "<<n<<" bang "<<P<<endl;
}
