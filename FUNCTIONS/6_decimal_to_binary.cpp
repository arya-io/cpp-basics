#include <iostream>
using namespace std;

void DecToBin(int a)
{

    int digit, n = 1, sum = 0;

    while (a != 0)
    {

        digit = a % 2;
        // cout << digit;

        a /= 2;
        sum = sum + (digit * n);
        n *= 10;
    }
    cout << sum << endl;
}
int main()
{

    DecToBin(7);

    return 0;
}