//      	VU XUAN HIEP 		DHTI15A2ND
#include<iostream>
#include<iomanip>
#include<string.h>
#include<fstream>
#include<limits>
#include<algorithm>			
using namespace std;

//		========== KHAI BAO STRUCT THONG TIN HO DAN   ==========
struct Households
{
	string id;
	string name;
	int member;
	long comein;
	long subsidize;
};


struct List
{
	Households *arr;
	int n;
};

void input_1_hd(Households &hd)
{
		cin.ignore();
		do{
			cout<<"\n\tMa ho dan (gioi han 12 ky tu): ";
			getline(cin,hd.id);
			if(hd.id.length() > 11 )
			{
				cout<<"\n\tDu lieu vua nhap qua gioi han, vui long kiem tra lai!\n";
			}
		}while(hd.id.length() > 11);
		
		do{
			cout<<"\n\tHo va ten (gioi han 25 ky tu): ";
			getline(cin,hd.name);
			if(hd.name.length() > 25)
			{
				cout<<"\n\tDu lieu vua nhap qua gioi han, vui long kiem tra lai!\n";
			}
		}while(hd.name.length() > 25);
		
		float number;;				
		do{
			cout<<"\n\tSo thanh vien: ";
			cin>>number;
			if(cin.fail() || number != (int)number || number < 1)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout<<"\n\tDu lieu vua nhap khong hop le, moi nhap lai!\n";
			}
		}while(cin.fail() || number != (int)number || number < 1);
		hd.member = (int)number;
		
		float tn;
		do{
			cout<<"\n\tMuc thu nhap: ";
			cin>>tn;
			if(cin.fail() || tn != (int)tn || tn < 1)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout<<"\n\tDu lieu vua nhap khong hop le, moi nhap lai!\n";
			}
		}while(cin.fail() || tn != (int)tn || tn < 1);
		hd.comein = (int)tn;
}

void Subsidize(List &hd)
{
	for(int i=0 ; i<hd.n ; i++)
	{
		if(hd.arr[i].comein > 5000000)
		{
			hd.arr[i].subsidize = 0;
		}
		else if(hd.arr[i].comein > 3000000)
		{
			hd.arr[i].subsidize = 50000;
		}
		else if(hd.arr[i].comein > 2000000)
		{
			hd.arr[i].subsidize = 100000;
		}
		else
		{
			hd.arr[i].subsidize = 2000000;
		}
	}
}

void output_1_hd(Households &p)
{
	cout<<"|"<<setw(11)<<p.id
		<<"|"<<setw(25)<<p.name
		<<"|"<<setw(15)<<p.member
		<<"|"<<setw(12)<<p.comein
		<<"|"<<setw(11)<<p.subsidize*p.member<<"|"
		<<"\n+-----+-----------+-------------------------+---------------+------------+-----------+\n";
}

// ham tieu de cho bang khi xuat ra man hinh
void heading()
{
	cout<<"\n+-----+-----------+-------------------------+---------------+------------+-----------+"
		<<"\n| STT | MA HO DAN |        HO VA TEN        | SO THANH VIEN |  THU NHAP  |  TRO CAP  |"
		<<"\n+-----+-----------+-------------------------+---------------+------------+-----------+\n";
}

// ham nhap danh sach cau thu
void input_list(List &ds)
{
	cout<<"\n\t\tNHAP DANH SACH "<<ds.n<<" HO DAN";
	for(int i=0 ; i<ds.n ; i++)
	{
		cout<<"\n\n\n\tThong tin ho dan so "<<i+1<<" :\n";
		input_1_hd(ds.arr[i]);			// goi lai ham nhap 1 cau thu de nhap gia tri
	}
}

// ham xuat danh sach cau thu
void output_list(List &ds)
{
	Subsidize(ds);
	heading();
	for(int i=0 ; i<ds.n ; i++)
	{
		cout<<"|"<<setw(5)<<i+1;
		output_1_hd(ds.arr[i]);		// goi lai ham xuat 1 cau thu de xuat gia tri
	}
}

// ham sap xep danh dach cau thu theo thu tu giam dan cua tuoi
void Swap(List &ds)
{
	for(int i = 0 ; i<ds.n - 1 ; i++)
	{
		for(int j = i ; j<ds.n ; j++)
		{
			if(ds.arr[i].member > ds.arr[j].member)
				swap(ds.arr[i],ds.arr[j]);
		}
	}
	cout<<"\n\t\tDANH SACH "<<ds.n<<" DUOC SAP XEP THEO THU TU TANG DAN CUA SO THANH VIEN\n";
	output_list(ds);
}
int main()
{
	List ds;			// khai bao struct danh sach cac ho dan
	cout<<"\n\tNhap so luong ho dan: ";
	cin>>ds.n;
	
	// cap phat mang dong
	ds.arr = new Households[ds.n];
	input_list(ds);
	cout<<"\n\t\tDANH SACH "<<ds.n<<" HO DAN VUA NHAP\n\n";
	output_list(ds);
	Swap(ds);
	return 0;
}                