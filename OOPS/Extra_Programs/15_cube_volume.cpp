#include <iostream>
using namespace std;

class volume
{

    int side;

public:
    void input()
    {

        cout << "Enter side of cube: ";
        cin >> side;
    }

    void calculate()
    {

        cout << "The volume of cube is " << side * side * side << endl;
    }

    volume()
    {
        cout << "The constructor is called." << endl;
    }

    ~volume()
    {
        cout << "The destructor is called for " << side << endl;
    }
};

int main()
{

    volume obj, o;
    obj.input();
    obj.calculate();
    o.input();
    o.calculate();

    return 0;
}