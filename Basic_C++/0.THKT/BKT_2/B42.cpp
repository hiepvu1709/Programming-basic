#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <cctype>
using namespace std;
#define MAX 100

void enterAnInteger(int &n);
void nhapmang(int a[MAX][MAX], int &m, int &n);
void xuatmang(int a[MAX][MAX], int &m, int &n);
void TBC(int mt[MAX][MAX], int &m, int &n);
void mincheophu(int mt[MAX][MAX], int &m, int &n);
int check(float &m);

int main()
{
    int c[MAX][MAX];
    float a, b;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t- CHUONG TRINH NHAP VAO MOT MA TRAN CAP mxn , TINH TRUNG BINH CONG CAC PHAN TU CHIA 7 DU 4 VA\n TIM SO NHO NHAT TREN DUONG CHEO PHU-\n";
        cout << "\nNhap so dong: ";
        cin >> a;
        check(a);
        do{
			cout << "\nNhap so cot: ";
			cin >> b;
        	if(a!=b)
        	{
        		cout<<"\nYeu cau nhap so hang va so cot bang nhau, vui long kiem tra lai!\n";
			}
		}while(a!=b);
        check(b);
        int nROW = (int)a;
        int nCOL = (int)b;
        nhapmang(c, nROW, nCOL);
        xuatmang(c, nROW, nCOL);
        TBC(c, nROW,nCOL);
        mincheophu(c, nROW, nCOL);
        cout << "\nBan co muon thu lai khong? (Y/N) : ";
        cin >> t;
    }
    delete c;
    return 0;
}
int check(float &n)
{
    do
    {
        if (!n || n != (int)n || n < 0 || n > MAX)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
            cin >> n;
        }
    } while (!n || n != (int)n || n < 0 || n > MAX);
}

void enterAnInteger(int &n) // bat loi so thuc khi nhap gia tri trong mang 2 chieu
{
    float a;
    cin >> a;
    while (cin.fail() || a != (int)a)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nSo nhap vao yeu cau la mot so nguyen, moi nhap lai: ";
        cin >> a;
    }
    n = a;
}

void nhapmang(int mt[MAX][MAX], int &m, int &n)
{
    cout << "\nMoi nhap cac phan tu cua ma tran( SO NHAP VAO TOI DA 6 CHU SO ):\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << "a[" << i + 1 << "][" << j + 1 << "]=";
            enterAnInteger(mt[i][j]);
        }
    }
}
void xuatmang(int mt[MAX][MAX], int &m, int &n)
{
    cout << "\nMa tran vua nhap la:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << mt[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n\n";
}
void TBC(int mt[MAX][MAX], int &m, int &n)
{
	float sum=0;
	int dem=0;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(mt[i][j]%7==4)
			{
				sum=sum+mt[i][j];
				dem++;
			}
		}
	}
	if(dem==0)
	{
		cout<<"\nKhong tim thay cac phan tu chia 7 du 4 "<<endl;
	}
	else
	{
		cout<<"\nTrung binh cong cac phan tu chia 7 du 4 la: "<<(float)sum/dem<<endl;
	}
}
void mincheophu(int mt[MAX][MAX], int &m, int &n)  // da chinh sua , neu thay co hoi lai thi bao phan do em code sai
{
	int min=mt[0][n-1];
	for(int i=0; i<n; i++)
	{
		min = (mt[i][n-1-1] < min) ?mt[i][n-1-i] : min;
		
	}
	cout<<"\nSo nho nhat tren duong cheo phu la: "<<min<<endl;
}
