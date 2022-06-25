//Vu Xuan Hiep - DHTI15A2ND

#include<iostream>
#include<iomanip>
#include<limits>
#include<conio.h>
#include<string.h>
using namespace std;

struct GiangVien
{
	string id;		// ma giang vien
	char name[40]; 		// ten giang vien
	int number;			// so mon hoc
	int semester;		// hoc ky
};

typedef struct GiangVien GV;

int check(float &n);
void inputGV(GV gv[], int n);
void heading();
void output1GV(GV &gv);
void outputGV(GV gv[], int n);
void output_gv_under5(GV gv[], int n);

int main()
{
	GV gv[50];
	float m;
	cout<<"\nMoi nhap so giang vien can nhap vao danh sach: ";
	cin>>m;  
	check(m);
	int n = (int)m;
	inputGV(gv,n);
	outputGV(gv,n);
	output_gv_under5(gv,n);
	delete[] gv;
}

int check(float &n)
{
	do{
		if(!n || n !=(int)n || n < 0 || n>100)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
			cin>>n;
		}
	}while(!n || n!=(int)n || n < 0 || n>100);
}

void inputGV(GV gv[], int n)
{
	cout<<"\n\t\t- NHAP DANH SACH THONG TIN "<<n<<" GIANG VIEN -\n\n";
	for(int i=0 ; i<n ; i++)
	{
		cout<<"\n\tThong tin giang vien thu "<<i+1<<" :\n";
		fflush(stdin);				// xoa bo nho dem
		cout<<"\n\tMa giang vien: ";
		getline(cin,gv[i].id);
		{
			cout<<"\nMoi nhap lai: \n";
			getline(cin,gv[i].id);
		}
		cout<<"\n\tHo va ten giang vien: ";
		cin.getline(gv[i].name,40);
		float sm;			// bien sm dung lam bien so so mon hoc tam thoi de bat cac loi nhap vao
		cout<<"\n\tSo mon day: ";
		cin>>sm;
		while(cin.fail() || sm !=(int) sm || sm < 1)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"\n\tBan nhap sai dinh dang, moi nhap lai!\n";
				cout<<"\n\tSo mon day: ";
				cin>>sm;
			}
			if(sm != (int) sm || sm < 1)
			{
				cout<<"\n\tSo mon day nhap vao yeu cau la so nguyen duong lon hon 0, moi nhap lai!\n";
				cout<<"\n\tSo mon day: ";
				cin>>sm;
			}
		}
		gv[i].number = (int) sm;
		float hk;
		cout<<"\n\tHoc ky : ";
		cin>>hk;
		while(cin.fail() || hk !=(int) hk || hk < 1)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"\n\tBan nhap sai dinh dang, moi nhap lai!\n";
				cout<<"\n\tHoc ky: ";
				cin>>hk;
			}
			if(hk != (int) hk || hk < 1)
			{
				cout<<"\n\tHoc ky nhap vao yeu cau la so nguyen duong lon hon 0, moi nhap lai!\n";
				cout<<"\n\tHoc ky: ";
				cin>>hk;
			}
		}
		gv[i].semester = (int) hk;
	}
}

void heading()
{
	cout<<"\n+-----+---------------+---------------------+------------+--------+"
		<<"\n| STT | MA GIANG VIEN |      HO VA TEN      | SO MON HOC | HOC KY |"
		<<"\n+-----+---------------+---------------------+------------+--------+\n";
}

void output1GV(GV &gv)
{
	cout<<"|"<<setw(15)<<gv.id
		<<"|"<<setw(21)<<strupr(gv.name)
		<<"|"<<setw(12)<<gv.number
		<<"|"<<setw(8)<<gv.semester<<"|"
		<<"\n+-----+---------------+---------------------+------------+--------+\n";
}

void outputGV(GV gv[], int n)
{
	cout<<"\n\t\t- DANH SACH THONG TIN "<<n<<" GIANG VIEN VUA NHAP -\n";
	heading();
	for(int i=0 ; i<n ; i++)
	{
		cout<<"|"<<setw(5)<<i+1;
		output1GV(gv[i]);
	}
}

void output_gv_under5(GV gv[], int n)
{
	int count = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(gv[i].number >= 5)
			count++;
	}
	if(count!=0)
	{
		cout<<"\n\t- DANH SACH GIANG VIEN DAY 5 MON TRO LEN TRONG HOC KY -\n";
		heading();
		for(int i=0 ; i<n ; i++)
		{
			if(gv[i].number >= 5)
			{
				cout<<"|"<<setw(5)<<i+1;
				output1GV(gv[i]);
			}
		}
	}else{
		cout<<"\n\t KHONG CO GIANG VIEN NAO DAY 5 MON TRO LEN TRONG HOC KY!\n";
	}
}
