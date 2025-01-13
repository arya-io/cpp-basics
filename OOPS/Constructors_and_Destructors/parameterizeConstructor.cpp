#include <iostream>
using namespace std;

class A
{

public:
    A(int a, int b)
    {
        cout << a << ends << b;
    }
};

int main()
{

    A(100, 200);

    return 0;
}