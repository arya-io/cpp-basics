#include <iostream>
using namespace std;

int power(double m, int n = 2)
{

    int powerAns = 1;

    for (int i = 0; i < n; i++)
    {

        powerAns *= m;
    }

    return powerAns;
}

int main()
{

    double base;
    int raised_to_power;

    cout << "Enter base value: ";
    cin >> base;

    cout << "Enter power value: ";
    cin >> raised_to_power;

    cout << base << "^" << raised_to_power << " is " << power(base, raised_to_power);

    return 0;
}