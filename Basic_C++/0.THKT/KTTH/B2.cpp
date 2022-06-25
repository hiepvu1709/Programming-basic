#include<iostream>
#include<limits>
#include<cctype>
using namespace std;

/*
ax + by = c
dx + ey = f
*/

const float VoNghiem = 0, KhongXacDinh  = -1;

float GiaiHe(float a, float b, float c, float d, float e, float f, float &x, float &y)
{
	float D = a*e - d*b;
	float Dx = c*e - f*b;
	float Dy = a*f - d*c;
	
	float SoNghiem;
	if(D != 0)
	{
		x = Dx / D;
		y = Dy / D;
		cout<<"\nHe phuong trinh co 1 nghiem duy nhat : x = "<<x<<" va y = "<<y<<endl;
		SoNghiem = 1;
	}else{
		if(Dx != 0 || Dy != 0)
		{
			cout<<"\nHe phuong trinh vo nghiem";
			SoNghiem = 0;
		}else if (Dx == Dy == 0){
			cout<<"\nHe phuong trinh co vo so nghiem";
			SoNghiem = -1;
		}
	}
	return SoNghiem;
}
int check(float &a)
{
	do{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen duong, moi nhap lai: ";
			cin>>a;
		}
	}while(cin.fail());
}
int main()
{
	float a, b, c, d, e, f, x, y;
	char t = 'Y';
	while(toupper(t) == 'Y')
	{
		cout<<"\n\tCHUONG TRINH GIAI HE \n\t\tax + by = c\n\t\tx + ey = f\n";
		cout<<"\nNhap a: ";
		cin>>a; check(a);
		cout<<"\nNhap b: ";
		cin>>b; check(b);
		cout<<"\nNhap c: ";
		cin>>c; check(c);
		cout<<"\nNhap d: ";
		cin>>d; check(d);
		cout<<"\nNhap e: ";
		cin>>e; check(e);
		cout<<"\nNhap f: ";
		cin>>f; check(f);
		
		float SoNghiem = GiaiHe(a,b,c,d,e,f,x,y);
		cout<<"\nBan co muon thu lai khong? (Y/N) : ";
		cin>>t;
	}
	return 0;
}
