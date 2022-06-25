#include<iostream>
using namespace std;

int main()
{
	int n;
	int *a;
	cout<<"Moi nhap so phan tu cua mang: ";
	cin>>n;
	
	// thuc hien cap phat bo nho dong cho mang
	
	a = new int[n];
	
	// nhap du lieu cho mang
	for(int i=0 ; i<n ; i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	
	// tinh tong cac phan tu trong mang va luu vao bien sum
	int sum = 0;
	for(int i=0 ; i<n ; i++)
	{
		sum += a[i];
	}
	cout<<"Tong cac phan tu trong mang bang : "<<sum<<endl;
	delete[]a; // toan tu delete k thuc su xoa bat cu dieu gi. No chi don gian la trao lai quyen su dung vung nho duoc cap phat cho he dieu hanh
	return 0;  // bien con tro van co the su dung nhu truoc va co the duoc gan mot gia tri moi giong nhu bat ky bien nao khac
}
