#include <iostream>
#include <stdlib.h> // thu vien nay de dung ham chuyen doi atoi
#include <cctype>
#include <limits>
using namespace std;

int check(char *a);              // ham bat loi khi nguoi dung nhap vao khong dung quy dinh
bool check_perfectNumber(int n); // ham kiem tra so hoan hao
void Program(char a[]);          // Cac khoi lenh de chay chuong trinh

int main()
{
    char a[1]; // bien a kieu du lieu char dung de nhap du lieu roi kiem tra xem co dung voi du lieu dau bai yeu cau hay khong
    Program(a);
    return 0;
}

int check(char *a)
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

bool check_perfectNumber(int n)
{
    int i = 1, S = 0;
    while (i < n)
    {
        if (n % i == 0) // neu n chia lay du cho i ma bang 0 co nghia i la uoc cua n
        {
            S += i; // tinh tong cac uoc cua n xong gan vao bien S
        }
        i++;
    }
    if (S == n)      // neu tong cac uoc cua n bang chinh n
        return true; // tra ve gia tri dung
    else
        return false; // tra ve gia tri sai
}

void Program(char a[])
{
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
    	cout << "\n\t- CHUONG TRINH KIEM TRA MOT SO CO PHAI LA SO HOAN HAO HAY KHONG -\n";
        cout << "\nMoi nhap gia tri can kiem tra: ";
        cin >> a;
        while (!check(a))
        {
            if (!check(a))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n So hoan hao la mot so nguyen duong ma tong cac uoc nguyen duong cua no (khong ke chinh no) bang chinh no!\n"
                     << " Du lieu ban vua nhap khong hop le, moi nhap lai theo dung quy dinh: ";
                cin >> a;
            }
        }
        int n = atoi(a); // ham atoi dung de chuyen kieu du lieu char sang kieu du lieu int
        if (check_perfectNumber(n) == true)
            cout << "\n " << n << " la so hoan hao!";
        else
            cout << "\n " << n << " khong phai la so hoan hao!";
        cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
    }
}
