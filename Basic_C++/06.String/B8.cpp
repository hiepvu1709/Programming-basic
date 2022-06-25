#include<iostream>
using namespace std;
int funcA(int a);
int funcB();
void funcC();
double funcD(int a);

int main()
{
	int (*fcnPtr)(int a)= funcA;
	
//	int(*fcnPtrA)() = funcA;
//	fcnPtrA = funcB;
//	fcnPtrA = &funcB;
//	int(*fcnPtr1)() = funcA;
//	void(*fcnPtr2)() = funcA;
//	void(*fcnPtr3)() = funcC;
//	double(*fcnPtr4)(int) = funcD;
	return 0;
}
int funcA(int a)
{
	cout<<"abc";
	return a;
}
