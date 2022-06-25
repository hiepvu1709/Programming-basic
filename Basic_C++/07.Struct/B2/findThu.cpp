#include<iostream>
using namespace std;

// tinh so thu tu ngay trong nam
/*
	 vi du: nhap ngay thang nam nhu sau: 30-4-2022
	 
	 thi ket qua tra ve cua ham tren do la ngay 30-04-2022 do la ngay thu 120 trong nam!

*/
int findThu1(NGAY a)
{
	int S = a.Day;
	for(int i=1 ; i< a.Month ; i++)
	{
		switch(i)
		{
			case 4: case 6: case 11: S += 30; break;
			case 2: S += (a.Year % 4 == 0 && a.Year % 100 != 0 || a.Year == 0) ? 29 : 28; break;
			default: S += 31;
		}
	}
	return S;
}

// tinh so thu tu ngay cho truoc
/*
	vi du nhap ngay thang nam la 30--4-2022
	thi ket qua tra ve se la ngay thu 738275 trong nam tu ngay 1/1/1 
*/
int findThu2(NGAY a)
{
	int stt = 0;
	for(int i = 1 ; i<a.Year ; i++)
	{
		if(check_year(i))
		{
			stt += 366;
		}else{
			stt += 365;
		}
	}
	return stt + findThu1(a);
}
