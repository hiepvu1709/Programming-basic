#include<iostream>
using namespace std;

void outputDay(NGAY ngay)   // xuat ngay cua nhap
{
	cout<<"\n\t"<<(int)ngay.Day<<"-"<<(int)ngay.Month<<"-"<<(int)ngay.Year;
}

void findThu(NGAY a)		// tinh thu trong tuan cua 1 ngay bat ky trong nam
{
	// dung cong thuc Zeller
	a.Year -= (14 - a.Month) / 12;
	a.Month += 12 * ((14 - a.Month) / 12) - 2;
	
	int dayofweek = (a.Day + a.Year + a.Year / 4 - a.Year / 100 + a.Year / 400 + (31 * a.Month) / 12 ) % 7;
	
	if(!dayofweek)
		cout<<"\n\tChu nhat\n";
	else
		cout<<"\n\tThu "<<dayofweek + 1;
}
