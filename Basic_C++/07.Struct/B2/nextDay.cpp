#include<iostream>
using namespace std;

// tim ngay ke tiep
NGAY findNextDay(NGAY a)
{
	int day = findDay(a); 		// ngay trong thang
	if(a.Day < day)			// tang ngay len
	{
		a.Day++;
	}
	else if(a.Month < 12)		// ngay ke tiep la dau thang
	{
		a.Day = 1;
		a.Month++;
	}
	else{					// ngay ke la dau nam moi, tuc la hien tai dang la thang 12	
		a.Day = a.Month = 1;
		a.Year++;
	}
	return a;
}

// tim ngay ke do k ngay
NGAY find_next_n_day(NGAY a, int k)
{
	while(k > 0)
	{
		a = findNextDay(a);
		k--;
	}
	return a;
}
