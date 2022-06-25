#include<iostream>
using namespace std;

struct MATHANG
{
    string id;      // ma mat hang
    char name[30];  // ten mat hang
    int amount;		// so luong
    long price, money;		// don gia , thanh tien
};

typedef struct MATHANG MH;

// khoi tao cac ham nguyen mau
int check(float &n);
void inputMH(MH mh[], int n);
void heading();
void output1mh(MH &mh);
void outputMH(MH mh[], int n);
void intoMoney(MH mh[], int n);
void amount_under_50(MH mh[], int n);
