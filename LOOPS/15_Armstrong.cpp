#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, sum = 0, digit = 0;

    cout << "\nEnter n: ";
    cin >> n;
    int originalNum = n;

    while (n != 0)
    {
        digit = n % 10;
        n /= 10;

        sum += pow(digit, 3);
        cout<<sum<<endl;
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

    return 0;
}