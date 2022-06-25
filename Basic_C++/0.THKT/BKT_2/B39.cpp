#include<iostream>
using namespace std;

char check(char chuoi[], char n)
{
	int dem=0;
	for(int i=0; i<strlen(chuoi); i++)
	{
		if(chuoi[i]==n)
		{
			dem=i;
		}
	}
	if(dem!=0)
	{
		cout<<"\nPhan tu ban tim ton tai trong chuoi\n";
	}
	if(dem==0)
	{
		cout<<"\nPhan tu ban tim khong ton tai trong chuoi\n";
	}
}


int main()
{
	char chuoi[100], n;
	cout<<"Nhap chuoi: ";
	gets(chuoi);
	
	cout<<"Nhap vao ky tu can tim: ";
	cin>>n;
	check(chuoi,n);
}
