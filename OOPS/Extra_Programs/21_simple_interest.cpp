#include <iostream>
using namespace std;

class si
{

    int principal, rate, time;

public:
    void input()
    {

        cout << "Enter principal amount: ";
        cin >> principal;

        cout << "Enter rate of interest: ";
        cin >> rate;

        cout << "Enter time duration: ";
        cin >> time;
    }

    void calculate()
    {

        cout << "The simple interest is " << (principal * rate * time) / 100;
    }
};

int main()
{

    si obj;
    obj.input();
    obj.calculate();

    return 0;
}