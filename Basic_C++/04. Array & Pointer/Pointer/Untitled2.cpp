#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int *p1;
	int *p2;
	p1 = &a;
	p2 = &b;
	cout<<"\nDia chi cua bien a: "<<&a;
	cout<<"\nDia chi cua bien b: "<<&b<<endl;
	cout<<"Is p1 < p2?"<<(p1<p2)<<endl;
	cout<<"Is p1 > p2?"<<(p1>p2)<<endl;
	cout<<"Is p1 <= p2?"<<(p1<=p2)<<endl;
	cout<<"Is p1 >= p2?"<<(p1>=p2)<<endl;
	cout<<"Is p1 = p2?"<<(p1==p2)<<endl;
	cout<<"Is p1 <> p2?"<<(p1!=p2)<<endl;
}
