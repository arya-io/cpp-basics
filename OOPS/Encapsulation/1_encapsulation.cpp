#include <iostream>
using namespace std;

class thief
{

private:
    string name, address;

    int mob;

public:
    void input()
    {

        name = "Malya";

        address = "London";

        mob = 39500111;
    }

    void output()
    {

        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Mobile: " << mob << endl;
    }
};

class police : public thief
{
};

int main()
{

    police p;
    p.input();
    p.output();

    return 0;
}