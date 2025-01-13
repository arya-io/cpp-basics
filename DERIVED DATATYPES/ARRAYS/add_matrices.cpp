#include <iostream>
using namespace std;

int main()
{

    int arr[2][2], arr2[2][2];

    cout << "\nEnter 1st array elements:\n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }

    }

    cout << "\nEnter 2nd array elements: \n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr2[i][j];
        }

    }

    cout << "\nArray is as follows: \n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] + arr2[i][j]<< " ";
        }

        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] * arr2[i][j]<< " ";
        }

        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] - arr2[i][j]<< " ";
        }

        cout << endl;
    }

    return 0;
}