#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"Chuong trinh in ra cac cach doi so tien t duoc nhap tu ban phim thanh cac to co menh 1000,2000,5000,10000.\n";
    long long n;
    int a,b,c,d,s=0;
    cout<<"Nhap vao so tien can doi: "; cin>>n;
    do{
    	if((!n)||(n<1))
    	{
    		cin.clear();
        	cin.ignore(numeric_limits<streamsize>::max(),'\n');
        	cout<<"Khong hop le, moi nhap so theo yeu cau: ";
        	cin>>n;
		}
	}while((!n)||(n<1));
    cout<<setw(15)<<"So to 1000"<<setw(15)<<"So to 2000"
        <<setw(15)<<"So to 5000"<<setw(15)<<"So to 10000\n";
        for(int a=0 ; a<=n/1000 ; a++)
        {
            for(int b=0 ; b<=n/2000 ; b++)
            
                for(int c=0 ; c<=n/5000 ; c++)
                
                    for(int d=0 ; d<=n/10000 ; d++)
                    
                        if(a*1000+b*2000+c*5000+d*10000 == n)
                        {
                            cout<<setw(15)<<a<<setw(15)<<b;
                            cout<<setw(15)<<c<<setw(15)<<d<<endl;
                            s++;
                        }
    	}
    cout<<"Co tat ca "<<s<<" cach doi.\n";
}
