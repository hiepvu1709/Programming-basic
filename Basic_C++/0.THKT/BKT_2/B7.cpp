#include<iostream>
#include<limits>
#include<cctype>
using namespace std;

// chia nguyen va chia lay du de tach tung so tu phai qua trai roi dua dua len dau , tach den het
int timsodao(int n)
{
	int sodao = 0, tmp;  // tmp la bien de luu bo nho
	
	while(n!=0)
	{
		// lay ra chu so cuoi 
		tmp = n % 10;
		
		// nhan ket qua voi 10, cong voi so cuoi vua tach
		sodao = (sodao * 10) + tmp;
		
		//xoa so cuoi
		n = n/10;
	}
	return sodao;
} 

bool KTSDX(int n)
{
	return (n == timsodao(n)); 
}

int KTSN(float &n)
{
	do{
		if(!n || n !=(int)n)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nSo nhap vao yeu cau la mot so nguyen, moi nhap lai: ";
			cin>>n;
		}
	}while(!n || n !=(int)n);
}

void CT(float n)
{
	cout<<"\n\t-CHUONG TRINH KIEM TRA SO DOI XUNG-\n";
	char t = 'Y';
	while (toupper(t) == 'Y')
	{
		cout<<"Nhap gia tri( SO NHAP VAO TOI DA 6 CHU SO ): "; cin>>n;  KTSN(n);
		if(KTSDX(n)){
			cout<<n<<" la so doi xung!\n";
		}else{
			cout<<n<<" khong la so doi xung!\n";
		}
		cout << "\nBan muon thu lai khong ? (Y/N): ";
        cin >> t;
	}
}

int main()
{
	float n;
	CT(n);
	return 0;
}
