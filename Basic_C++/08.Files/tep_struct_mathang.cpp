#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

struct MatHang
{
	char mah[15];
	char ten[30];
	int sl;
	double dg;
};

void nhap(MatHang *s,int &n)
{
	for (int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"Nhap mat hang thu "<<i+1<<" :"<<endl;
		cout<<"\tMa Hang: ";cin.getline(s[i].mah,15);
		cout<<"\tTen Hang: ";cin.getline(s[i].ten,30);
		cout<<"\tSo Luong: ";cin>>s[i].sl;
		cout<<"\tDon Gia: ";cin>>s[i].dg;
	}
}
void ghitep(MatHang *s,int &n)
{
	fstream f("mathang.txt",ios::out);
	if (!f)
	{
		cout<<"Khong ghi duoc tep"<<f<<endl;
		exit(1);
	}
	f<<left;
	for (int i=0;i<n;i++)
		f<<s[i].mah<<" "<<s[i].ten<<" "<<s[i].sl<<" "<<setprecision(10)<<s[i].dg<<endl;
	f.close();
}

void doctep(MatHang *s,int &n)
{
	fstream f("mathang.txt",ios::in);
	if (!f)
	{
		cout<<"Khong ghi duoc tep"<<f<<endl;
		exit(1);
	}
	for (int i=0;i<n;i++)
		f>>s[i].mah>>s[i].ten>>s[i].sl>>s[i].dg;
	f.close();
}

void keBang(int n)
{
	for(int i=0 ; i<n ; i++)
	{
		cout<<"-";
	}
	cout<<endl;
}
void tieude()
{
	keBang(74);
	cout<<"| "<<setw(15)<<"Ma Hang "<<"| "<<setw(30)<<"Ten MH ";
	cout<<"| "<<setw(5)<<"SL "<<"| "<<setw(15)<<"Don Gia "<<"|\n";
	keBang(74);
}
void inmh(MatHang *s,int &n)
{
	cout<<left;
	tieude();
	for (int i=0;i<n;i++)
	{
		cout<<"| "<<setw(15)<<s[i].mah<<"| "<<setw(30)<<s[i].ten;
		cout<<"| "<<setw(5)<<s[i].sl<<"| "<<setw(15)<<setprecision(10)<<s[i].dg<<"|"<<endl;
		keBang(74);
	}
}
void doicho(MatHang &a,MatHang &b)
{
	MatHang tg=a;
	a=b;
	b=tg;
}
void sapxep(MatHang *s,int &n)
{
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (s[i].dg>s[j].dg) doicho(s[i],s[j]);
}
int main()
{
	int n;
	cout<<"Nhap so luong mat hang: ";cin>>n;
	MatHang s[n];
	nhap(s,n);
	ghitep(s,n);
	doctep(s,n);
	cout<<"\n\t\t------------ DANH SACH MAT HANG -----------\n";
	inmh(s,n);
	sapxep(s,n);
	cout<<"\n\t-------------- DANH SACH MAT HANG SAU KHI SAP XEP ---------------\n";
	inmh(s,n);
	return 0;
}
