#include <iostream>
#include <algorithm>
#include <cctype>
#include<limits>
using namespace std;

int check(float n)
{
    do
    {
        if (cin.fail() || n != (int)n)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nBan nhap sai dinh dang, moi nhap lai: ";
            cin >> n;
        }
    } while (cin.fail() || n != (int)n);
}

int main()
{
    float a1, b1, c1;
    int *ptr1, *ptr2, *ptr3;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t-CHUONG TRINH NHAP VAO 3 SO NGUYEN a,b,c VA TIM SO LON NHAT TRONG BA SO-\n";
        cout << "\nMoi nhap gia tri a: ";
        cin >> a1;
        check(a1);
        cout << "\nMoi nhap gia tri b: ";
        cin >> b1;
        check(b1);
        cout << "\nMoi nhap gia tri c: ";
        cin >> c1;
        check(c1);
        int a = (int)a1;
        int b = (int)b1;
        int c = (int)c1;
        ptr1 = &a;
        ptr2 = &b;
        ptr3 = &c;
        cout << "\nGia tri lon nhat trong ba so vua nhap la: " << max(*ptr1, max(*ptr2, *ptr3)) << endl;
        cout << "\nBan co muon thu lai khong? (Y/N): ";
        cin >> t;
    }
    return 0;
}
