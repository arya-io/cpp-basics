#include <iostream>
using namespace std;

int main()
{

    int a, b, *p, *q;

    cout << "\nEnter a: ";
    cin >> a;

    cout << "\nEnter b: ";
    cin >> b;

    p = &a;
    q = &b;

    cout << "\nThe sum of " << a << " and " << b << " is " << *p + *q;

    return 0;
}