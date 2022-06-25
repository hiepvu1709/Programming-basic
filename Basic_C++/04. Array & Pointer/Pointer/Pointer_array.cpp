#include<iostream>
using namespace std;

int main()
{
	int array[4] = {4,5,10,1};
	
	// toan tu tro (*) ta ve gia tri phan tu dau tien: array[0]
	cout<<*array<<endl;
	
	// khai con tro ptr tro vao mang aray
	int *ptr = array;
	cout<<*(ptr)<<endl; // 4 boi vi khi gan con tro voi mang thi khi xuat gia tri cua con tro no se xuat ra gia tri dau tien cua mang
	
	char name[] = "XuanHiep";
	cout<<*name<<endl;  // xuat ra phan tu dau tien cua mang la X
	
	system("pause");
}
