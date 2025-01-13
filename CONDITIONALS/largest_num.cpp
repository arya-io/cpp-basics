#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "\nEnter three numbers: ";
    cin >> a >> b >> c;

    if (a > b & a > c)
    {
        cout << "\n";
        cout << a << " is greater.";
    }

    if (b > a & b > c)
    {
        cout << "\n";
        cout << b << " is greater.";
    }

    if (c > b & c > a)
    {
        cout << "\n";
        cout << c << " is greater.";
    }
    return 0;
}