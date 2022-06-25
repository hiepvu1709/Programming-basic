#include<iostream>
using namespace std;

// su dung nap chong ham
bool check_year(NGAY a)			// kiem tra nam nhuan cho mot struct
{
	return ((a.Year % 4 == 0 && a.Year % 100 != 0) || (a.Year % 400 == 0));
}

bool check_year(int i)   //kiem tra nam nhuan cho mot bien bat ky
{
	if(i % 4 == 0 && i % 100 != 0)
		return true;
	if(i % 400 == 0)
		return true;
	return false;
}
