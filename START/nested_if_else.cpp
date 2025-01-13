#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 20, c = 30;

    if (a > b)
    {
        if (a > c)
        {
            cout << "\na = " << a;
        }

        else
        {
            cout << "\nc = " << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "\nb = " << b;
        }

        else
        {
            cout << "\nc = " << c;
        }
    }

    return 0;
}