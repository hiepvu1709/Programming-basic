#include<iostream>
using namespace std;

void PR(NGAY a)
{
	cout<<"\n - CHUONG TRINH NHAP VAO NGAY THANG NAM IN RA CAC KET QUA TIM KIEM - \n\n";
	inputDay(a);
	outputDay(a);
	
	if(check_year(a))
	{
		cout<<"\n\tNam "<<a.Year<<" la nam nhuan!\n";
	}else{
		cout<<"\n\tNam "<<a.Year<<" la nam thuong!\n";
	}
	
	int STTngay = findThu1(a);
	cout<<"\n\tNgay thu "<<STTngay<<" trong nam!\n";
	
	int STT = findThu2(a);
	cout<<"\n\tNgay thu "<<STT<<" trong nam tu ngay 1/1/1\n";
	
	Ngay c = findNextDay(a);
	cout<<"\n\tNgay ke tiep la ngay : "<<c.Day<<"/"<<c.Month<<"/"<<c.Year<<"\n";
	
	Ngay d = findLastDay(a);
	cout<<"\n\tNgay hom qua la ngay : "<<d.Day<<"/"<<d.Month<<"/"<<d.Year<<"\n";
	
	cout<<"\n\tNgay ke tiep 5 ngay: ";
	outputDay(find_next_n_day(a,5));
	
	
	cout<<"\n\tNgay hom truoc 5 ngay: ";
	outputDay(find_last_n_day(a,5));
	
	findThu(a);
}
