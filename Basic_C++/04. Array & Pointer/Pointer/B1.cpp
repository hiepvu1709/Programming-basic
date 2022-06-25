#include <iostream>
using namespace std;

int main()
{
    int a = 10; // khai bao bien nguyen
    int *p;     // khai bao bien con tro p
    p = &a;     // luu tru dia chi cua a vao bien con tro p
    cout << "\nGia tri cua bien a la: " << a << endl;
    cout << "\nDia chi duoc luu tru trong bien con tro p la: " << p << endl;
    // truy cap gia tri co san tai dia chi cua bien con tro
    cout << "\nGia tri cua *p la: " << *p << endl;
    return 0;
}
