#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	int a[5] = {1,2,3,4,5};
	for(int i=0 ; i<5 ; i++)
	{
		ptr = &a[i];
		cout<<ptr<<endl;
	}
	
	int *p;
	int value = 5;
	p = &value;
	cout<<p<<endl;
	cout<<value<<endl;
	cout<<*(&value)<<endl;
	cout<<*p<<endl;
}
