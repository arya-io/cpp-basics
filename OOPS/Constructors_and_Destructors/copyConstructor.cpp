#include <iostream>
using namespace std;

class A
{

    int x, y;

public:
    A(int a, int b) // parameterize constructor
    {
        x = a;
        y = b;
        cout << a << ends << b;
    }

    A(A &ref) // copy constructor
    {
        x = ref.x;
        y = ref.y;
        cout << x << ends << y;
    }
};

int main()
{

    A obj1(10, 20);
    A obj2 = obj1;

    return 0;
}