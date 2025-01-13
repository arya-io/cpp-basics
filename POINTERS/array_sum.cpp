#include <iostream>
using namespace std;

int main()
{

    int arr[5], sum = 0;
    int *p;

    cout << "\nEnter array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        p = &arr[i];
    }

    p = &arr[0];

    for (int i = 0; i < 5; i++)
    {
        sum += *p;
        p++;
    }

    cout << "\nThe sum of array elements is: " << sum;

    return 0;
}