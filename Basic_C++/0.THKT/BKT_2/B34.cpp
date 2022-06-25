#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[50], s2[50];
    cout << "\nNhap xau thu nhat: ";
    cin.getline(s1, 50);
    cout << "\nNhap xau thu hai: ";
    cin.getline(s2, 50);
    if (strcmp(s1, s2) == 0)
    {
        cout << "\nHai xau giong nhau\n";
    }
    else
    {
        if (strcmp(s1, s2) == 1)
        {
            cout << "\nXau 1 lon hon xau 2\n";
        }
        else
        {
            cout << "\nXau 2 lon hon xau 1\n";
        }
    }
    return 0;
}
