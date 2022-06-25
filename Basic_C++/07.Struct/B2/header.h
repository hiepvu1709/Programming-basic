// file header.h giong nhu mot cai tieu de , dung de luu tru cac ham khoi tao nguyen mau, struct, dinh nghia struct va hang so.

#include<iostream>
using namespace std;

struct Ngay
{
       int Day, Month, Year;
};
typedef struct Ngay NGAY;

const int minYear = 1900, maxYear = 10000;

void inputDay(NGAY &);
void outputDay(NGAY);
void findThu(NGAY);		// tinh thu trong tuan cua 1 ngay bat ky trong nam
void PR(NGAY);
bool check_year(NGAY);		// kiem tra nam nhuan

int findThu1(NGAY);  // tim so thu tu ngay trong nam
int findThu2(NGAY);  // tim so thu tu ngay cho truoc 
int findDay1(int , int );   // tim ngay khi biet nam va so thu tu ngay trong nam
int findDay2(int); 			 // tim ngay khi biet so thu tu nagy cho truoc
int Distance_2day(NGAY); 	// khoang cach hai ngay
int cmp_2day(NGAY);			// so sanh hai ngay

NGAY findNextDay(NGAY);		// tim ngay ke tiep
NGAY findLastDay(NGAY);		// tim ngay hom qua
NGAY find_next_n_day(NGAY);		// tim ngay ke ngay do n ngay
NGAY find_last_n_day(NGAY);		// tim ngay truoc ngay do n ngay

