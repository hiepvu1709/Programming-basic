#include<iostream>
using namespace std;

int main()
{
	int a = 2;
	int *p1;
	int **p2;
	int ***p3;
	p1 = &a;
	p2 = &p1;
	p3 = &p2;
	cout<<"\nGia tri cua bien a: "<<a<<endl;
	cout<<"\nGia tri cua bien a tai con tro p1: "<<*p1<<endl;
	cout<<"\nGia tri cua bien a tai con tro p2: "<<**p2<<endl;
	cout<<"\nGIa tri cua bien a tai con tro p3: "<<***p3<<endl;
}
