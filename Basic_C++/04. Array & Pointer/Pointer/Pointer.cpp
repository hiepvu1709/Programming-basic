#include<iostream>
using namespace std;

int main()
{
	int n = 10;
	cout<<"Gia tri cua n: "<<n<<endl;  
	cout<<"\nDia chi cua n: "<<&n<<endl;   // in ra dia chi bien
	
	int *iPtr = &n;
	cout<<"\nGia tri cua con tro: "<<*iPtr<<endl; // con tro dia chi nen khi muon lay gia tri ra thi them dau *
	cout<<"\nDia chi cua con tro: "<<iPtr<<endl;  // in ra dia chi con tro
	
	*&n = 20;
	cout<<"\nGia tri cua n sau khi thay doi gia tri n: "<<n<<endl;
	cout<<"\nGia tri cua con tro sau khi thay doi gia tri n: "<<*iPtr<<endl;
	cout<<"\nDia chi cua n sau khi thay doi gia tri n: "<<&n<<endl;   // chac chan la van giu nguyen boi vi dia chi la co dinh cua 1 bien
	cout<<"\nDia chi cua con tro sau khi thay doi gia tri cua n: "<<iPtr<<endl;  // khi tahy doi gia tri cua 1 bien thi de k anh huong den dia chi cua bien
	
	*iPtr = 100;
	cout<<"\nGia tri cua n sau khi thay doi gia tri con tro: "<<n<<endl;   // n=100 boi vi con tro iPtr va n co cung 1 dia chi 
	cout<<"\nGia tri cua con tro sau khi thay doi gia tri con tro: "<<*iPtr<<endl;  //cho nen khi thay doi gia tri cua 1 trong 2 bien thi bien con lai cung se thay doi

	int x=25;
	cout<<"\nGia tri ban dau cua x: "<<x<<endl;
	iPtr = &x;
	x += 100;
	cout<<"\nDia chi cua x: "<<&x<<endl;
	cout<<"\nDia chi cua n: "<<&n<<endl;         // con dia chi cua bien n thi van giu nguyen 
	cout<<"\nGia tri cua x sau khi tro: "<<*iPtr<<endl;
	
	cout<<"\nDia chi cua con tro: "<<iPtr<<endl; // dia chi cua bien con tro luc nay da la dia chi cua bien x
	cout<<"\nDia chi cua so nguyen tiep theo trong bo nho sau iPtr: "<<iPtr+1<<endl;  // iPtr+ 1 tra ve dia chi vung nho cua doi tuong tiep theo thuoc kieu ma iPtr tro toi
	cout<<"\nDia chi cua so nguyen truoc do trong bo nho truoc iPtr: "<<iPtr-1<<endl; // vd kieu int thi se ta ve kieu int
	return 0;
}
