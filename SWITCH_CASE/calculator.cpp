#include <iostream>
using namespace std;

int main()
{

    int choice, a, b;

    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    cout << "\nWhat do you like to perform?";
    cout << "\nPress 1 for Addition";
    cout << "\nPress 2 for Subraction";
    cout << "\nPress 3 for Multiplication";
    cout << "\nPress 4 for Division";
    cout << "\nPress 5 for Modulo\n";

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nAddition is " << a + b;
        break;
    case 2:
        cout << "\nSubtraction is " << a - b;
        break;
    case 3:
        cout << "\nMultiplication is " << a * b;
        break;
    case 4:
        cout << "\nDivision is " << a / b;
        break;
    case 5:
        cout << "\nModulo is " << a % b;
        break;

    default:
        cout << "\nYou entered an invalid number.";
        break;
    }

    return 0;
}