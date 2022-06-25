#include <iostream>
#include<limits>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: "; cin>>n;
	if(!cin || n<0)
	{
		cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Khong hop le, moi nhap so theo yeu cau: ";
        cin>>n;
	}	
	
	cout<<"Cac so nguyen to trong pham vi "<<n<<" la:\n";
	for (int i=2; i<=n; i++)
	{ 
		int count = 0; //count de dem cac uoc cua i
		for(int j =1; j<=i; j++)
 			if(i%j == 0) count++; 
			if(count == 2) cout<<i<<"\t";	
	}
	return 0;
}
