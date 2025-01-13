#include <iostream>
using namespace std;

class A
{

public:

    void Person()
    {

        cout << "Good Morning" << endl;
    }
};

class B : public A
{

public:
    void Person()
    {

        cout<<"Good Night"<<endl;
    }
};

int main()
{

    B obj;
    obj.Person();

    obj.A :: Person();

    return 0;
}