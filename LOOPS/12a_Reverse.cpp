#include <iostream>
using namespace std;

int main()
{

    int n, rev = 0, rem;
    cout << "\nEnter n: ";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }

    cout << "\nAfter Reverse: " << rev;

    return 0;
}