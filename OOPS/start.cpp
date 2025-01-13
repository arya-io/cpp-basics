#include <iostream>
using namespace std;

class print
{
    public:

    void show()
    {
        cout << "Welcome to Object Oriented Programming." << endl;
    }
};

int main()
{

    print obj;

    obj.show();

    return 0;
}