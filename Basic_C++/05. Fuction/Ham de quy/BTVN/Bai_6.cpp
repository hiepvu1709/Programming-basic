#include<iostream>
#include<limits>
using namespace std;

int Fibonacci(int n)
{
	int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	do{
		cin>>n;
		if(!n)
		{
			system("cls");
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"Khong hop le, moi nhap lai: ";
		}
	}while(!n);
	cout<<n<<" so Fibonacci dau tien la: ";
	for(int i=0 ; i<n ; i++)
	{
		cout<<Fibonacci(i)<<" ";
	}
}
