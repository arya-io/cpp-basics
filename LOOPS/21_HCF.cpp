#include <iostream>
using namespace std;

int main()
{

    int a, b, hcf;

    cout << "\nEnter first number: ";
    cin >> a;
    cout << "\nEnter second number: ";
    cin >> b;

    for (int i = 1; i <= a & i <= b; i++)
    {
        if (a % i == 0 & b % i == 0)
        {
            hcf = i;
        }
    }

    cout << "\nThe HCF of " << a << " and " << b << " is " << hcf;


    return 0;
}