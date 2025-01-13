#include <iostream>
using namespace std;

class dis
{

private:
    int meter;

    friend int addFive(dis);

public:
    dis() : meter(0)
    {
    }
};

int addFive(dis d)
{
    d.meter += 5;

    return d.meter;
}

int main()
{

    dis d;

    cout << "Distance: " << addFive(d);

    return 0;
}