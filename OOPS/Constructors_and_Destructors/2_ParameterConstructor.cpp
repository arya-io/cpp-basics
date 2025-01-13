#include <iostream>
using namespace std;

class A
{
public:
    A(double a)
    {
        cout<<a;
    }
};

int main()
{

    A obj = A(20);

    return 0;
}