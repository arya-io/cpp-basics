#include <iostream>
using namespace std;

int count = 0;

class A
{

public:
    A()
    {

        cout << "Object " << ++count << " created." << endl;
    }

    ~A()
    {
        cout << "Object " << count-- << " deleted." << endl;
    }
};

int main()
{

    A obj, obj2, obj3, obj4;

    return 0;
}