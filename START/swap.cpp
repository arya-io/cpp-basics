#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore swapping:\n";
    cout << "a = " << a << " b = " << b;

    int c = a;
    a = b;
    b = c;

    cout << "\n\nAfter swapping:\n";
    cout << "a = " << a << " b = " << b;

    return 0;
}