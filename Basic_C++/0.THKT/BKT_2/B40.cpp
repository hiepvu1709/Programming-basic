#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[100];
	cout << " nhap vao mot xau ky tu : ";
	cin.getline(s, 100);
	cout << endl;
    for (int i = 0; i <= 9; ++i)
	{
		int dem = 0;
		for (int j = 0; j < strlen(s); ++j)
	    {
	     	if (s[j] == ('0' + i))
			dem++;
    	}
		if (dem)
		{
	    	cout <<(char)('0' + i) << " " << dem << endl;
	    }
	}
	for (int i = 0; i <= 25; ++i)
	{		
    	int dem = 0;
		for (int j = 0; j < strlen(s); ++j)
    	{
        	if (s[j] == ('a' + i) || s[j] == ('A' + i))
        	{
            	dem++;
            }
        }
	    if (dem)
	    {
	        cout << " Ky tu ' "<<(char)('a' + i) << " ' xuat hien " << dem << " lan !!! " << endl;
     	}
    }
    return 0;
}
