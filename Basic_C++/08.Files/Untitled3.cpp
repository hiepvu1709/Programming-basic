#include<iostream>
#include<fstream>
using namespace std;

void doctep( int &m, int &n)
{
	fstream file("D:\\Code\\File Code\\Code_user\\08.Files\\ecg.txt",ios::in);
	file>>m>>n;
	file.close();
}

int UCLN(int &m, int &n)
{
	while(m!=n)
		if(m>n)
			m = m - n;
		else
			n = n - m;
	return m;
}

int main()
{
	int a,b;
	doctep(a,b);
	fstream file2("luu.txt",ios::out);
	file2<<"UCLN = "<<UCLN(a,b);
	file2.close();
	cout<<"\nLuu tep thanh cong!";
	return 0;
}
