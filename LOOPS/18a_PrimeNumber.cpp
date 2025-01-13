#include <iostream>
using namespace std;

int main()
{

    int n, check;
    cout << "\nEnter the number: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n == 2)
        {
            cout << "\n"
                 << n << " is a prime number.";
            break;
        }
        else if(n % i == 0)
        {
            check = 0;
            break;
        }
        else
        {
            check = 1;
        }
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