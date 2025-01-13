#include <iostream>
using namespace std;

int main()
{

    char c;
    int alphabet = 0;

    cout << "\nEnter the alphabet: ";
    cin >> c;

    if (int(c) >= 65 & int(c) <= 90)
    {
        alphabet = 1;
    }

    if (int(c) >= 97 & int(c) <= 122)
    {
        alphabet = 2;
    }

    if (alphabet == 0)
    {
        cout << "\n"<< c << " is not an alphabet.";
    }
    
    if (alphabet == 1)
    {
        cout << "\n"<< c << " is an uppercase alphabet.";
    }

    if (alphabet == 2)
    {
        cout << "\n"<< c << " is a lowercase alphabet.";
    }

    
    return 0;
}