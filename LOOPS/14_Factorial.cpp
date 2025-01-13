#include <iostream>
using namespace std;

int main()
{

    int n, fact = 1;

    cout << "\nEnter n: ";
    cin >> n;
    int num = n;

    while (n != 0)
    {
        fact *= n;
        n--;
    }

    cout << "\nThe factorial of " << num << " is " << fact;

    return 0;
}