#include<iostream>
#include<limits>
#include <cctype>
using namespace std;

long TongBinhPhuong(int x)
{
	if (x<=1)
		return 1;
	else
		return x*x + TongBinhPhuong(x-1);
}

int KTSN(float &n)
{
	do{
			if(!n || n != (int)n || n<1)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Khong hop le, moi nhap lai: ";
				cin>>n;
			}
	}while(!n || n != (int)n || n<1);
}

int main()
{
	float n;
	cout<<"\n\t-CHUONG TRINH TINH TONG S = 1 + 4 + 9 + … + n^2\n";
	char t = 'Y';
	while (toupper(t) == 'Y')
	{
		cout<<"\nMoi nhap gia tri n( SO NHAP VAO TOI DA 6 CHU SO ): "; cin>>n; KTSN(n);
		cout<<"Tong bang "<<TongBinhPhuong(n)<<endl;
		cout<< "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
	}
	return 0;
}
