#include <iostream>
using namespace std;

int main()
{

    char c;
    bool alphabet = 0;

    cout << "\nEnter the alphabet: ";
    cin >> c;

    if (int(c) >= 65 & int(c) <= 90)
    {
        alphabet = 1;
    }

    if (int(c) >= 97 & int(c) <= 122)
    {
        alphabet = 1;
    }

    if (alphabet == 0)
    {
        cout << "\n"<< c << " is not an alphabet.";
    }

    else
    {
        cout << "\n"<< c << " is an alphabet.";
    }

    return 0;
}