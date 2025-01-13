#include <iostream>
using namespace std;

int main()
{

    int choice;
    cout << "\nPress 1 for Male";
    cout << "\nPress 2 for Female";
    cout << "\nPress 3 for Others";

    cout << "\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nMale";
        break;
    case 2:
        cout << "\nFemale";
        break;
    case 3:
        cout << "\nOthers";
        break;

    default:
        break;
    }

    return 0;
}