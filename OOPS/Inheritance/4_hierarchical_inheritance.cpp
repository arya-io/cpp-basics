#include <iostream>
using namespace std;

class Animal
{

public:
    void eat()
    {

        cout << "Animal is eating." << endl;
    }
};

class Cat : public Animal
{

public:
    void voice()
    {

        cout << "Meow Meow" << endl;
    }
};

class Dog : public Animal
{

public:
    void bark()
    {

        cout << "Woof Woof" << endl;
    }
};

int main()
{

    Cat c;
    Dog d;

    c.eat();
    c.voice();
    d.eat();
    d.bark();

    return 0;
}