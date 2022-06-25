#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int *pa, *pb;
	cout<<"\nTruoc khi hoan doi: *pa = "<<*pa<<" , *pb = "<<*pb<<endl;
	cout<<"\nTruoc khi hoan doi: a = "<<a<<" , b = "<<b<<endl;
	*pa = *pa + *pb;
	*pb = *pa - *pb;
	*pa = *pa - *pb;
	cout<<"\nSau khi hoan doi : *pa = "<<*pa<<" , *pb = "<<*pb<<endl;
	cout<<"\nSau khi hoan doi : a = "<<a<<" , b = "<<b<<endl;
	return 0;
}
