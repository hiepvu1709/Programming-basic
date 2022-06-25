#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char st[50];
    cout << "Nhap vao mot xau ky tu :";
    cin.getline(st, 50);
    int n = strlen(st) - 1;
    int i;
    while (st[n] == ' ')
        st[n] = '\0';
    while (st[0] == ' ')
        for (i = 0; i <= n; i++)
            st[i] = st[i + 1];
    i = 0;
    while (st[i] != '\0')
    {
        if (st[i] == ' ')
        {
            if (st[i - 1] == ' ')
            {
                for (int j = i; j <= n; j++)
                    st[j] = st[j + 1];
                i--;
            }
        }
        i++;
    };
    cout << "\n\t\t Xau chuan hoa la:" << st << endl;
    return 0;
}
