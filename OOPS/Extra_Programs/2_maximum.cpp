#include <iostream>
using namespace std;

class maximum
{

public:
    int num1, num2, num3;

    void input()
    {

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "Enter third number: ";
        cin >> num3;
    }

    void greatest()
    {

        if ((num1 > num2) & (num1 > num3))
        {

            cout << num1 << " is greater." << endl;
        }

        if ((num2 > num1) & (num2 > num3))
        {

            cout << num2 << " is greater." << endl;
        }

        if ((num3 > num1) & (num3 > num2))
        {

            cout << num3 << " is greater." << endl;
        }
    }
};

int main()
{

    maximum obj;
    obj.input();
    obj.greatest();

    return 0;
}