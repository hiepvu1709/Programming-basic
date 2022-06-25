#include<iostream>
using namespace std;

int main()
{
    int n;
    int k, t;
    int x = 12;
    cout << "\nNhap so phan tu cua mang: ";
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    cout << "\nMoi nhap vi tri can coa: ";
    cin >> k;
    for (int i = k; i<n ; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
	
    cout << "\nMoi nhap vi tri can chen: ";
    cin >> t;
    for (int i = n; i >= t; i--)
    {
        a[i] = a[i - 1];
    }
	a[t] = x;
	
    
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}

