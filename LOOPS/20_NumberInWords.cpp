#include <iostream>
using namespace std;

int main()
{

    int n, rem, rev = 0;
    cout << "\nEnter n: ";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }

    n = rev;
    rem = 0;
    rev = 0;

    while (n > 0)
    {
        rem = n % 10;

        switch (rem)
        {
        case 1:
            cout << "\nOne ";
            break;
        case 2:
            cout << "\nTwo ";
            break;
        case 3:
            cout << "\nThree ";
            break;
        case 4:
            cout << "\nFour ";
            break;
        case 5:
            cout << "\nFive ";
            break;
        case 6:
            cout << "\nSix ";
            break;
        case 7:
            cout << "\nSeven ";
            break;
        case 8:
            cout << "\nEight ";
            break;
        case 9:
            cout << "\nNine ";
            break;
        case 0:
            cout << "\nZero ";
            break;

        default:
            break;
        }

        n /= 10;
    }

    return 0;
}