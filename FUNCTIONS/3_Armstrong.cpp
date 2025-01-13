#include <iostream>
#include <math.h>
using namespace std;

void armstrong(int a)
{

    int sum = 0, digit = 0;

    int originalNum = a;

    while (a != 0)
    {
        digit = a % 10;
        a /= 10;

        sum += pow(digit, 3);
    }

    if (originalNum == sum)
    {
        cout << "\n"
             << originalNum << " is an Armstrong number.";
    }
    else
    {
        cout << "\n"
             << originalNum << " is not an Armstrong number.";
    }
}
int main()
{

    armstrong(370);
    armstrong(371);
    armstrong(407);
    armstrong(417);

    return 0;
}