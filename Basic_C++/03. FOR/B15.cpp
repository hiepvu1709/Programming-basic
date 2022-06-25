#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout<<"Moi ban nhap gia tri n: ";
	cin>>n;
	if(!cin || n<2)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Khong hop le, moi nhap lai n: ";
		cin>>n;
	}
	int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
    	if(n % i == 0)
		{
            count++;
        }
    }
    if(count == 0){
        cout << n << " la so nguyen to\n";
    }else{
        cout << n << " khong phai so nguyen to\n";
    }
    return 0;
}
