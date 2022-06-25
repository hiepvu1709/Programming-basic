#include <iostream>		
#include <fstream>	
#include <iomanip>	
#include <string.h>
#include <limits>
using namespace std;

struct Staff				// nhan vien
{
    string id;				// ma nhan vien
    char name[30];			// ten nhan vien
    long phoneNumber;		// so dien thoai
    long salary;			// luong co ban
	float coefficient;		// he so luong
	long stipend;			// phu cap
    long long paycheck;	// luong thang
    long long income;		// thu nhap
};

int check(float &n, string a);
void input_1_staff(Staff &nv);
void input_list_staff(Staff nv[], int n);
void heading();
void PayCheck(Staff nv[], int n);
void Income(Staff nv[], int n);
void output_1_staff(Staff &nv);
void output_list_staff(Staff nv[], int n);
void Ascending_income(Staff nv[], int n);
void Max_salary(Staff nv[], int n);
void output_with_hs(Staff nv[], int n, float hs);
void ghitep(Staff nv[], int n);

int main()
{
    Staff ql[100], nv[100];
    float m,hs;
    cout<<"\n\tNHAP VAO SO NHAN VIEN : ";   cin>>m;     check(m,"NHAP VAO SO NHAN VIEN");
    int n = (int)m;
    input_list_staff(ql,n);
    output_list_staff(ql,n);
	Max_salary(ql,n);
	cout<<"\n\t\tBANG LUONG XEP THE0 THU TU TANG DAN: "<<endl;
	Ascending_income(ql,n);
    cout<<"\nNHAP HE SO MONG MUON: ";       cin>>hs;    check(hs,"NHAP HE SO MONG MUON");
    output_with_hs(ql,n,hs);
    ghitep(nv,n);
    return 0;
}

int check(float &n, string a)		// string a la tham so de in ra thong bao cho nguoi dung biet la nhap cai gi sau khi bi mac loi nhap vao
{
	do{
		if(cin.fail())
		{
			cin.clear();
    		cin.ignore(numeric_limits<streamsize>::max(),'\n');
    		cout<<"\n\tBan nhap sai dinh dang, vui long kiem tra lai!\n";
    		cout<<"\n\t"<<a<<": ";
    		cin>>n;
		}
	}while(cin.fail());
}

void input_1_staff(Staff &nv)				// ham nhap thong tin 1 nhan vien
{
	// xoa bo nho dem, khi chuong trinh vua nhap so xong thi lien den nhap ky tu, dan den con tro nhap se nhay qua va khong cho nhap
    fflush(stdin);				// tuong tu cin.ignore();
    do{
    	cout << "\n\tMa nhan vien (12 ky tu): ";
    	getline(cin,nv.id);
    	if(nv.id.length()> 12)
    	{
    		cout<<"\n\tMa nhan vien qua gioi han cho phep!\n"
    			<<"\tVui long kiem tra lai!\n";
		}
	}while(nv.id.length() > 12);
    
    cout << "\n\tTen nhan vien: ";
    cin.getline(nv.name, 30);
    
    float number;
    cout << "\n\tSo dien thoai: ";
    cin >> number;
	check(number,"So dien thoai");
    nv.phoneNumber = (int)number;
    
    float luong;
    cout << "\n\tLuong co ban: ";
    cin >> luong;
    check(luong,"Luong co ban");
    nv.salary = (int)luong;
    
    cout << "\n\tHe so luong: ";
    cin >> nv.coefficient;
    check(nv.coefficient,"He so luong");
    
    float pc;
    cout << "\n\tPhu cap: ";
    cin >> pc;
    check(pc,"Phu cap");
    nv.stipend = (int)pc;
}

void input_list_staff(Staff nv[], int n)		// ham nhap thong tin danh sach nhan vien
{
    cout << "\n\t\t- NHAP DANH SACH " << n << " NHAN VIEN -\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\tTHONG TIN NHAN VIEN THU " << i + 1 << " :\n";
        input_1_staff(nv[i]);
    }
}

void heading()			// ham tieu de
{
    cout << "\n+-----+--------------+-------------------------+---------------+-------------+--------------+-----------+-------------+--------------+"
         << "\n| STT | MA NHAN VIEN |        HO VA TEN        | SO DIEN THOAI | HE SO LUONG | LUONG CO BAN |  PHU CAP  | LUONG THANG |   THU NHAP   |"
         << "\n+-----+--------------+-------------------------+---------------+-------------+--------------+-----------+-------------+--------------+\n";
}

