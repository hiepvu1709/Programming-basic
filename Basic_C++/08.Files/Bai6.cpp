#include<iostream>
#include<fstream>
using namespace std;

void doctep( int &x, int &y, int &z)
{
	ofstream filein("in6.txt");
	cin>>x>>y>>z;
	filein<<x<<" "<<y<<" "<<z;
	filein.close();
}

int max(int a, int b, int c)
{ 
	int m = a;
	if (m<b) m = b;
	if (m<c) m = c;
	return m;
}

int min(int a, int b, int c)
{ 
	int m = a;
	if (m>b) m = b;
	if (m>c) m = c;
	return m;
}

void ghitep(int &x, int &y, int &z)
{
	ofstream f2("out6.txt");
	f2<<"\n"<<"So lon nhat trong 3 so la: "<<max(x,y,z);
	f2<<"\n"<<"So nho nhat trong 3 so la: "<<min(x,y,z);
	cout<<"\nDa ghi xong tep!"<<endl;
	f2.close();
}
int main()
{
	int a,b,c;
	doctep(a,b,c);
	ghitep(a,b,c);
	return 0;
}
