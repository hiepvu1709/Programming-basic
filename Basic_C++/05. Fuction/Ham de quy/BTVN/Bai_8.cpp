#include<iostream>
#include<limits>
using namespace std;

bool sochan(int n);
bool sole(int n);
bool sochan(int n)
{
	if(n==0)
		return true;
	else
		return sole(n-1);
}
bool sole(int n)
{
	return !sochan(n);
}

void CT(int n)
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
	bool kq = sochan(n);s
	if(kq == true)
		cout<<n<<" la so chan"<<endl;
	else
		cout<<n<<" la so le"<<endl;
}
int main()
{
	int n;
	CT(n);
	return 0; 
}
