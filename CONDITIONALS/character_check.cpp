#include <iostream>
using namespace std;

int main()
{

    char c;
    int character = 0;

    cout << "\nEnter the character: ";
    cin >> c;

    if ((int(c) >= 65 & int(c) <= 90) | (int(c) >= 97 & int(c) <= 122))
    {
        character = 1;
    }

    if (int(c) >= 48 & int(c) <= 57)
    {
        character = 2;
    }

    if ((int(c) >= 33 & int(c) <= 47) | (int(c) >= 58 & int(c) <= 63) | (int(c) >= 91 & int(c) <= 95) | (int(c) >= 123 & int(c) <= 127))
    {
        character = 3;
    }

    if (character == 1)
    {
        cout << "\n" << c << " is an alphabet.";
    }

    else if (character == 2)
    {
        cout << "\n" << c << " is a digit.";
    }

    else if (character == 3)
    {
        cout << "\n" << c << " is a special character.";
    }

    return 0;
}