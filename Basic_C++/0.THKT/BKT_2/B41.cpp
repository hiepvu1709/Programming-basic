#include <iostream>
#include <limits>
#include <cmath>
#include <cctype>
using namespace std;

void sochinhphuong(int n)   // ham kiem tra so chinh phuong
{
	int a = sqrt(n);		// khai bao mot bien a va gan gia tri cho a bang can bac hai cua tham so n
	if(a*a==n)			// dieu kien  neu a*a = n 
	{
		cout<<n<<" la so chinh phuong\n";
	}
	else
	{
		cout<<n<<" khong phai so chinh phuong\n";
	}
}
bool soPiTaGo(int n)//Ham kiem tra sopitago
{
	for(int i=1;i<n;i++)//vong lap thu nhat 
	{
		for(int j=1;j<n;j++ )
		{
			if(i*i+j*j==n)  	
			{
				return 1;  // neu dung return ket qua va thoat khoi vaong lap
				break;
			}
		}
	}
	return 0;
 }
 int check(float &a) // kiem tra loi
 {
 	while (!a || a < 1 || a != (int)a) 
        {
        	if(!a)
        	{
        		cin.clear();
	            cin.ignore(numeric_limits<streamsize>::max(), '\n');
	            cout << "\nBan nhap sai dinh dang, moi nhap lai: ";
	            cin>>a;
			}
            if(a<1)
            {
            	cout<<"\nSo nhap vao khong duoc nho hon 1 vi so chinh phuong la so nguyen duong, moi nhap lai: ";
            	cin>>a;
			}
			if(a!=(int)a)
			{
				cout<<"\nKhog duoc nhap so thuc , vi so chinh phuong la mot so nguyen duong, moi nhap lai: ";
				cin>>a;
			}
        }
 }
int main()
{
    char t = 'Y'; // khai bao bien t kieu char dung de lua chon y kien 
    float a;  
    while (toupper(t) == 'Y')  // toupper la ham chuyen ky tu thuong thah ky tu in hoa
    {
        cout << "\n\tChuong trinh kiem tra 1 so co phai la so chinh phuong hay khong va kiem tra 1 so co phai la so pitago khong.\n"
        	 << "\nMoi nhap gia tri: ";
        cin >> a;
        check(a);  // kiem tra loi
        sochinhphuong(a);  // goi ham so chinh phuong
        if(soPiTaGo(a)==true)
        {
        	cout<<a<<" la so pytago.\n";
		}else{
			cout<<a<<" khong la so pytago.\n";
		}
        cout << "\nban co muon thu lai khong(Y/N) : ";
        cin >> t;   // neu tiem tuc thi nhap y hoac Y , con khong thi nhap n hoac n hoac bat ky ki tu khac
    }
    return 0;
}
