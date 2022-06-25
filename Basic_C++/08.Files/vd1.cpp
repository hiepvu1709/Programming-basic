#include<iostream>
#include<fstream>
using namespace std;

void doctep(ifstream &file)
{
	string str;
	while(getline(file,str))
	{
		cout<<str<<" ";
	}
}

int main()
{
	fstream file("so_le.txt",ios::in);
	doctep(file);
	return 0;
}