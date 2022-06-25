#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	    cout << "\n\t-CHUONG TRINH NHAP VAO 1 XAU KY TU ROI IN RA SO LUON KY TU a,b TRONG XAU-\n";
	    char s[50];
	    int count = 0;
        cout << "\nMoi nhap xau ky tu: ";
        cin.getline(s, 50);
        int n = strlen(s);
        cout << "\n\tXau da nhap la: " << s << endl;
        for (int i = 0; i < n; i++)
        {
            if (toupper(s[i]) == 'A' || toupper(s[i]) == 'B')
                count++;
        }
        cout << "\n\tSo luong ky tu a,b trong xau la: " << count << endl;
    	return 0;
}
