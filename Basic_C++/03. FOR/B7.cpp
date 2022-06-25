#include<iostream>
using namespace std;
int main()
{
	cout<<"Cac so co 4 chu so ma tong hai chu so dau bang tong hai chu so cuoi la: \n";
	int s=0;
    for(int i=1000 ; i<=9999 ; i++)
    {
        int a,b,c,d;
        a=i/1000;
        b=(i%1000)/100;
        c=(i%100)/10;
        d=i%10;
        if(a+b==c+d)
        {
            cout<<i<<" ";
            s++;
        }
    }
    cout<<"\nCo tat ca "<<s<<" so.\n";
    return 0;
}
