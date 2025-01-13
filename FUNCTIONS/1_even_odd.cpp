#include <iostream>
using namespace std;

void evenodd(int a)
{

    if (a % 2 == 0)
    {
        cout << a << " is even.";
    }
    else
    {
        cout << a << " is odd.";
    }
}

int main()
{

    evenodd(7);

    return 0;
}