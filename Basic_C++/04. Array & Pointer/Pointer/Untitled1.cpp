#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int *ptr1 = &a;
	cout<<"ptr1 hien tai: "<<ptr1<<endl;
	ptr1++;
	cout<<"ptr1 sau khi tang : "<<ptr1<<endl;
	cout<<"--------\n";
	ptr1--;
	cout<<"ptr1 sau khi tru: "<<ptr1<<endl;
	cout<<"----\n";
	cout<<"ptr1 hien thi: "<<ptr1<<"\n";
	ptr1 = ptr1 + 5;
	cout<<"ptr1 + 5 = "<<ptr1<<endl;
}
