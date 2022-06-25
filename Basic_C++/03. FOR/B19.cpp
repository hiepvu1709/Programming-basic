#include<iostream>
#include<stdlib.h>
using namespace std;

int check(char* a)
{
	int i=0 ;
	while(a[i] != NULL)
	{
		if(a[i] < '0' ||a[i] > '9')
		return 0;
		i++;
	}
	return 1;
}
int main()
{
	char a[5];
	cout<<"Nhap vào so nguyên duong n:"; cin>>a;
	do{
		if(!check(a))
		{
			cout<<"Khong hop le, moi nhap lai: ";  cin>>a;
		}
	}while(!check(a));
	bool CheckTangDan = true;
	int n = atoi(a);
	int tg = n;
	// lay ra chu so cuoi cua n
	int chuSoCuoi = tg %10; 
	tg/=10;
	while(tg != 0)
	{
		int chuSoKeCuoi = tg % 10;
		tg /= 10;
		// neu chu so cuoi ma be hon chu so ke cuoi thi return false r thoat khoi vong lap
		if(chuSoCuoi < chuSoKeCuoi)
		{
			CheckTangDan = false;
			break;
		}else{
			// ngc lai thi cap nhat lai chu so cho lan so sanh tiep theo
			chuSoCuoi = chuSoKeCuoi;
		}
	}
	if(CheckTangDan)
	{
		cout<<"Cac chu so cua so nguyen duong "<<n<<" tang dan tu trai qua phai!\n";
	}else{
		cout<<"Cac chu so cua so nguyen duong "<<n<<" khong tang dan tu trai qua phai!\n";
	}
	return 0;
}
