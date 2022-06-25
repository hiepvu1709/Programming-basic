#include <iostream>
#include <stdlib.h>
#include <cctype>
using namespace std;

int UCLN(int x, int y)
{
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    return x;
}

int check_int(char *a)
{
    int i = 0;
    while (a[i] != NULL) // NULL tuong duong voi 0, la 1 con tro dang tro vao mang va o day khi cac phan tu cua a khac NULL thi co dieu kien duoi
    {
        if (a[i] < '0' || a[i] > '9') // neu cac phan tu cau a nho hon ky tu 0 hoac lon hon ky tu 9
            return 0;                 // bao cao chuong trinh da chay het va khong gap 1 loi gi ca
        i++;                          // i tang len don vi
    }
    return 1; // bao cao chuong trinh da chay het va da gap loi xay ra
}

void CT(char a1[], char a2[], char a3[], char a4[])
{
	char t = 'Y';
	while (toupper(t) == 'Y')
	{
		cout << "\n\t-CHUONG TRINH TIM UCLN CHO 4 SO NGUYEN DUONG a1,a2,a3,a4 BAT KY-\n";
	    cout << "\na1 =  ";
	    cin >> a1;
	    while (!check(a1))
	    {
	        if (!check(a1))
	        {
	            cout << "\nGia tri ban vua nhap khong hop le, moi nhap lai: ";
	            cin >> a1;
	        }
	    }
	    cout << "\na2 =  ";
	    cin >> a2;
	    while (!check(a2))
	    {
	        if (!check(a2))
	        {
	            cout << "\nGia tri ban vua nhap khong hop le, moi nhap lai: ";
	            cin >> a2;
	        }
	    }
	    cout << "\na3 = ";
	    cin >> a3;
	    while (!check(a3))
	    {
	        if (!check(a3))
	        {
	            cout << "\nGia tri ban vua nhap khong hop le, moi nhap lai: ";
	            cin >> a3;
	        }
	    }
	    cout << "\na4 =  ";
	    cin >> a4;
	    while (!check(a4))
	    {
	        if (!check(a4))
	        {
	            cout << "\nGia tri ban vua nhap khong hop le, moi nhap lai: ";
	            cin >> a4;
	        }
	    }
	    int a = atoi(a1);
	    int b = atoi(a2);
	    int c = atoi(a3);
	    int d = atoi(a4);
	    cout << "\nUoc chung lon nhat la: " << UCLN(UCLN(a, b), UCLN(c, d)) << endl;
	    cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
	}
}

int main()
{
    char a1[10], a2[10], a3[10], a4[10];
    CT(a1, a2, a3, a4);
    return 0;
}
