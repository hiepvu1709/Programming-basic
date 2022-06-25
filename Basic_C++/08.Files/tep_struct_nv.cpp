#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
struct nhanvien {
	char manhanvien[30];
	char hoten[30];
	char sodt[12];
	int luongcoban;
	int heso;
	int luongthang;
	int phucap;
	int thunhap;

};
void nhapnhanvien(nhanvien nv[])
{
	for (int i = 0; i < 3; i++)
	{
		cin.ignore();
		cout << "Nhap Thong Tin Cua Nhan Vien Thu " << i + 1 << " :\n";
		cout << "\t\tNhap Ma Nhan Vien: ";
		cin.getline(nv[i].manhanvien, 30);
		cout << "\t\tNhap Ten Nhan Vien:";
		cin.getline(nv[i].hoten, 30);
		cout << "\t\tNhap So Dien Thoai: ";
		cin.getline(nv[i].sodt, 12);
		cout << "\t\tNhap Luong Co Ban: ";
		do
		{
			cin >> nv[i].luongcoban;
			if (nv[i].luongcoban < 0)
			{
				cout << "Nhap Lai Luong Co Ban: ";
			}
		}while (nv[i].luongcoban < 0);
		cout << "\t\tNhap He So Luong: ";
		do
		{
			cin >> nv[i].heso;
			if (nv[i].heso < 0)
			{
				cout << "Nhap Lai He So Luong: ";
			}
		} while (nv[i].heso < 0);
		cout << "\t\tNhap Phu Cap(%): ";
		do
		{
			cin >> nv[i].phucap;

			if (nv[i].phucap < 0)
			{
				cout << "Nhap Lai Phu Cap: ";
			}
		} while (nv[i].phucap < 0);
	}
}
int luongthang(nhanvien nv[])
{
	for (int i = 0; i < 3; i++)
	{
		nv[i].luongthang = nv[i].luongcoban * nv[i].heso;
	}
	for (int i = 0; i < 3; i++)
	{
		return nv[i].luongthang;
	}
}
int thunhap(nhanvien nv[])
{
	for (int i = 0; i < 3; i++)
	{
		nv[i].thunhap = nv[i].luongthang + (nv[i].luongthang * nv[i].phucap / 100);
	}
	for (int i = 0; i < 3; i++)
	{
		return nv[i].thunhap;
	}
}
void sapxep(nhanvien nv[])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (nv[i].heso > nv[j].heso)
			{
				nhanvien tg = nv[i];
				nv[i] = nv[j];
				nv[j] = tg;
			}
		}

	}
}
void daucong()
{
	cout<<"+";
}
void duongke(int n)
{
	for(int i=0 ; i<n ; i++)
	{
		cout<<"=";
	}
}
void tieude()
{
	daucong();duongke(159);daucong();cout<<endl;
	cout << "|"
		<< setw(15) << "Ma Nhan Vien" << setw(4) << "|"
		<< setw(18) << "Ten Nhan Vien" << setw(6) << "|"
		<< setw(17) << "So Dien Thoai" << setw(5) << "|"
		<< setw(16) << "Luong Co Ban" << setw(5) << "|"
		<< setw(6) << "He So" << setw(2) << "|"
		<< setw(12) << "Phu Cap(%)" << setw(3) << "|"
		<< setw(17) << "Luong Thang" << setw(7) << "|"
		<< setw(15) << "Thu Nhap" << setw(9) << "|" << endl;
	daucong();duongke(159);daucong();cout<<endl;
}
void tieude1()
{
	daucong();duongke(132);daucong();cout<<endl;
	cout << "|"
		<< setw(15) << "Ma Nhan Vien" << setw(4) << "|"
		<< setw(18) << "Ten Nhan Vien" << setw(6) << "|"
		<< setw(17) << "So Dien Thoai" << setw(5) << "|"
		<< setw(16) << "Luong Co Ban" << setw(5) << "|"
		<< setw(6) << "He So" << setw(2) << "|"
		<< setw(12) << "Phu Cap(%)" << setw(3) << "|"
<< setw(17) << "Luong Thang" << setw(7) << "|"<< endl;
	daucong();duongke(132);daucong();cout<<endl;
}

