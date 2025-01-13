#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    if (num > 0)
    {
        cout << "\nPositive";
    }

    else if (num == 0)
    {
        cout << "\nThe number is 0.";
    }

    else
    {
        cout << "\nNegative";
    }

    return 0;
}