#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, j;   // khai bao 2 bien nguyen i, j
    int *p, *q; // khai bao 2 con tro nguyen p,q
    p = &i;     // cho p tr? t?i i
    q = &j;     // cho q tr? t?i j
    cout << "\nDia chi bien i la: " << &i << endl;
    cout << "\nDia chi bien j la: " << q << endl; // hoi dia chi bien j thong qua q
    i = 2;
    *q = 5; // gan j = 5 thong qua q
    i = i + 1;
    cout << "\nGai tri cua i sau khi tang 1 don vi la i = " << i << endl; // tang t len 1 don vi va hoi gia tri cua i bang bao nhieu
    (*q)++;
    cout << "\nGia tri cua j sau khi tang len 1 don vi thong qua q la j = " << j << endl;
    (*p) = (*q) * 2 + 1; // gan lai i thong qua p
    cout << "Gai tri cua i thong qua p sau khi tang gia tri la i = " << i << endl;
    return 0;
}
