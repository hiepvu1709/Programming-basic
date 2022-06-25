#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

int TongChuSo(int n)
{
	n = abs(n);
	if(n == 0)
		{
			return 0;
		}
	return TongChuSo(n/10) + n % 10;
}
int check(float &n)
{
	do{
		if(!n || n != (int)n)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen: ";
			cin>>n;
		}
	}while(!n || n != (int)n);
}
int main()
{
	float n;
	cout<<"\nMoi nhap gia tri n: ";
	cin>>n; check(n);
	cout<<"\nTong cac chu so dau tien cua "<<n<<" la: "<<TongChuSo(n)<<endl;
	return 0;
}