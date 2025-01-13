#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {

        for (int j = 9 - (2 * i); j >= 1; j--)
        {

            cout << "* ";
        }

        cout << endl;

        for (int k = i; k >= 0; k--)
        {
            if (k == 4)
            {

                break;
            }

            cout << "  ";
        }
    }

    return 0;
}