void tieude0()
{
	daucong();duongke(108);daucong();cout<<endl;
	cout << "|"
		<< setw(15) << "Ma Nhan Vien" << setw(4) << "|"
		<< setw(18) << "Ten Nhan Vien" << setw(6) << "|"
		<< setw(17) << "So Dien Thoai" << setw(5) << "|"
		<< setw(16) << "Luong Co Ban" << setw(5) << "|"
		<< setw(6) << "He So" << setw(2) << "|"
		<< setw(12) << "Phu Cap(%)" << setw(3) << "|"<< endl;
	daucong();duongke(108);daucong();cout<<endl;
}
void xuat1nhanvien(nhanvien nv)
{
	cout << "|"
		<< setw(15) << nv.manhanvien << setw(4) << "|"
		<< setw(18) << nv.hoten << setw(6) << "|"
		<< setw(17) << nv.sodt << setw(5) << "|"
		<< setw(16) << nv.luongcoban << setw(5) << "|"
		<< setw(6) << nv.heso << setw(2) << "|"
		<< setw(12) << nv.phucap << setw(3) << "|"
		<< setw(17) << nv.luongthang << setw(7) << "|"
		<< setw(15) << nv.thunhap << setw(9) << "|" << endl;
	cout << "+============================================================================================================================================================+\n";
}
void xuatluongthang(nhanvien nv[])
{
	tieude1();
	for(int i=0;i<3;i++)
	{
		cout << "|"
		<< setw(15) << nv[i].manhanvien << setw(4) << "|"
		<< setw(18) << nv[i].hoten << setw(6) << "|"
		<< setw(17) << nv[i].sodt << setw(5) << "|"
		<< setw(16) << nv[i].luongcoban << setw(5) << "|"
		<< setw(6) << nv[i].heso << setw(2) << "|"
		<< setw(12) << nv[i].phucap << setw(3) << "|"
		<< setw(17) << nv[i].luongthang << setw(7) << "|" << endl;
	}
	cout << "+====================================================================================================================================+\n";
}
void xuatnhanvien(nhanvien nv[])
{

	tieude();
	for (int i = 0; i < 3; i++)
	{

		xuat1nhanvien(nv[i]);
	}
}
void xuatthongtinvuanhap(nhanvien nv[])
{
	tieude0();
	for(int i=0;i<3;i++)
	{
		cout << "|"
		<< setw(15) << nv[i].manhanvien << setw(4) << "|"
		<< setw(18) << nv[i].hoten << setw(6) << "|"
		<< setw(17) << nv[i].sodt << setw(5) << "|"
		<< setw(16) << nv[i].luongcoban << setw(5) << "|"
		<< setw(6) << nv[i].heso << setw(2) << "|"
		<< setw(12) << nv[i].phucap << setw(3) << "|" << endl;
	}
	cout << "+============================================================================================================+\n";
	
}
void sapxepthunhap(nhanvien nv[])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (nv[i].thunhap < nv[j].thunhap)
			{
				nhanvien tg = nv[i];
				nv[i] = nv[j];
				nv[j] = tg;
			}
		}
	}
}
void thunhapcaonhat(nhanvien nv[])
{
		
		sapxepthunhap(nv);
		xuat1nhanvien(nv[0]);
}
int tinhtongluong(nhanvien nv[])
{
	int s=0;
	for(int i=0;i<3;i++)
	{
s=s+nv[i].thunhap;
	}
	return s;
}
void timkiem(nhanvien nv[],int hs)
{
	

	for(int i=0;i<3;i++)
	{
		if(nv[i].heso>hs)
		{
			xuat1nhanvien(nv[i]);
		}
	}
}
void ghitep(nhanvien nv[])
{
	ofstream f;
	f.open("nv.dat",ios::out);
	if(!f)
	{
		cout<<"Tep Khong Ton Tai";
		exit(1);
	}
	for(int i=0;i<3;i++)
	{
		f<<nv[i].manhanvien<<"\t\t"
		<<nv[i].hoten<<"\t\t"
		<<nv[i].sodt<<"\t\t"
		<<nv[i].luongcoban<<"\t\t"
		<<nv[i].heso<<"\t\t"
		<<nv[i].luongthang<<"\t\t"
		<<nv[i].phucap<<"\t\t"
		<<nv[i].thunhap<<"\t\t"<<endl;
	}
	
	f.close();
}
int main()
{
		nhanvien nv[3];
		cout<<"================Nhap Danh Sach Nhan Vien================\n";
		nhapnhanvien(nv);
		int luachon;
		cout<<"============================MENU============================\n";
		cout<<"1.In Danh Sach Nhan Vien"<<endl;
		cout<<"2.Tinh Luong Nhan Vien"<<endl;
		cout<<"3.Tinh Thu Nhap Cua Nhan Vien"<<endl;
		cout<<"4.Sap Xep Nhan Vien Theo Thu Tu Tang Dan Ve He So Luong"<<endl;
		cout<<"5.In Thong Tin Nhan Vien Co Thu Nhap Cao Nhat"<<endl;
		cout<<"6.In Tong Luong Cong Ti Phai Tra Cho Nhan Vien"<<endl;
		cout<<"7.In Danh Sach Cac Nhan Vien Co He So Luong < hs"<<endl;
		cout<<"8.In Danh Sach Nhan Vien Ra Tep nv.dat"<<endl;
		cout<<"\n\n";
		
		cout<<"Moi Ban Nhap Lua Chon: ";
		cin>>luachon;
		switch(luachon)
		{
			case 1:
			cout<<"In Danh Sach Nhan Vien"<<endl;
			xuatthongtinvuanhap(nv);
			break;
			case 2:
			cout<<"Tinh Luong Nhan Vien"<<endl;
			luongthang(nv);
			xuatluongthang(nv);
			break;
			case 3:
			cout<<"Tinh Thu Nhap Cua Nhan Vien"<<endl;
			luongthang(nv);
			thunhap(nv);
			xuatnhanvien(nv);
			break;
			case 4:
			cout<<"Sap Xep Nhan Vien Theo Thu Tu Tang Dan Ve He So Luong\n";
			luongthang(nv);
			thunhap(nv);
			sapxep(nv);
		    xuatnhanvien(nv);
		    break;
		    case 5:
		    cout<<"In Thong Tin Nhan Vien Co Thu Nhap Cao Nhat"<<endl;
			tieude();
			luongthang(nv);
			thunhap(nv);
		    sapxepthunhap(nv);
	        thunhapcaonhat(nv);
	        break;
	        case 6:
	        luongthang(nv);
			thunhap(nv);
	        cout<<"Tong So Luong Cong Ty Phai Tra Cho Nhan Vien: "<<tinhtongluong(nv)<<endl;
	        break;
	        case 7:
	        int hs;
	        cout<<"nhap hs: ";
	        cin>>hs;
		    cout<<"\n\n";
		    cout<<"Danh Sach Nhan Vien Co He So Luong > hs\n";
		    luongthang(nv);
			thunhap(nv);
			tieude();
			timkiem(nv,hs);
			break;
		    case 8:
		    cout<<"In Danh Sach Nhan Vien Ra Tep nv.dat"<<endl;
		    luongthang(nv);
			thunhap(nv);
	        ghitep(nv);
	        cout<<"Ghi Tep Thanh Cong";
	        break;
		}

}