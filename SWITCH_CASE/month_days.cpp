#include <iostream>
using namespace std;

int main()
{

    int choice;

    cout << "\nEnter the month number: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n31 days.";
        break;
    case 2:
        cout << "\n28 days and in leap year 29 days.";
        break;
    case 3:
        cout << "\n31 days.";
        break;
    case 4:
        cout << "\n30 days.";
        break;
    case 5:
        cout << "\n31 days.";
        break;
    case 6:
        cout << "\n30 days.";
        break;
    case 7:
        cout << "\n31 days.";
        break;
    case 8:
        cout << "\n31 days.";
        break;
    case 9:
        cout << "\n30 days.";
        break;
    case 10:
        cout << "\n31 days.";
        break;
    case 11:
        cout << "\n30 days.";
        break;
    case 12:
        cout << "\n31 days.";
        break;

    default:
        cout << "\nYou entered an invalid number.\nThere are only 12 months in a year.";
        break;
    }

    return 0;
}