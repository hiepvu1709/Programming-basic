#include<iostream>
#include<string.h>
#include<cctype>
#include<cstdio>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string a;
	cout<<"\nNhap chuoi ky tu a: ";
	getline(cin,a);
	cout<<"\nChuoi ky tu vua nhap la: "<<a<<endl;
	int len1 = a.length();
	cout<<"\nDo dai cua chuoi '"<<a<<"' la "<<len1<<endl;
	cout<<"\nChuoi con : "<<a.substr(1,7)<<endl;
	string a1 = "Whyserious?";
	string b1 = "monsoon";
	a1.insert(3,2,' ').insert(4,b1,3,2);
	cout<<a1<<endl;
	string a2 = "I've got a feeling we're not in Kansas anymore";
	a2.erase(38,8).erase(25,4);
	cout<<a2<<endl;
	string b;
	cout<<"\n Nhap chuoi ky tu b: ";
	cin>>b;
	if(a.compare(b)==0)  // doi cac ky tu ve dang bang ma ASCII 
	{
		cout<<"\nChuoi a = chuoi b\n";
	}else if(a.compare(b) > 0)
	{
		cout<<"\nChuoi a > chuoi b\n";
	}else{
		cout<<"\nChuoi a < chuoi b\n";
	}
	string c = "IamHiep";
	if(c.empty())
		cout<<"\nChuoi rong";
	else
		cout<<"\nChuoi khong rong";
	cout<<"\ntruoc khi xoa : "<<c<<endl;
	c.clear();
	cout<<"\nSau khi xoa: "<<c<<endl;
	string d = "Iamstudent";
	cout<<"\nChuoi d la "<<d<<endl;
	//cout<<"\nPhan tu thu 1: "<<d.front()<<endl;
	cout<<"\nPhan tu thu 2: "<<d[1]<<endl;
	cout<<"\nPhan tu thu 3: "<<d.at(2)<<endl;
	//cout<<"\nPhan tu thu 4: "<<d.back()<<endl;
//	string d1 = "Iamstudens";
//	d1.pop_back();
//	d1.push_back('t');
//	cout<<"\n"<<d1;
	string d2 = "com";
	d.append(".");
	d += d2;
	cout<<"\n"<<d;
	reverse(d.begin(),d.end());
	cout<<"\nChuoi dao nguoc lan 1: "<<d;
	reverse(d.begin(),d.end());
	cout<<"\nChuoi dao nguoc lan 2: "<<d;
	d.replace(4,3,"mon");
	cout<<"\nChuoi sau khi thay the la "<<d;
}
