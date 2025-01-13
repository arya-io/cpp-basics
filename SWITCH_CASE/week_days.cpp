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
        cout << "\nMonday";
        break;

    case 2:
        cout << "\nTuesday";
        break;

    case 3:
        cout << "\nWednesday";
        break;

    case 4:
        cout << "\nThursday";
        break;

    case 5:
        cout << "\nFriday";
        break;

    case 6:
        cout << "\nSaturday";
        break;

    case 7:
        cout << "\nSunday";
        break;

    default:
        cout << "\nYou entered an invalid number.\nThere are only 7 days in week.";
        break;
    }

    return 0;
}