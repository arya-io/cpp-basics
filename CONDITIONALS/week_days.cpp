#include <iostream>
using namespace std;

int main()
{

    int choice;

    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\nMonday";
    }
    else if (choice == 2)
    {
        cout << "\nTuesday";
    }
    else if (choice == 3)
    {
        cout << "\nWednesday";
    }
    else if (choice == 4)
    {
        cout << "\nThursday";
    }
    else if (choice == 5)
    {
        cout << "\nFriday";
    }
    else if (choice == 6)
    {
        cout << "\nSaturday";
    }
    else if (choice == 7)
    {
        cout << "\nSunday";
    }

    else
    {
        cout << "\nInvalid Choice.";
    }
    return 0;
}