#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int *p;
	p = &a;
	cout<<"\nDia chi cua bien a la: "<<&a<<endl;
	cout<<"\nGia tri cua con tro la: "<<p<<endl;
	cout<<"\nDia chi cua con tro p la: "<<&p<<endl;
	cout<<"\nGia tri cua bien a: "<<a<<endl;
	cout<<"\nGia tri cua bien a(*p): "<<*p<<endl;
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
