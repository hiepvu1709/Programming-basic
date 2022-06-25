#include<iostream>
#include<limits>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap chieu cao:";
	cin>>n;
	if(!cin || n<0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Khong hop le, moi nhap so theo yeu cau: ";
        cin>>n;
    }
	for(int i=0; i<n; i++)
	{	
		for(int j=0; j<n; j++)
		{
			if(j==0||i==n-1||i==j)
			{
				cout<<"*";
			}
			else
				cout<<" ";	
		}
		cout<<endl;
	}
	return 0;
}
