#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 5 - i; j >= 1; j--)
        {

            cout << "  ";
        }

        for (int k = 0; k <= 2 * (i - 1); k++)
        {

            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}