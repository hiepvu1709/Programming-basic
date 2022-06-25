#include<cstdlib>  
#include<ctime>  
#include<iostream> 
using namespace std;
#define MAX 5  

void nhapMang(int arr[], int &n)
{
	srand(time(NULL));
	cout << "Nhap so luong phan tu n : ";   cin >> n;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void xuatMang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = " << arr[i] << endl;
	}
}
void coppyArray(int arrDest[], int arrSource[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arrDest[i] = arrSource[i];
	}
}
int timKiemPhanTuDauTien(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			return i;
	}
	
	return -1;
}
int main()
{
	int a1[MAX],n,x;
	
	nhapMang(a1,n);
	
	cout << "myArray: " << endl;
	xuatMang(a1,n);
	
	int a2[MAX];
	coppyArray(a2,a1,n);
	cout << "myArray2: " << endl;
	xuatMang(a2,n);
	
	cout<<"Nhap phan tu x can tim: ";  cin>>x;
	int idx = timKiemPhanTuDauTien(a1,n,x);
	if(idx != 1)
		cout<<x<<" anm o vi tri thu "<<idx<<endl;
	return 0;
}
