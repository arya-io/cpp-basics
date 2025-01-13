#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "\nEnter n: ";
    cin >> n;

    int lastdigit = n % 10;

    while (n >= 10)
    {
        n /= 10;
    }

    int firstdigit = n;

    int sum = lastdigit + firstdigit;

    cout << "\nThe sum of first and last digit is " << sum;
    return 0;
}