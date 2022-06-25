//Vu Xuan Hiep - DHTI15A2ND

#include <iostream>
#include <conio.h>
#include <limits>
#include <iomanip>
#include <string.h>
using namespace std;

struct STUDENT
{
    string id;       // ma nhan vien
    char name[40];   // ten nhan vien
    float scoreMATH;    // diem toan
    float scorePhy;     // diem ly
    float scoreChem;    // diem hoa
    float scoreAverage; // diem trung binh
    char rank[12];      // xep loai
};
typedef struct STUDENT ST;

int check(float &n);
void heading();
void input(ST s[], int n);
void ScoreAverage(ST s[], int n);
void Rank(ST s[], int n);
void output1ST(ST &s);
void outputST(ST s[], int n);
void outputRank(ST s[], int n);

int main()
{
    ST s[50];
    float m;
    cout << "\n\tMOI NHAP SO HOC SINH CAN NHAP VAO DANH SACH: ";
    cin >> m;
    check(m);
    int n = (int)m;
    input(s, n);
    outputST(s, n);
    outputRank(s, n);
    delete[] s;
    return 0;
}

int check(float &n)
{
    do
    {
        if (!n || n != (int)n || n < 0 || n > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen duong lon hon 0, moi nhap lai: ";
            cin >> n;
        }
    } while (!n || n != (int)n || n < 0 || n > 100);
}

void input(ST s[], int n)
{
    cout << "\n\t\tMoi nhap thong tin " << n << " hoc sinh\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\tThong tin hoc sinh thu " << i + 1 << " :\n";
        fflush(stdin);
        do
        {
            cout << "\n\tMa hoc sinh (gioi han 14 ky tu): ";
            getline(cin, s[i].id);
            if (s[i].id.length() > 14)
            {
                cout << "\n\tKhong hop le, vui long kiem tra lai!\n";
            }
        } while (s[i].id.length() > 14);

        cout << "\n\tHo va ten: ";
        cin.getline(s[i].name, 40);

        do{
            cout << "\n\tDiem Toan: ";
            cin >> s[i].scoreMATH;
            if (cin.fail() || s[i].scoreMATH < 0 || s[i].scoreMATH > 10)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\tThang diem mon toan la mot so nam trong doan tu 0 den 10 diem.\n"
                     << "\n\tDu lieu ban vua nhap khong hop le, vui long kiem tra lai.\n";
            }
        } while (cin.fail() || s[i].scoreMATH < 0 || s[i].scoreMATH > 10);
        do
        {
            cout << "\n\tDiem Ly: ";
            cin >> s[i].scorePhy;
            if (cin.fail() || s[i].scorePhy < 0 || s[i].scorePhy > 10)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\tThang diem mon ly la mot so nam trong doan tu 0 den 10 diem.\n"
                     << "\n\tDu lieu ban vua nhap khong hop le, vui long kiem tra lai.\n";
            }
        } while (cin.fail() || s[i].scorePhy < 0 || s[i].scorePhy > 10);
        do
        {
            cout << "\n\tDiem Hoa: ";
            cin >> s[i].scoreChem;
            if (cin.fail() || s[i].scoreChem < 0 || s[i].scoreChem > 10)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n\tThang diem mon hoa la mot so nam trong doan tu 0 den 10 diem.\n"
                     << "\n\tDu lieu ban vua nhap khong hop le, vui long kiem tra lai.\n";
            }
        } while (cin.fail() || s[i].scoreChem < 0 || s[i].scoreChem > 10);
    }
}

void ScoreAverage(ST s[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        s[i].scoreAverage = (s[i].scoreMATH + s[i].scorePhy + s[i].scoreChem) / 3;
    }
}

void Rank(ST s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if(s[i].scoreAverage >= 9)
            strcpy(s[i].rank, "Xuat Sac");
        else 
            if(s[i].scoreAverage >= 8)
                strcpy(s[i].rank, "Gioi");
            else 
                if(s[i].scoreAverage >= 6.5)
                    strcpy(s[i].rank, "Kha");
                else 
                    if(s[i].scoreAverage >= 5)
                        strcpy(s[i].rank, "Trung binh");
                    else 
                        if(s[i].scoreAverage < 5)
                        strcpy(s[i].rank, "Yeu");
    }
}

void heading()
{
    cout << "\n+-----+---------------+-------------------------+-----------+---------+----------+-----------------+--------------+"
         << "\n| STT |  MA HOC SINH  |        HO VA TEN        | DIEM TOAN | DIEM LY | DIEM HOA | DIEM TRUNG BINH |   XEP LOAI   |"
         << "\n+-----+---------------+-------------------------+-----------+---------+----------+-----------------+--------------+\n";
}
void output1ST(ST &s)
{
    cout << "|" << setw(15) << s.id
         << "|" << setw(25) << strupr(s.name)
         << "|" << setw(11) << s.scoreMATH
         << "|" << setw(9) << s.scorePhy
         << "|" << setw(10) << s.scoreChem
         << "|" << setw(17) << s.scoreAverage
         << "|" << setw(14) << s.rank << "|"
         << "\n+-----+---------------+-------------------------+-----------+---------+----------+-----------------+--------------+\n";
}

void outputST(ST s[], int n)
{
    ScoreAverage(s,n);
    Rank(s,n);
    heading();
    for (int i = 0; i < n; i++)
    {
        cout << "|" << setw(5) << i + 1;
        output1ST(s[i]);
    }
}

void outputRank(ST s[], int n)
{
    ScoreAverage(s, n);
    Rank(s, n);
    int count(0);
    for (int i = 0; i < n; i++)
    {
        if ((strcmp(s[i].rank, "Xuat Sac") == 0) || (strcmp(s[i].rank, "Gioi") == 0))
            count++;
    }
    if(count!=0)
    {
        cout << "\n\tDANH SACH CAC HOC SINH XEP LOAI XUAT SAC VA GIOI \n";
        heading();
        for (int i = 0; i < n; i++)
        {
            if ((strcmp(s[i].rank, "Xuat Sac") == 0) || (strcmp(s[i].rank, "Gioi") == 0))
            {
               cout << "|" << setw(5) << i + 1;
                output1ST(s[i]);
            }
        }
    }else{
        cout << "\n\tKHONG CO HOC SINH NAO XEP LOAI XUAT SAC VA GIOI!";
    }
}
