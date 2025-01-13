#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5; j++)
        {

            cout << "* ";
        }

        cout << endl;

        for (int k = 5 - i; k < 5; k++)
        {
            if (k == 0)
            {

                break;
            }
            cout << "  ";
        }
    }

    return 0;
}