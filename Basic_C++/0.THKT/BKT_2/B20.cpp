#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>
using namespace std;

int check(float &n)
{
    do
    {
        if (!n || n != (int)n || n < 0 || n > 100000)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nSo nhap vao yeu cau la mot so nguyen , moi nhap lai: ";
            cin >> n;
        }
    } while (!n || n != (int)n || n < 0 || n > 100000);
}

void enterAnInteger(int &n) // bat loi so thuc khi nhap gia tri trong mang 2 chieu
{
    float a;
    cin >> a;
    while (cin.fail() || a != (int)a)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nSo nhap vao yeu cau la mot so nguyen, moi nhap lai: ";
        cin >> a;
    }
    n = a;
}

void input(int b[], int &m)
{
    cout << "\n\t *CHU Y: CAC SO NHAP VAO PHAI THEO THU TU TANG DAN*\n";
    cout << "\nMoi nhap day so:\n";
    int i = 0;
    while (i < m)
    {
        cout << "\n"
             << setw(7) << "So thu " << i + 1 << "(SO NHAP VAO TOI DA 6 CHU SO ): ";
        enterAnInteger(b[i]);
        if (i > 0 && b[i] <= b[i - 1])
            continue;
        i++;
    }
}
void output(int b[], int &m)
{
    for (int i = 0; i < m; i++)
    {
        cout << setw(5) << b[i] << "\t";
    }
}

void ChenXVaoMangTang(int a[], int &n, float &x)
{
    cout << "\nNhap phan tu muon them ( SO NHAP VAO TOI DA 6 CHU SO ): ";
    cin >> x;
    while (!x || x != (int)x || x > 100000)
    {
        if (!x)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nBan nhap sai dinh dang, moi nhap lai: ";
            cin >> x;
        }
        if (x != (int)x)
        {
            cout << "\nSo nhap vao yeu cau la so nguyen, moi nhap lia: ";
            cin >> x;
        }
        if (x > 100000)
        {
            cout << "\nBan chi duoc nhap toi da 6 chu so, moi nhap lai: ";
            cin >> x;
        }
    }
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (x < a[i])
        {
            int temp = x;
            for (j = n; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i] = temp;
            break;
        }
    }
    n++;
    cout << "\nDay so sau khi them la: ";
    output(a, n);
}

int main()
{
    float b, k;
    int n;
    char t = 'Y';
    while (toupper(t) == 'Y')
    {
        cout << "\n\t- CHUONG TRINH NHAP VAO MOT DAY SO GOM n SO NGUYEN VA TIM SO LON NHAT ROI IN RA VI TRI CUA SO LON NHAT - \n";
        cout << "\nNhap so phan tu cua day so( SO NHAP VAO TOI DA 6 CHU SO ): ";
        cin >> b;
        check(b);
        n = (int)b;
        int a[n];
        input(a, n);
        cout << "\nCac so vua nhap la:\n";
        output(a, n);
        ChenXVaoMangTang(a, n, k);
        cout << "\nBan co muon thu lai khong? (Y/N) : ";
        cin >> t;
    }
    return 0;
}
