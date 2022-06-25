#include<iostream>
using namespace std;

int findDay(NGAY a)  // tim so ngay trong thang
{
	int day;	// khoi tao bien day voi kieu du kieu int mang y nghia la ngay trong thang
	
	switch(a.Month)  // dung switch case de chon ra ngay phu hop khi nguoi dung nhap thang vao
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			day = 31;
			break;
		case 4:case 6: case 9: case 11:
			day = 30;
			break;
		case 2:
			int check = check_year(a);  // khoi tao 1 bien check kieu du lieu int duoc gan vao voi ket qua cua ham check_year(a)
											// tuc la kiem tra xem nam do co phai nhuan hay khong
			if(check == 1)		
			{
				day = 29;			// neu la nam nhuan thi 29 ngay
			}else{
				day = 28;			// khong phai nam nhuan thi 28 ngay
			}
	}
	return day;		// tra ve gia tri ngay sau khi kiem tra het cac khoi lenh ben tren
}
