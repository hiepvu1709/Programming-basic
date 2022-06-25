// Vu Xuan Hiep - DHTI15A2ND

#include<iostream>
#include<conio.h>
#include<cctype>
#include "inputDay.cpp"
#include "findThu.cpp"
#include "nextDay.cpp"
#include "lastDay.cpp"
#include "outputDay.cpp"
#include "blockInMain.cpp"

using namespace std;

int main()
{
	NGAY a;
	char t = 'Y';
	while(toupper(t) == 'Y')
	{
		PR(a);
		cout<<"\n\n\tBan co muon thu lai khong a ?(Y/N): ";
		cin>>t;
	}
	return 0;
}
	
/* tim ngay khi biet nam va so thu tu cua ngay trong nam
int findDay1(int Year, int STT)
{
	int n[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(check_year(Year))
		n[1] = 29;
	for(int i = 0;  i<12 ; i++)
	{
		if(n[i] < STT)
			STT -= n[i];
		else
			break;
	}
	return STT;
}

// tim ngay khi biet so thu tu ngay cho truoc
int findDay2(int STT)
{
	int Year = 1;
	while(1)
	{
		if(check_year(Year))
		{
			if(STT > 366)
			{
				STT -= 366;
			}else{
				return findDay1(Year,STT);
			}
		}else{
			if(STT > 365)
			{
				STT -= 365;
			}else{
				return findDay1(Year,STT);
			}
		}
		Year++;
	}
	return -1;
}
*/

/*tim khoang cach giua hai ngay
int Distance_2day(NGAY a, NGAY b)
{
	int STTa = findThu1(a);
	int STTb = findThu1(b);
	
	if(STTa > STTb)
	{
		return STTa - STTb;
	}
	return STTb - STTa;
}

// so sanh 2 ngay
int cmp_2day(NGAY a, NGAY b)
{
	int STTa = findThu1(a);
	int STTb = findThu1(b);
	
	if(STTa > STTb)
	{
		return 1;
	}
	if(STTb > STTa)
	{
		return 0;
	}
	return -1;
}
*/
