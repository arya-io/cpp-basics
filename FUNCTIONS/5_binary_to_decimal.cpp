#include <iostream>
#include <math.h>
using namespace std;

void BinToDec(int a)
{

    int n = 0, sum = 0, digit;

    while (a != 0)
    {

        digit = a % 10;
        a /= 10;

        sum += (digit * pow(2, n));
        n++;
    }

    cout << sum;
}
int main()
{

    BinToDec(100)<<endl;
    BinToDec(101)<<endl;
    BinToDec(111)<<endl;
    BinToDec(11)<<endl;
    BinToDec(110)<<endl;

    return 0;
}