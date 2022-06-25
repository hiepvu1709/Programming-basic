#include<iostream>
using namespace std;

void sole(int a);
void sochan(int a);
int main()
{
	char kt;
	int i;
	// vong lap duoi khac phuc tinh trang vua nhap so vua nhap chu, 
	do{
		cout<<"Nhap vao 1 so:('t' to exit) "; cin>>i;
		sole(i);
		do{
			cin>>kt;
			system("cls");
		}while(kt=='t');
	}while(i!=0);
	return 0;
}
	void sole(int a)
	{
		if(a%2!=0) cout<<"Do le so le\n";
		else sochan(a);  // nhin thi co ve la de quy nhung chua phai la de quy, boi vi chua co dieu klien dung 
	}
	void sochan(int a)
	{
		if(a%2==0) cout<<"Do la so chan\n";
		else sole(a);
	}
