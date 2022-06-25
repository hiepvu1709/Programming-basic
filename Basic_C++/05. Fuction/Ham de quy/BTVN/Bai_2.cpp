#include<iostream>
#include<limits>
using namespace std;

int ChuSoDauTien(int n)
{
	if(n/10 == 0)
		{
			return n;
		}
	return ChuSoDauTien(n/10);
}
int check(float &n)
{
	do{
		if(!n || n<0 || n != (int)n)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo dia nhap vao yeu cau la mot so nguyen duong lon hon 0";
			cin>>n;
		}
	}while(!n || n<0 || n != (int)n);
}
int main()
{
	float n;
	cout<<"\nMoi nhap so nguyen duong n: ";	cin>>n; check(n);
	cout<<"\nChu so dau tien cua "<<n<<" la: "<<ChuSoDauTien(n)<<endl;
	return 0;
}