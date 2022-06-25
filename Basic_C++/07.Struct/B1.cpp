// Vu Xuan Hiep - DHTI15A2ND

#include<iostream>
#include<limits>
#include<iomanip>
#include<conio.h>
using namespace std;

const int minYear = 1900, maxYear = 10000;

struct Ngay
{
	int Day,Month,Year;
};
typedef Ngay NGAY;

struct Daily
{
	char id[10];		// ma dai ly
	char name[50];	// ten dai ly
	int sdt;		// do dien tu
	NGAY NgayTiepNhan;
	char address[100];	// dia chi
	char email[50];		// thu dien tu
};
typedef struct Daily DAILY;

bool check_year(NGAY a) // kiem tra nam nhuan
{
	return ((a.Year % 4 == 0 && a.Year % 100 != 0) || (a.Year % 400 == 0));
}

bool check_year(int i)
{
	if(i % 4 == 0 && i % 100 != 0)
		return true;
	if(i % 400 == 0)
		return true;
	return false;
}

int findDay(NGAY a)  // tim so ngay trong thang
{
	int day;	// ngay trong thang
	switch(a.Month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			day = 31;
			break;
		case 4:case 6: case 9: case 11:
			day = 30;
			break;
		case 2:
			int check = check_year(a);
			if(check == 1)
			{
				day = 29;
			}else{
				day = 28;
			}
	}
	return day;
}

void inputDay(NGAY &a)
{
	do{
		cout<<"\n\tMoi nhap vao nam: ";
		cin>>a.Year;
		if(a.Year < minYear || a.Year > maxYear || cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nDu lieu nam khong hop le, vui long kiem tra lai!\n";
		}
	}while(a.Year < minYear || a.Year > maxYear || cin.fail());
	
	do{
		cout<<"\n\tMoi nhap vao thang: ";
		cin>>a.Month;
		if(a.Month < 1 || a.Month > 12 || cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nDu lieu thang nhap vao khong hop le, vui long kiem tra lai!\n";
		}
	}while(a.Month < 1 || a.Month > 12 || cin.fail());
	
	int day = findDay(a);
	do{
		cout<<"\n\tMoi nhap vao ngay: ";
		cin>>a.Day;
		if(a.Day < 1 || a.Day > day || cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nDu lieu ngay nhap vao khong hop le, vui long kiem tra lai!\n";
		}
	}while(a.Day < 1 || a.Day > day || cin.fail());
}

void outputDay(NGAY ngay)
{
	cout<<(int)ngay.Day<<"-"<<(int)ngay.Month<<"-"<<(int)ngay.Year;
}

void inputDaiLy(DAILY &a)    // dau bai yeu cau nhap 1 dai ly 
{
	fflush(stdin);
	cout<<"\nNhap ma dai ly: ";
	gets(a.id);
	cout<<"\nNhap ten dai ly: ";
	gets(a.name);
	cout<<"\nNhap so dien thoai: ";
	cin>>a.sdt;
	cout<<"\nNgay tiep nhan:\n";
	inputDay(a.NgayTiepNhan);
	cin.ignore();
	cout<<"\nNhap dia chi: ";
	gets(a.address);
	cout<<"\nNhap email: ";
	gets(a.email);
}

void outputDaiLy(DAILY a)
{
	cout<<"\n\t- THONG TIN DAI LY VUA NHAP -\n";
	cout<<"\nMa dai ly: "<<a.id;
	cout<<"\nTen dai ly: "<<a.name;
	cout<<"\nSo dien thoai: "<<a.sdt;
	cout<<"\nNgay tiep nhan: ";
	outputDay(a.NgayTiepNhan);
	cout<<"\nDai chi: "<<a.address;
	cout<<"\nEmail: "<<a.email;
}

int main()
{
	DAILY a;
	inputDaiLy(a);
	outputDaiLy(a);
	return 0;
}
