#include <iostream>
using namespace std;

template <class A>

class Print
{

public:
    Print(A x, A y)
    {

        cout << x << " " << y << endl;
    }
};

int main()
{

    Print<int> obj(100, 200);

    return 0;
}