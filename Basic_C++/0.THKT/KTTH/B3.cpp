#include<iostream>
#include<limits>
#include<cctype>
using namespace std;

const int minYear = 1 , maxYear = 100000;

int KiemTraNamNhuan(int nam)
{
	return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

void TimSoNgayTrongThang(int thang, int nam)
{
	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout<<"\nCo 31 ngay";
			break;
		case 4: case 6: case 9 : case 11:
			cout<<"\nCO 30 ngay";
			break;
		case 2:
			int Check = KiemTraNamNhuan(nam);
			if(Check == 1)
			{
				cout<<"\nCo 29 ngay!";
			}else{
				cout<<"\nCo 28 ngay!";
			}
	}
}

int main()
{
	float t,n;
	char c = 'Y';
	while(toupper(c) == 'Y')
	{
		cout<<"\n\t- CHUONG TRINH NHAP VAO THANG NAM, KET QUA CHO BIET THANG DO BAO NHIEU NGAY -\n";
		cout<<"\nNhap thang: ";
		cin>>t;
		while(!t || t<1 || t>12 || t != (int)t)
		{
			if(!t)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"\nBan nhap sai dinh dang, moi nhap lai: ";
				cin>>t;
			}
			if(t<1 || t>12)
			{
				cout<<"\nThang nhap vao yeu cau lon hon 1 hoac nho hon 12, moi nhap lai: ";
				cin>>t;
			}
			if(t != (int)t)
			{
				cout<<"\nThang nhap vao yeu cau la mot so nguyen, moi nhap lai: ";
				cin>>t;
			}
		}
		cout<<"\nNhap nam: ";
		cin>>n;
		while(!n || n<1 || n>100000 || n != (int)n)
		{
			if(!n)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"\nBan nhap sai dinh dang, moi nhap lai: ";
				cin>>n;
			}
			if( n<1 || n>100000)
			{
				cout<<"\nNam nhap vao yeu cau lon hon 1 hoac nho hon 100000, moi nhap lai: ";
				cin>>n;
			}
			if(n != (int)n)
			{
				cout<<"\nNam nhap vao yeu cau la mot so nguyen, moi nhap lai: ";
				cin>>n;
			}
		}
		int thang = (int)t;
		int nam = (int)n;
		TimSoNgayTrongThang(thang,nam);
		cout<<"\nBan co muon thu lai khong? (Y/N) : ";
		cin>>c;
	}
	return 0;
}
