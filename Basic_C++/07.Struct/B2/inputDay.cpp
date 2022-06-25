#include<iostream>
#include<limits>
#include "header.h"
#include "findDay.cpp"
#include "checkYear.cpp"
using namespace std;

void inputDay(NGAY &a)
{
	float y;
	cout<<"\n\tMoi nhap nam: ";
	cin>>y;
	while(y < minYear || y > maxYear || cin.fail() || y != (int) y)
	{
		if(y < minYear || y > maxYear || y != (int) y)
		{
			cout<<"\n\tQuy uoc cua he thong, nam nho nhat la 1900 va nam lon nhat la 10000.\n"
				<<"\tNam ban nhap bao khong hop le , vui long nhap lai!\n"
				<<"\tMoi nhap nam: ";
			cin>>y;
		}
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\n\tBan nhap sai dinh dang, moi nhap lai!\n"
				<<"\n\tMoi nhap nam: ";
			cin>>y;
		}
	}
	a.Year = (int) y;
	float m;
	cout<<"\n\tMoi nhap thang: ";
	cin>>m;
	while(m < 1 || m > 12 || cin.fail() || m != (int) m)
	{
		if(m < 1 || m > 12 ||  m != (int) m)
		{
			cout<<"\n\tThang nhap vao chi tu thang 1 den thang 12, du lieu thang ban nhap khong hop le, moi nhap lai!\n"
				<<"\tMoi nhap thang: ";
			cin>>m;
		}
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\n\tBan nhap sai dinh dang, moi nhap lai!\n"
				<<"\n\tMoi nhap thang: ";
			cin>>m;
		}
	}
	a.Month = (int)m;
	int day = findDay(a);
	float d;
	cout<<"\n\tMoi nhap ngay: ";
	cin>>d;
	while(d < 1 || d > day || d !=(int)d || cin.fail())
	{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\n\tBan nhap sai dinh dang, vui long kiem tra lai!\n";
			cout<<"\n\tMoi nhap ngay: ";
			cin>>d;
		}
		if(d < 1 || d > day || d !=(int)d)
		{
			cout<<"\n\tDu lieu ngay nhap vao khong hop le, vui long kiem tra lai!\n";
			cout<<"\n\tMoi nhap ngay: ";
			cin>>d;
		}
	}
	a.Day = (int)d;
}
