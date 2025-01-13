#include <iostream>
using namespace std;

class swapn
{

    int a, b;

public:
    void input()
    {

        cout << "Enter num1: ";
        cin >> a;

        cout << "Enter num2: ";
        cin >> b;
    }

    void swapnum()
    {

        int c = a;
        a = b;
        b = c;

        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{

    swapn obj;
    obj.input();
    obj.swapnum();

    return 0;
}