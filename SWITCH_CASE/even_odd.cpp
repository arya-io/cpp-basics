#include <iostream>
using namespace std;

int main()
{

    int num, tr;
    cout << "\nEnter the number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        tr = 1;
    }

    else
    {
        tr = 2;
    }

    switch (tr)
    {
    case 1:
        cout << "\n";
        cout << num << " is an even number.";
        break;
    case 2:
        cout << "\n";
        cout << num << " is an odd number.";
        break;

    default:
        break;
    }
    return 0;
}