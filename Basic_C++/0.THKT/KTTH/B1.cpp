#include<iostream>
#include<limits>
#include<cctype>
using namespace std;

int main()
{
	int i = 1,max = 1;
	float a;
	char t = 'Y';
	while(toupper(t) == 'Y')
	{
		cout<<"\n\t- CHUONG TRINH TIM UOC SO LE LON NHAT CUA SO NGUYEN DUONG n -\n";
		cout<<"\Nhap gia tri n = ";
		cin>>a;
		do{
			if(cin.fail() || a < 1 || a != (int)a)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"\nSo nhap vao yeu cau la mot so nguyen duong, moi nhap lai: ";
				cin>>a;
			}
		}while(cin.fail() || a < 1 || a != (int)a);
		int n = (int)a;
		cout<<"\nCac uoc so le lon nhat cua "<<n<<" la: ";
		while(i<=n)
		{
			if((n % i == 0) && (i % 2 == 1))
			{
				if(i > max)
				{
					max = i;
				}
				cout<<i<<" ";
			}
			i++;
		}
		cout<<"\nUoc so le lon nhat la: "<<max<<endl;
		cout<<"\nBan co muon thu lai khong? (Y/N) : ";
		cin>>t;
	}
	return 0;
}
