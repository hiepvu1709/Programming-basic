#include<iostream>
#include<limits>
#include<cctype>
using namespace std;

int UCLN(int m, int n)
{
	if (m == n)
		return m;
	else
		if (m>n)
			return UCLN(m-n,n);
		else
			return UCLN(m,n-m);
}

int check(float &a)
{
	do{
		if(!a || a<0 || a != (int)a )
		{
			cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Khong hop le, moi nhap lai: ";
				cin>>a;
		}
	}while(!a || a<0 || a != (int)a );
}
int main()
{
	float a, b, c;
	cout<<"\n\t-CHUONG TRINH TIM UOC SO CHUNG LON NHAT CHO BA SO DUOC NHAP VAO TU BAN PHIM\n";
	char t = 'Y';
	while (toupper(t) == 'Y')
	{
		cout<<"\nNhap a( SO NHAP VAO TOI DA 6 CHU SO ): "; cin>>a; check(a);
		cout<<"\nNhap b( SO NHAP VAO TOI DA 6 CHU SO ): "; cin>>b; check(b);
		cout<<"\nNhap c( SO NHAP VAO TOI DA 6 CHU SO ): "; cin>>c; check(c);
		cout<<"\nUCLN ="<<UCLN(UCLN(a,b), c)<<endl;
		cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
	}
	return 0;
}
