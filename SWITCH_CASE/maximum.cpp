#include <iostream>
using namespace std;

int main()
{

    int a, b, c, max;

    cout << "\nEnter three numbers: ";
    cin >> a >> b >> c;

    if (a > b & a > c)
    {
        max = 1;
    }

    if (b > a & b > c)
    {
        max = 2;
    }

    if (c > b & c > a)
    {
        max = 3;
    }

    switch (max)
    {
    case 1:
        cout << "\n";
        cout << a << " is greater.";
        break;
    case 2:
        cout << "\n";
        cout << b << " is greater.";
        break;
    case 3:
        cout << "\n";
        cout << c << " is greater.";
        break;

    default:
        break;
    }

    return 0;
}