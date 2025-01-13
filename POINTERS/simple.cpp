#include <iostream>
using namespace std;

int main()
{

    int *p, a = 10;
    p = &a;

    cout << &a << endl;
    cout << p << endl;
    cout << "a = " << a << endl;
    cout << "p = " << *p << endl;

    return 0;
}