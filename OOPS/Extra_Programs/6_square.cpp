#include <iostream>
using namespace std;

class square
{
    float n1;
    int n2;

public:
    inline void input()
    {

        cout << "Enter number for float square: ";
        cin >> n1;

        cout << "Enter number for integer square: ";
        cin >> n2;
    }
    inline void float_square()
    {

        cout << "The square of float is " << n1 * n1 << endl;
    }

    inline void int_square()
    {

        cout << "The square of int is " << n2 * n2 << endl;
    }
};

int main()
{

    square obj;
    obj.input();
    obj.float_square();
    obj.int_square();

    return 0;
}