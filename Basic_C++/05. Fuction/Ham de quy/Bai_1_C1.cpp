#include<iostream>
#include<limits>
using namespace std;

int Giaithua1(int); // mau ham thu nhat
int Giaithua2(int); // mau ham thu hai

int main()
{
	int n;
	while(true)
	{
		cout<<"Nhap n: ";  cin>>n;
		do{
			if(!n)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Khong hop le, moi nhap lai: ";
				cin>>n;
			}
		}while(!n);
		if(n<0)
		{
			cout<<"\nSo am khong co gia tri."<<endl;
			break;
		}
		cout<<"Giai thua cua "<<n<<" la "<<Giaithua1(n)<<endl;
	}
	return 0;
}
int Giaithua1(int n)
{
	if(n==0) return 1;
	else 
		return n*Giaithua2(n-1); // goi lai ham 2(Giaithua2)
}
int Giaithua2(int n)
{
	if(n==0) return 1;
	else 
		return n*Giaithua1(n-1); // goi lai ham 1(Giaithua1)
}
