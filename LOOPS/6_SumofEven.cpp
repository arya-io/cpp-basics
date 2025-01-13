#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;
    cout << "\nEnter n: ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << "\nThe sum of even numbers between 1 and " << n << " is " << sum;
    return 0;
}