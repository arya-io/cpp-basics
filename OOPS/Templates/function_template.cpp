#include <iostream>
using namespace std;

template <class A>

void Print(A x, A y)
{

    cout << x << " " << y << endl;
}

int main()
{

    Print(10, 20);
    Print('a', 'b');
    Print(34.6, 45.1);
    Print("GM", "GN");

    return 0;
}