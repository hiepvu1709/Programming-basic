#include <iostream>
#include<limits>
#include<cmath>
#include<iomanip>
using namespace std;
#define MAX 100

int check(float &n)
{
	do{
		if(!n || n !=(int)n || n < 0 || n>100)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
			cin>>n;
		}
	}while(!n || n!=(int)n || n < 0 || n>100);
}
void enterAnInteger(int &n)   // bat loi so thuc khi nhap gia tri trong mang 2 chieu
{
	float a;
	cin>>a;	
	while(cin.fail() || pow(a,2) != pow(a,2))
	{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
			cin>>a;
	}
	n=a;
}
void input(int b[],int &m)
{
	for(int i=0 ; i<m ; i++)
	{
		cout<<setw(5)<<"b["<<i+1<<"]="; 
		enterAnInteger(b[i]);
	}
}
void output(int b[], int &m)
{
	cout<<"\nCac phan tu duoc in theo thu tu nguoc lai nhu sau:\n";
	for(int i=m -1; i>=0 ; i--)
	{
		cout<<setw(5)<<b[i]<<" ; ";
	}
	cout<<endl;
}
int main()
{
	cout<<"\n CHUONG TRINH NHAP VAO n PHAN TU CUA MANG 1 CHIEU VA IN RA CAC PHAN TU CUA MANG THEO CHIEU NGUOC LAI\n";
	int a[MAX],n;
	float b;
	cout<<"\n\tNhap so phan tu cua mang: "; cin>>b; check(b);
	n = (int)b;
	input(a,n);
	output(a,n);
	delete a;
	return 0;
}
