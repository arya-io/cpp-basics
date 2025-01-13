#include <iostream>
using namespace std;

int main()
{

    int choice;

    cout << "\nEnter month number: ";
    cin >> choice;

    if (choice == 1 | choice == 3 | choice == 5 | choice == 7 | choice == 8 | choice == 10 | choice == 12)
    {
        cout << "\n Month " << choice << " has 31 days.";
    }

    else if (choice == 2)
    {
        cout << "\n Month " << choice << " has 28 days and in leap year it has 29 days.";
    }
    else if (choice == 4 | choice == 6 | choice == 9 | choice == 11)
    {
        cout << "\nMonth " << choice << " has 30 days.";
    }
    else
    {
        cout << "\nYou entered a wrong number.\nA year has only 12 months.";
    }

    return 0;
}