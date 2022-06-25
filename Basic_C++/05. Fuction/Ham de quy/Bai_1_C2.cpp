#include<iostream>
using namespace std;

int Giaithua(int n)
{
	if(n==0) return 1;
	else return (n*Giaithua(n-1));
}
int main()
{
	int n;
	while(true)
	{
		cout<<"Nhap so n (nhap n<0 de thoat): ";
		cin>>n;
		if(n<0)
		{
			cout<<"\nSo am khong co gia tri.";
			break;
		}
		cout<<"Giai thua cua "<<n<<" la "<<Giaithua(n)<<endl;
	}
	return 0;
}
