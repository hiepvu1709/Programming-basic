//      	VU XUAN HIEP 		DHTI15A2ND
#include<iostream>
#include<iomanip>
#include<string.h>
#include<fstream>
#include<limits>
#include<algorithm>
using namespace std;

//		========= KHAI BAO STRUCT CAU THU ============    //
struct Player
{
	string id;			// ma cau thu
	string name;		// ten cau thu
	int age;			// tuoi
	int medal;			// so huy chuong
	long reward;		// thuong
};

//		=========== KHAI BAO STRUCT DANH DACH CAU THU ================//
struct List
{
	Player *arr;		// khai bao 1 mang dong chua cau thu
	int n;				// so luong cau thu
};

// ham nhap 1 cau thu
void input_1_player(Player &p)
{
		cin.ignore();
		do{
			cout<<"\n\tMa so (gioi han 12 ky tu): ";
			getline(cin,p.id);
			if(p.id.length() > 12 )
			{
				cout<<"\n\tDu lieu vua nhap qua gioi han, vui long kiem tra lai!\n";
			}
		}while(p.id.length() > 12);
		
		do{
			cout<<"\n\tHo va ten (gioi han 25 ky tu): ";
			getline(cin,p.name);
			if(p.name.length() > 25)
			{
				cout<<"\n\tDu lieu vua nhap qua gioi han, vui long kiem tra lai!\n";
			}
		}while(p.name.length() > 25);
		
		// bien Age goi la bien tam thoi cua bien thanh vien age trong struct, dung kieu du lieu cua bien tam thoi de kiem soat loi
		float Age;				
		do{
			cout<<"\n\tTuoi: ";
			cin>>Age;
			if(cin.fail() || Age != (int)Age || Age < 1)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout<<"\n\tDu lieu vua nhap khong hop le, moi nhap lai!\n";
			}
		}while(cin.fail() || Age != (int)Age || Age < 1);
		p.age = (int)Age;
		
		// bien hc co tac dung tuong tu nhu bien Age o tren
		float hc;
		do{
			cout<<"\n\tSo huy chuong: ";
			cin>>hc;
			if(cin.fail() || hc != (int)hc || hc < 1)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout<<"\n\tDu lieu vua nhap khong hop le, moi nhap lai!\n";
			}
		}while(cin.fail() || hc != (int)hc || hc < 1);
		p.medal = (int)hc;
}

// ham thuong 
void Reward(List &p)
{
	for(int i=0 ; i<p.n ; i++)
	{
		if(p.arr[i].medal > 5)
			p.arr[i].reward = 500000;
		else 
			if(p.arr[i].medal > 3 && p.arr[i].medal <= 5)
				p.arr[i].reward = 300000;
			else 
				if(p.arr[i].medal > 2 && p.arr[i].medal <= 3)
					p.arr[i].reward = 200000;
	}
}

// ham xuat 1 cau thu
void output_1_player(Player &p)
{
	cout<<"|"<<setw(12)<<p.id
		<<"|"<<setw(25)<<p.name
		<<"|"<<setw(6)<<p.age
		<<"|"<<setw(15)<<p.medal
		<<"|"<<setw(8)<<p.reward<<"|"
		<<"\n+-----+------------+-------------------------+------+---------------+--------+\n";
}

// ham tieu de cho bang khi xuat ra man hinh
void heading()
{
	cout<<"\n+-----+------------+-------------------------+------+---------------+--------+"
		<<"\n| STT | MA CAU THU |        HO VA TEN        | TUOI | SO HUY CHUONG | THUONG |"
		<<"\n+-----+------------+-------------------------+------+---------------+--------+\n";
}

// ham nhap danh sach cau thu
void input_list(List &ds)
{
	cout<<"\n\t\tNHAP DANH SACH "<<ds.n<<" CAU THU CUA DOI BONG";
	for(int i=0 ; i<ds.n ; i++)
	{
		cout<<"\n\n\n\tThong tin cau thu so "<<i+1<<" :\n";
		input_1_player(ds.arr[i]);			// goi lai ham nhap 1 cau thu de nhap gia tri
	}
}

// ham xuat danh sach cau thu
void output_list(List &ds)
{
	Reward(ds);
	heading();
	for(int i=0 ; i<ds.n ; i++)
	{
		cout<<"|"<<setw(5)<<i+1;
		output_1_player(ds.arr[i]);		// goi lai ham xuat 1 cau thu de xuat gia tri
	}
}

// ham sap xep danh dach cau thu theo thu tu giam dan cua tuoi
void Swap(List &ds)
{
	for(int i = 0 ; i<ds.n - 1 ; i++)
	{
		for(int j = i ; j<ds.n ; j++)
		{
			if(ds.arr[i].age < ds.arr[j].age)
				swap(ds.arr[i],ds.arr[j]);
		}
	}
	cout<<"\n\t\tDANH SACH "<<ds.n<<" DUOC SAP XEP THEO THU TU GIAM DAN CUA TUOI\n";
	output_list(ds);
}
int main()
{
	List ds;			// khai bao struct danh sach cac cau thu
	cout<<"\n\tNhap so luong cau thu: ";
	cin>>ds.n;
	
	// cap phat mang dong
	ds.arr = new Player[ds.n];
	input_list(ds);
	cout<<"\n\t\tDANH SACH "<<ds.n<<" CAU THU CUA DOI BONG VUA NHAP\n\n";
	output_list(ds);
	Swap(ds);
	return 0;
}                