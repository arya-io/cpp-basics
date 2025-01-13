#include <iostream>
using namespace std;

class Dad
{

protected:
    int amount;

public:
    void input()
    {

        amount = 70000;
    }
};

class Son : public Dad
{

    int money = 40000;

public:
    void show()
    {

        cout << "Money: " << money << endl;
        cout << "Amount: " << amount << endl;
    }
};

int main()
{

    Son a;
    a.input();
    a.show();

    return 0;
}