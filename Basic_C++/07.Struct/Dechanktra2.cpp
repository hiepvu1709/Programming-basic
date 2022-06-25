#include<iostream>
#include<fstream>
#include<algorithm>
#include<cmath>
using namespace std;

int KiemTraNguyenTo(int n)
{
    if (n < 2)
        return 0;
    else 
		if (n > 2)
	    {
	        if (n % 2 == 0)
	        {
	            return 0;
	        }
	        for (int i = 3; i <= sqrt((float)n); i += 2)
	        {
	            if (n % i == 0)
	                return 0;
	        }
	    }
    return 1;
}

void ghitep1(int arr[],int length)
{
	fstream file("input.txt",ios::out);			// yeu cau che do mo file de ghi
	file<<length<<endl;							// luu gia tri cua bien length vao file da mo
	for(int i=0 ; i<length ; i++)
	{
		cout<<"Gia tri thu "<<i+1<<": ";
		cin>>arr[i];							// nhap cac gia tri cho mang
		file<<arr[i]<<" ";						// ghi cac gia tri vua nhap vao file
	}
	file.close();								// dong file
}

void doctep(int arr[], int length)
{
	fstream file2("input.txt",ios::in);				// yeu cau che do mo file de doc
	file2>>length;							
	cout<<"Chieu dai cua mang la "<<length<<endl;
	for(int i=0 ; i<length ; i++)					// vi la biet truoc cac gia tri trong file nen dung vong for de doc cac gia tri torng file
	{
		file2>>arr[i];
		cout<<arr[i]<<" ";
	}
	file2.close();
}

void ghitep2(int arr[], int length)
{
	fstream file3("output.txt",ios::out);
	int count1(0);
	int sum = 0;
	for(int i=0 ; i<length ; i++)
		if(i % 2 != 0)
			count1++;
	if(count1==0)
	{
		file3<<"\nKhong co so le nao trong mang!\n";
	}
	else
	{
		for(int i=0 ; i<length ; i++)
		{
			if(arr[i] % 2 != 0)
			{
				count1++;
				sum+=arr[i];
			}
		}
		file3<<"\nTrung binh cac so le trong mang bang "<<(float)sum/count1<<endl;
	}
	
	int count2(0);
	for(int i=0 ; i<length ; i++)
		if(KiemTraNguyenTo(arr[i])==1)
			count2++;
	if(count2==0)
	{
		cout<<"\nKhong co so nguyen to nao trong mang!";
	}else{
		int count3(0);
		file3<<"\nCac so nguyen to trong mang la: ";
		for(int i=0 ; i<length ; i++)
		{
			if(KiemTraNguyenTo(arr[i])==1)
			{
				file3<<arr[i]<<" ";
				count3++;
			}
		}
		file3<<"\nCo tat ca "<<count3<<" so nguyen to trong mang!";
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