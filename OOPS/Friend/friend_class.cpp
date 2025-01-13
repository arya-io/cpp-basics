#include <iostream>
using namespace std;

class A
{

    int a, b;

public:
    void input()
    {

        a = 10;
        b = 20;
    }

    friend class B;
};

class B
{

    int c;

public:
    void add(A r)
    {

        c = r.a + r.b;

        cout << "The sum of a and b is " << c << endl;
    }
};

int main()
{
    A d;

    d.input();

    B obj;

    obj.add(d);

    return 0;
}