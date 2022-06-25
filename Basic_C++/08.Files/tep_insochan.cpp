#include<fstream>
#include<iostream>
using namespace std;

void GhiSoChan(ofstream &file)
{
	int dem=0;
	file<<"Day so chan tu 1 dem 100 \n";
	for(int a=1 ; a<= 100 ; a++)
	{
		if(a%2 == 0)
		{
			dem++;
			file<<a;
		}
		if(dem % 10 == 0)  file<<"\n";
		if(dem % 10 != 0)  file<<"\t";
	}
	cout<<"Da ghi tep";
}

int main()
{
	ofstream f("so_chan.txt");
	if(!f)
	{
		cout<<"Khong the ghi tep";
		exit(1);
	}
	GhiSoChan(f);
	f.close();
	return 0;
}
