#include<iostream>
#include<limits>
using namespace std;

int fib(int n)
{
	if(n<=2) return 1;
		return fib(n-1) + fib(n-2);
}

int main()
{
	int kq,n;
	cout<<"Nhap vi tri n muon tim trong day fibonacci: ";
	cin>>n;
	do{
			if(!n )
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Khong hop le, moi nhap lai: ";
				cin>>n;
			}
		}while(!n);
	kq = fib(n);
	cout<<"\n So fibonacci o vi tri "<<n<<" la : "<<kq<<endl;
	return 0;
}
