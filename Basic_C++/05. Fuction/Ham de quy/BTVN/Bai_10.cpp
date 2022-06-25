#include<iostream>
#include<limits>
using namespace std;

int ucln(int m, int n)
{
	if(m==n)
	return m;
	else
	if(m>n)
	return ucln(m-n,n);
	else
	return ucln(m, n-m);
}

int main()
{
	float a,b,c;
	
	cout<<"Nhap a: ";cin>>a;
	
	do{
        if(!a || a<1 || a != (int)a)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"So nhap vao yeu cau la 1 so nguyen duong, vui long nhap lai: ";
            cin>>a;
        }
    }while(!a || a<1 || a != (int)a);
    
	cout<<"Nhap b: ";cin>>b;
	
	do{
        if(!b || b<1 || b != (int)b)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"So nhap vao yeu cau la 1 so nguyen duong, vui long nhap lai: ";
            cin>>b;
        }
    }while(!b || b<1 || b != (int)b);
    
	cout<<"Nhap c: ";cin>>c;
	
	do{
        if(!c || c<1 || c != (int)c)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"So nhap vao yeu cau la 1 so nguyen duong, vui long nhap lai: ";
            cin>>c;
        }
    }while(!c || c<1 || c != (int)c);
	
	cout<<"Uoc chung lon nhat = "<<ucln(ucln(a,b),c)<<endl;
}
