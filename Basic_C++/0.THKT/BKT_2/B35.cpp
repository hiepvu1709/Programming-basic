#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[50], ch;
    bool k = false;
    cout << "\nNhap xau ky tu: ";
    cin.getline(s, 50);
    cout << "\nNhap ky tu can tim trong xau: ";
    cin >> ch;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
            k = true;
    }
    if (k)
        cout << "\nKy tu " << ch << " co trong xau\n";
    else
        cout << "\nKy tu " << ch << " khong co trong xau\n";
    return 0;
}
