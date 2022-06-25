/* Y tuong them
	- Day cac phan tu bat dau tai vi tri idx sang phai 1 don vi
	- Dua x vao vi tri idx
	- Tang n len 1 don vi
   Y tuong xoa
    - “Kéo” các phan tu bên phai vi trí idx sang trái 1 vi trí.
    - Giam n xuong 1 don vi.*/

#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <string>
using namespace std;
#define MAX 1000
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
void addArray(int a[], int &n, int idx, int x)
{
	if (idx >= 0 && idx <= n)
	{
		for (int i = n; i > idx; i--)
			a[i] = a[i - 1];
		a[idx] = x;
		n++;
	}
}
void xoaMotPhanTuTrongMang(int a[], int &n, int idx)
{
	if (idx >= 0 && idx < n)
	{
		for (int i = idx; i < n - 1; i++)
			a[i] = a[i + 1];
		n--;
	}
}
int main()
{
	int a[MAX],n;

	nhapMang(a,n);

	cout << "myArray: " << endl;
	xuatMang(a, n);

	int idx1;
	cout << "Nhap vi tri can them: ";
	cin >> idx1;

	int x;
	cout << "Nhap gia tri can them: ";
	cin >> x;
	addArray(a, n, idx1, x);

	cout << "myArray: " << endl;
	xuatMang(a,n);
	
	int idx2;
	cout << "Nhap vi tri can xoa: ";
	cin >> idx2;
	
	xoaMotPhanTuTrongMang(a,n,idx2);
	cout << "myArray: " << endl;
	xuatMang(a,n);
	return 0;
}
