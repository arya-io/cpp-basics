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
        if (int(c) == 65 | int(c) == 69 | int(c) == 73 | int(c) == 79 | int(c) == 85)
        {
            alphabet = 1;
        }

        else
        {
            alphabet = 2;
        }
    }

    if (int(c) >= 97 & int(c) <= 122)
    {
        if (int(c) == 97 | int(c) == 101 | int(c) == 105 | int(c) == 111 | int(c) == 117)
        {
            alphabet = 1;
        }

        else
        {
            alphabet = 2;
        }
    }

    if (alphabet == 0)
    {
        cout << "\n"
             << c << " is not an alphabet.";
    }

    if (alphabet == 1)
    {
        cout << "\n"
             << c << " is a vowel.";
    }

    if (alphabet == 2)
    {
        cout << "\n"
             << c << " is a consonant.";
    }

    return 0;
}