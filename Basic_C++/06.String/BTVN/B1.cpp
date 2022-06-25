#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main()
{
   		char s[50];
		cout << "\n\t-CHUONG TRINH NHAP VAO 1 XAU KY TU ROI IN XAU DAO NGUOC-\n";
        cout << "\nMoi nhap xau ky tu: ";
        cin.getline(s, 50);
        int n = strlen(s);
        cout << "\n\tXau da nhap la: " << s << endl;
        cout << "\n\tXau dao nguoc la: ";
        for (int i = n - 1; i >= 0; i--)
        {
            cout << s[i];
        }
    	return 0;
}
