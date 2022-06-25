#include<iostream>
#include<cstdlib>  // for srand()
#include<ctime>   // for time()
using namespace std;

#define MAX 5  // dinh nghai so phan tu mang
int main()
{
	int a[MAX];
	// khoi tao so ngau nhien
	srand(time(NULL));
	// nhap mang
	for(int i=0 ; i<MAX ; i++)
	{
		a[i]=rand();
	}
	// xuat mang
	for(int i=0 ; i<MAX ; i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
	return 0;
}
