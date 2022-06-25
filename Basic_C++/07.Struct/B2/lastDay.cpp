#include<iostream>
using namespace std;

// tim ngay hom truoc
NGAY findLastDay(NGAY a)
{
	int day = findDay(a);
	if(a.Day == 1)			// neu ngay nhap vao la 1
	{
		a.Day = day;		//ngay truoc do la so ngay trong thang truoc
		if(a.Month == 1)		// nau thang la 1
		{
			a.Month = 12;
			a.Year--;
		}else{					// thang khac 1
			a.Month--;
		}
	}else{						// ngay khac 1
		a.Day--;
	}
	return a;
}

// tim ngay truoc do k ngay
NGAY find_last_n_day(NGAY a, int k)
{
	while(k > 0)
	{
		a = findLastDay(a);
		k--;
	}
	return a;
}
