#include <iostream>
using namespace std;

int main()
{

    int n, check;
    cout << "\nEnter the number: ";
    cin >> n;

    int i = 2;

    while (i < n)
    {
        if (n == 2)
        {
            cout << "\n"
                 << n << " is a prime number.";
            break;
        }
        else if (n % i == 0)
        {
            check = 0;
            break;
        }
        else
        {
            check = 1;
        }

        i++;
    }

    if (check == 0)
    {
        cout << "\n"
             << n << " is not a prime number.";
    }
    else
    {
        cout << "\n"
             << n << " is a prime number.";
    }

    return 0;
}