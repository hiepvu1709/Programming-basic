#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

int check(float &n);           // ham kiem tra loi nhap vao
int reverse_function(int num); // ham dao nguoc so vua nhap

int main()
{
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t-CHUONG TRINH NHAP VAO 1 SO NGUYEN n ROI IN RA THEO THU TU NGUOC LAI-\n";
        float num; // bien so can sao nguoc
        cout << "\nMoi nhap gia tri can dao nguoc( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> num;
        cout << "\nSo sau khi dao nguoc la: " << reverse_function(num) << endl;
        cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
    }
    return 0;
}

int check(float &n)
{
    do
    {
        if (!n || n != (int)n)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Khong hop le, moi nhap lai: ";
            cin >> n;
        }
    } while (!n || n != (int)n);
}
int reverse_function(int num)
{
    int sum = 0, rem; // sum la bien tong , rem la bien luu bo mho
    while (num != 0)
    {
        rem = num % 10;         // de lay so cuoi cung thi ta chia lay du cho 10
        sum = (sum * 10) + rem; // nhan ket qua voi 10, cong voi so cuoi vua tach
        num = num / 10;         // xoa so cuoi
    }
    return sum;
}