void PayCheck(Staff nv[], int n)		// ham tinh luong thang
{
    for (int i = 0; i < n; i++)
    {
        nv[i].paycheck = nv[i].salary * nv[i].coefficient;		// luong thang = luong co ban * he so luong
    }
}

void Income(Staff nv[], int n)			// ham tinh thu nhap
{
    for (int i = 0; i < n; i++)
    {
        nv[i].income = nv[i].paycheck + nv[i].stipend;		// thu nhap = luong thang + phu cap
    }
}
	
void output_1_staff(Staff &nv)			// ham xuat ra 1 nhan vien
{
    cout << "|" << setw(14) << nv.id
         << "|" << setw(25) << strupr(nv.name)
         << "|" << setw(15) << nv.phoneNumber
         << "|" << setw(13) << nv.coefficient
         << "|" << setw(14) << nv.salary
         << "|" << setw(11) << nv.stipend 
		 << "|" << setw(13) << nv.paycheck
		 << "|" << setw(14)	<< nv.income << "|"
         << "\n+-----+--------------+-------------------------+---------------+-------------+--------------+-----------+-------------+--------------+\n";
}

void output_list_staff(Staff nv[], int n)			// ham xuat ra man hinh danh sach nhan vien
{
    cout << "\n\t\t- DANH SACH " << n << " NHAN VIEN -\n\n";
    heading();
    PayCheck(nv,n);
    Income(nv,n);
    for (int i = 0; i < n; i++)
    {
        cout << "|" << setw(5) << i + 1;
        output_1_staff(nv[i]);
    }
}

void Ascending_income(Staff nv[], int n)			// ham sap xem thu nhap tang dan
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nv[i].income > nv[j].income)
            {
                Staff tg = nv[i];
                nv[i] = nv[j];
                nv[j] = tg;
            }
        }
    }
    output_list_staff(nv, n);
}

void Max_salary(Staff nv[], int n)		//ham tim danh sach nhan vien luong cao nhat
{
	cout<<"\n\t\t- DANH SACH NHAN VIEN THU NHAP CAO NHAT -\n";
    heading();
	PayCheck(nv,n);
    Income(nv,n);
    int max = nv[0].income;			// khai bao bien max gan voi gia tri bien thu nhap cua nhan vien dau tien
    for (int i = 1; i <= n; i++)
    {
        if (max < nv[i].income)			
            max = nv[i].income;
    }
    for(int i = 0 ; i<n ; i++)
    {
        if(nv[i].income == max);
        {
            cout << "|" << setw(5) << i + 1;
            output_1_staff(nv[i]);
        }
    }
}

void output_with_hs(Staff nv[], int n, float hs)		// ham xuat danh sach nhan vien co he so luong lon hon 1 hs nhap vao
{
    int count(0);
    for(int i = 0 ; i<n ; i++)
        if(nv[i].coefficient > hs)
            count++;
    if(count!=0)
    {
		cout<<"\n\t\tDANH SACH NHAN VIEN CO HE SO LUONG LON HON "<<hs<<endl;
    	PayCheck(nv,n);
    	Income(nv,n);
		heading();
		for(int i = 0 ; i<n ; i++)
		{
			if(nv[i].coefficient > hs)
			{
				cout << "|" << setw(5) << i + 1;
            	output_1_staff(nv[i]);
			}
		}
	}else{
		cout<<"\n\t\t- KHONG CO NHAN VIEN NAO CO HE SO LUONG LON HON "<<hs<<"!\n";
	}
}

void ghitep(Staff nv[], int n)
{
    fstream f("nv.txt", ios::out);
    f<<n<<endl;
    for (int i = 0; i < n; i++)
    {
       f << i + 1<<"\t\t"
         << nv[i].id<<"\t\t"
         << strupr(nv[i].name)<<"\t\t"
         << nv[i].phoneNumber<<"\t\t"
         << nv[i].coefficient<<"\t\t"
         << nv[i].salary<<"\t\t"
         << nv[i].stipend <<"\t\t"
		 << nv[i].paycheck<<"\t\t"
		 << nv[i].income << "\n";
    }
    f.close();
}