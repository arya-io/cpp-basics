#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 20, *p, *q;
    p = &a;
    q = &b;

    int temp = *p;
    *p = *q;
    *q = temp;

    cout << "\na = " << a;
    cout << "\nb = " << b;

    return 0;
}