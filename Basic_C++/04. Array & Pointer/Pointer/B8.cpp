#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[100];
    delete[] p;
}
