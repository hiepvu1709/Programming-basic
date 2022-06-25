#include<iostream>
#include<limits>
#include<stdlib.h>
using namespace std;

int check(char* a)
{
	int i=0;
	while(a[i]!=NULL)
	{
		if(a[i]<'0' || a[i] > '9')
		return 0;
		i++;
	}
	return 1;
}

int main() {
	char a[10];
	cout<< "Nhap so n: ";  cin>>a;
	do{
		if(!check(a))
		{
			cout<<"\nKhong hop le, moi nhap lai: ";  cin>>a;
		}
	}while(!check(a));
    int so, docso;
    so = atoi(a);
    cout << so << " doc thanh chu la ";
    while(so != 0) {
        docso = (docso * 10) + (so % 10);
        so /= 10;
    }
    while(docso != 0) {
        switch(docso % 10) {
            case 0: 
                cout << "Khong ";
                break;
            case 1: 
                cout << "Mot ";
                break;
            case 2: 
                cout << "Hai ";
                break;
            case 3: 
                cout << "Ba ";
                break;
            case 4: 
                cout << "Bon ";
                break;
            case 5: 
                cout << "Nam ";
                break;
            case 6: 
                cout << "Sau ";
                break;
            case 7: 
                cout << "Bay ";
                break;
            case 8: 
                cout << "Tam ";
                break;
            case 9: 
                cout << "Chin ";
                break;
        }
        docso = docso / 10;
    }
    return 0;
}
