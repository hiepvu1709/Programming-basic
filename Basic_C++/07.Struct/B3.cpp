// Vu Xuan Hiep - DHTI15A2ND

#include<iostream>
#include<iomanip>
#include<limits>
#include<conio.h>
#include<string.h>
using namespace std;

struct SP
{
	string id;   // ma san pham
	char name[40];    // ten san pham
	int amount;			// so luong
	int price;			// don gia
};
typedef struct SP sp;

int check(float &n);
void inputSP(SP sp[], int n);
void heading();
void output1SP(SP &sp);
void outputSP(SP sp[], int n);
void outputSP_under20k(SP sp[], int n);

int main()
{
	SP sp[50];
	float m;
	cout<<"\n\tMOI NHAP SO SAN PHAM CAN NHAP VAO DANH SACH: ";
	cin>>m;  
	check(m);
	int n = (int)m;
	inputSP(sp,n);
	outputSP(sp,n);
	outputSP_under20k(sp,n);
	delete[] sp;
}

int check(float &n)
{
	do{
		if(!n || n !=(int)n || n < 0 || n>100)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen lon hon 0, moi nhap lai: ";
			cin>>n;
		}
	}while(!n || n!=(int)n || n < 0 || n>100);
}

void inputSP(SP sp[], int n)
{
	cout<<"\n\t\t- NHAP DANH SACH THONG TIN "<<n<<" SAN PHAM -\n\n";
	for(int i=0 ; i<n ; i++)
	{
		cout<<"\n\tThong tin san pham thu "<<i+1<<" :\n";
		fflush(stdin);
		do{
			cout<<"\n\tMa san pham(10 ky tu): ";
			getline(cin,sp[i].id);
			if(sp[i].id.length() > 10)
			{
				cout<<"\n\tMa san pham qua 10 ky tu, khong hop le, vui long kiem tra lai!";
			}
		}while(sp[i].id.length() > 10);
		
		cout<<"\n\tTen san pham: ";
		cin.getline(sp[i].name,40);
		float slg;   // bien slg dung lam bien so luong tam thoi de bat cac loi nhap vao
		cout<<"\n\tSo luong: ";
		cin>>slg;
		while(cin.fail() || slg !=(int) slg || slg < 1)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"\n\tBan nhap sai dinh dang, moi nhap lai!\n";
				cout<<"\n\tSo luong: ";
				cin>>slg;
			}
			if(slg != (int) slg || slg < 1)
			{
				cout<<"\n\tSo luong nhap vao yeu cau la so nguyen duong lon hon 0, moi nhap lai!\n";
				cout<<"\n\tSo luong: ";
				cin>>slg;
			}
		}
		sp[i].amount = (int)slg;
		float dg;
		cout<<"\n\tDon gia: ";
		cin>>dg;
		while(cin.fail() || dg !=(int) dg || dg < 0)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"\n\tBan nhap sai dinh dang, moi nhap lai!\n";
				cout<<"\n\tDon gia: ";
				cin>>dg;
			}
			if(dg != (int) dg || dg < 0)
			{
				cout<<"\n\tDon gia nhap vao yeu cau la so nguyen duong lon hon 0, moi nhap lai!\n";
				cout<<"\n\tDon gia: ";
				cin>>dg;
			}
		}
		sp[i].price = (int) dg;
	}
}
void heading()
{
	cout<<"\n+-----+-------------+------------------------+----------+-------------+"
		<<"\n| STT | MA SAN PHAM |      TEN SAN PHAM      | SO LUONG |   DON GIA   |"
		<<"\n+-----+-------------+------------------------+----------+-------------+\n";
}
void output1SP(SP &sp)
{
	cout<<"|"<<setw(13)<<sp.id
		<<"|"<<setw(24)<<strupr(sp.name)
		<<"|"<<setw(10)<<sp.amount
		<<"|"<<setw(13)<<sp.price<<"|"
		<<"\n+-----+-------------+------------------------+----------+-------------+\n";
}
void outputSP(SP sp[], int n)
{
	cout<<"\n\t\t- DANH SACH THONG TIN "<<n<<" SAN PHAM VUA NHAP -\n\n";
	heading();
	for(int i=0 ; i<n ; i++)
	{
		cout<<"|"<<setw(5)<<i+1;
		output1SP(sp[i]);
	}
}

void outputSP_under20k(SP sp[], int n)
{
	int count = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(sp[i].price < 20000)
			count++;
	}
	if(count != 0)
	{
		cout<<"\n\t\t- DANH SACH CAC PHAM PHAM CO GIA BAN DUOI 20000 -\n\n";
		heading();
		for(int i=0 ; i<n ; i++)
		{
			if(sp[i].price < 20000)
			{
				cout<<"|"<<setw(5)<<i+1;
				output1SP(sp[i]);
			}
		}
	}else{
		cout<<"\n\tKHONG CO SAN PHAM NAP CO GIA BAN DUOI 20000!\n";
	}
}
