#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

bool kiemtrasohoanhao(int n)		// ham kiem tra so hoan hao
{
    int i = 1;
    int S = 0;
    while(i < n)
    {
        if(n % i == 0)
        {
            S = S + i;
        }
        i++;
    }
    if(S == n)
        return true;
    else
        return false;
}

void Swap(int a[], int n)
{
	for(int i=0 ; i<n-1 ; i++)
	{
		for(int j=i+1 ; j<n ; j++)
		{
			if(a[i] < a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}

void ghitep1(int arr[],int length)
{
	fstream file("vao.txt",ios::out);		// yeu cau che do mo file de ghi
	file<<length<<endl;				// luu gia tri cua bien length vao file da mo
	for(int i=0 ; i<length ; i++)
	{
		cin>>arr[i];			// nhap cac gia tri cho mang
		file<<arr[i]<<" ";			// ghi cac gia tri vua nhap vao file
	}
	file.close();						// dong file
}

void doctep(int arr[], int length)
{
	fstream file2("vao.txt",ios::in);			// yeu cau che do mo file de doc
	file2>>length;							
	cout<<"Chieu dai cua mang la "<<length<<endl;
	for(int i=0 ; i<length ; i++)				// vi la biet truoc cac gia tri trong file nen dung vong for de doc cac gia tri torng file
	{
		file2>>arr[i];
		cout<<arr[i]<<" ";
	}
	file2.close();
}

void ghitep2(int arr[], int length)
{
	fstream file3("luu.txt",ios::out);
	int count(0);
	for(int i=0 ; i<length ; i++)
		if(kiemtrasohoanhao(arr[i])==1)
			count++;
	if(count==0)
	{
		file3<<"\nKhong co so hoan hao nao trong mang!\n";
	}
	else
	{
		file3<<"Cac so hoan thien co trong mang la: ";
		for(int i=0 ; i<length ; i++)
		{
			if(kiemtrasohoanhao(arr[i])==1)
			{
				file3<<arr[i]<<" ";
			}
		}
	}
	file3<<"\nMang sau khi sap xep theo thu tu giam dan: ";
	Swap(arr,length);
	for(int i=0 ; i<length ; i++)
	{
		file3<<arr[i]<<" ";			// ghi cac gia tri vua nhap vao file
	}
	file3.close();
}
int main()
{
	int length;
	cout<<"\nNhap chieu dai cua mang: ";
	cin>>length;
	int *arr = new int[length];			// cap phat mang dong
	ghitep1(arr,length);
	doctep(arr,length);
	ghitep2(arr,length);
	return 0;
}