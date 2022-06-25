#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[50], ten[20];
    int j = 0;
    cout << "\nNhap xau ho ten: ";
    cin.getline(s, 50);
    int n = strlen(s);
    int i = n - 1;
    while (s[i] != ' ')
    {
        ten[j] = s[i];
        i--;
        j++;
    }
    for (int k = j - 1; k >= 0; k--)
        cout << ten[k];
    return 0;
}
