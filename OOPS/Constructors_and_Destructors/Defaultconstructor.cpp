#include <iostream>
using namespace std;

class A
{

    int a, b;

public:
    A()
    {
        a = 10;
        b = 20;

        cout << a << endl;
        cout << b << endl;
    }
};

int main()
{

    A o;

    return 0;
}