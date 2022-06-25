#include<iostream>
using namespace std;

int main()
{
	int value1 = 1;
	int value2 = 2;
	int *ptr = &value1;
	cout<<*ptr<<endl;
	ptr = &value2;
	cout<<*ptr<<endl;
	cout<<"---------------\n";
	int value = 5;
	int *ptr1 = &value;
	*ptr1 = 10;
	cout<<*ptr1<<endl;
	return 0;
}
