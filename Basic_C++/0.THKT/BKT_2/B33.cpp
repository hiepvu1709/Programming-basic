#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[50];
    cout << "\nNhap xau chu thuong: ";
    cin.getline(s, 50);
    cout << "\nXau chu hoa la: " << strupr(s) << endl;
    return 0;
}
