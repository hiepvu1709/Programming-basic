#include<iostream>
#include<string.h>
#include<cctype>
#include<cstdio>
using namespace std;

int main()
{
	char a[100];
	string b;
	cout<<"\nNhap vao mang ky tu (char):\n";
	cin.getline(a,100);
	cout<<"Nhap vao mot chuoi ky tu (string):\n";
	getline(cin,b);
	cout<<"\nMang ky tu (char) vua nhap la: "<<a<<endl;
	cout<<"\nChuoi ky tu vua nhap la: "<<b<<endl;
	cout<<"\nDo dai cua mang a la "<<strlen(a)<<endl;
	char ch{'b'};
	cout<<"\nMa ASCII cua b la "<<static_cast<int>(ch)<<endl;
	char c[12]=" DHTI15A2ND";
	cout<<strcat(a,c);
	int count = 0;
	for(int i=0 ; i<= strlen(a) ; i++)
	{
		if(isalpha(a[i]))  // ham isalpha kiem tra gia tri trong a co pahi la chu cai hay k
			count++;  // neu tim thay thi bien tang len 1
	}
	cout<<"\n"<<count;
	int dem = 0;
	for(int i=0 ; i<=strlen(a) ; i++)
	{
		if(isblank(a[i]))  // kiem tra khoang trang
			dem++;
	}
	cout<<"\n"<<dem;
	char str[] = "sdhgweg124235sdgsd235";
	cout<<"\nCac chu so co trong chuoi la: ";
	for(int i=0 ; i<=strlen(str) ; i++)
	{
		if(isdigit(str[i]))  // kiem tra xem 1 ky tu co phai la so hay k
			cout<<str[i]<<" ";
	}
	char s[] = "Hello\sdvdfb\vcbHow are you";
	cout<<"\nCac chu co the in duoc la: ";
	for(int i=0 ; i<=strlen(s) ; i++)
	{
		if(isprint(s[i]))
			cout<<s[i];
	}
	for(int i=0 ; i<=strlen(s) ; i++)
	{
		if(isupper(s[i]))
			cout<<s[i];
	}
//	for(int i=48 ; i<58 ; i++)
//	{
//		putchar(i);// viet ky tu co ma ASCII tu 48 den 58
//		putchar('');
//	}
	for(int i=0 ; i<= strlen(a) ; i++)
	{
		putchar(tolower(a[i]));// chu in hoa thanh chu thuong
	}
	for(int i=0 ; i<= strlen(a) ; i++)
	{
		putchar(toupper(a[i]));// chu thuong thanh chu in hoa
	}
	int q,i=0;
	char n[100];
	cout<<"\nNhap ky tu, nhan ENter de dung\n";
	do{
		q = getchar();
		n[i] = q;
		i++;
	}while(q != '\n');
	cout<<"\nCac ky tu vua nhap la: "<<n<<endl;
	return 0;
}
