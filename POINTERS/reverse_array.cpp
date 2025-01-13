#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    int *p;

    cout << "\nEnter array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        p = &arr[i];
    }
    
    cout << "\nArray in reverse order is as follows:\n";

    p = &arr[4];

    for (int i = 0; i < 5; i++)
    {
        cout << *p << " ";
        p--;
    }



    return 0;
}