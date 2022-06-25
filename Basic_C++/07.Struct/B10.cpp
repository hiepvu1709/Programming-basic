//Vu Xuan Hiep - DHTI15A2ND

#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

struct Phanso
{
    int tu,mau;
};
void nhapPS(Phanso ps[], int &n)
{
    cout<<"So phan so ban muon nhap la: ";  cin>>n;
    do{
        if( (!n) || (n<2) )
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"\nYeu cau nhap so phan so la 1 so nguyen duong lon hon 2, vui long nhap lai: ";
            cin>>n;
        }
    }while( (!n) || (n<2) );
    for(int i=0 ; i<n ; i++)
    {
        cout<<"\nPhan so thu "<<i+1<<":\n";
        cout<<"\n\tNhap tu so: ";  cin>>ps[i].tu;
        do{
            if( !ps[i].tu )
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"\nTu so nhap vao yeu cau la mot so nguyen, vui long nhap lai: ";
                cin>>ps[i].tu;
            }
        }while( !ps[i].tu );
        cout<<"\tNhap mau so: ";  cin>>ps[i].mau;
        do{
            if( (!ps[i].mau) || (ps[i].mau == 0) )
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"Mau so nhap vao yeu cau la mot so va so do phai khac 0, vui long nhap lai: ";
                cin>>ps[i].mau;
            }
        }while( (!ps[i].mau) || (ps[i].mau == 0) );
    }
}

int UCLN(int a, int b)
{
    a=abs(a);
	b=abs(b);
    if(a == 0)
		return 1;
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}

int BCNN(int a, int b)
{
    return (a*b/UCLN(a,b));
}

void rutGon(Phanso &ps)
{
    int c=UCLN(ps.tu,ps.mau);
	ps.tu /= c;
	ps.mau /= c;
}

int BCNN_PS(Phanso ps[] ,int n)
{
    int BC = BCNN(ps[0].mau,ps[1].mau) ;
        for(int i=2;i<n;i++)
	    {
            BC = BCNN(BC,ps[i].mau);    
        }
        return BC;
}

void tong2PS(Phanso ps[], int n)
{
    Phanso a;
    a.tu=0;
	for(int i=0;i<n;i++)	
	{
		ps[i].tu=ps[i].tu*(BCNN_PS(ps,n)/ps[i].mau);
	}
	for(int i=0;i<n;i++)
	{
		a.tu=a.tu+ps[i].tu;
		a.mau=BCNN_PS(ps,n);
	}
    rutGon(a);
	cout<<"\nTong cua cac phan so tren la: ";
	if(a.mau < 0)
	{
		a.tu *= -1;
		a.mau *= -1;
		cout<<a.tu <<"/"<< a.mau;	
	}		
	else if(a.tu % a.mau == 0)
		cout << a.tu / a.mau;
	else
		cout<<a.tu <<"/"<< a.mau;	
}

int main()
{
	int n;
	Phanso ps[n];
    nhapPS(ps,n);
    tong2PS(ps,n);
    return 0;
}
