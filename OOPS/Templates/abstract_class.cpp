#include <iostream>
using namespace std;

class Animal
{
    virtual void sound() = 0;
};

class Dog : public Animal
{

public:
    void sound()
    {

        cout << "Woof Woof" << endl;
    }
};

int main()
{

    Dog d;
    d.sound();
    return 0;

    return 0;
}