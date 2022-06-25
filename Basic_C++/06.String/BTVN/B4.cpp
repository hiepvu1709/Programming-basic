#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "\n\t-CHUONG TRINH NHAP VAO 1 XAU KY TU , KIEM TRA XAU CO DOI XUNG HAY KHONG-\n";
    char s[50];
    int count = 1;
    cout << "\nMoi nhap xau ky tu: ";
    cin.getline(s, 50);
    int n = strlen(s);
    cout << "\n\tXau da nhap la: " << s << endl;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - i - 1])
            count = 0;
    }
    if (count == 1)
        cout << "\nXau da nhap doi xung" << endl;
    else
        cout << "\nXau khong doi xung" << endl;
    return 0;
}
