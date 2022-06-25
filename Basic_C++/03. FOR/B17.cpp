#include<iostream>
#include<stdlib.h>
using namespace std;
int check(char* a)
{
	int i=0;
	while(a[i] != NULL)
	{
		if(a[i] < '0' || a[i] > '9')
		return 0;
		i++;
	}
	return 1;
}
int main()
{
	cout<<"Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N\n";
	char a[5];
	int S=0,P=1;
	cout<<"Nhap n: ";  cin>>a;
	do{
		if(!check(a))
		{
			cout<<"Khong hop le, moi nhap lai: ";  cin>>a;
		}
	}while(!check(a));
	int n = atoi(a);
	for(int i=1 ; i<=n ; i++)
	{
		P*=i;
		S=S+P;
	}
	cout<<"Tong S = "<<S<<endl;
}
