#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = i; j > 0; j--)
        {

            cout << "* ";

            if (i == 3 || i == 4)
            {
                for (int k = i - 2; k > 0; k--)
                {

                    cout << "  ";
                }

                continue;
            }
        }

        cout << endl;
    }

    return 0;
}