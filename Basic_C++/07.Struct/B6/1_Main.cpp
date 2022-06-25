//Vu Xuan Hiep - DHTI15A2ND

#include <iostream>
#include <string.h>
#include <conio.h>
#include "input.cpp" 		// file nhap du lieu dau vao
#include "Debug.cpp"		// file bat loi 
#include "intoMoney.cpp"	// file tinh thanh tien cua dau ra
using namespace std;

int main()
{
    MH mh[50];
    
    //khoi tao bien m voi kieu du lieu struct, muc dich de bat loi kieu du lieu nhap vao
    float m;		
    cout << "\n\tMoi nhap so mat hang can nhap vao danh sach: ";
    cin >> m;
    // ham bat loi duoc tich hop trong file Debug.cpp
    check(m);		
	// khoi tao bien n kieu so nguyen, gan phan nguyen cua n bang voi phan nguyen cua m, muc dich de n kieu du lieu tuong thich voi cac ham ben duoi
    int n = (int)m;	
			 
    inputMH(mh, n);
    outputMH(mh, n);
    amount_under_50(mh, n);
    delete[] mh;
}
