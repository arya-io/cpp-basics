#include <iostream>
using namespace std;

class A
{

public:
    int a, b;
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
};

class B : public A
{

    int c;

public:
    void add()
    {

        c = a + b;

        cout << "Addition: " << c << endl;
    }
    void sub()
    {

        c = a - b;

        cout << "Subtraction: " << c << endl;
    }
};

class C : public B
{

    int c;

public:
    void multi()
    {

        c = a * b;
        cout << "Multiplication: " << c << endl;
    }

    void div()
    {

        c = a / b;
        cout << "Division: " << c << endl;
    }
};

int main()
{

    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();

    return 0;
}