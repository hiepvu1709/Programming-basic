#include<iostream>
#include<limits>
using namespace std;

int main()
{
	int n;
	cout<<"Moi nhap vao mot so nguyen gom hai chu so: ";
	cin>>n;
	int a = n/10;
	int b = n%10;
	if(!cin || n<0 || n>99)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Khong hop le, moi nhap lai: ";
		cin>>n;
	}else{
		cout<<"So ban vua nhap duoc doc la: ";
		switch(a)
		{
			case 1: cout<<"Muoi "; break;
			case 2: cout<<"Hai muoi "; break;
			case 3: cout<<"Ba muoi "; break;
			case 4: cout<<"Bon muoi "; break;
			case 5: cout<<"Nam muoi "; break;
			case 6: cout<<"Sau muoi "; break;
			case 7: cout<<"Bay muoi "; break;
			case 8: cout<<"Tam muoi "; break;
			case 9: cout<<"Chin muoi "; break;
		}
		switch(b)
		{
			case 0: break;
			case 1: cout<<"mot."; break;
			case 2: cout<<"hai."; break;
			case 3: cout<<"ba."; break;
			case 4: cout<<"bon."; break;
			case 5: cout<<"nam."; break;
			case 6: cout<<"sau."; break;
			case 7: cout<<"bay."; break;
			case 8: cout<<"tam."; break;
			case 9: cout<<"chin."; break;
		}
	}
}
