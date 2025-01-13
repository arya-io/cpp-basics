#include <iostream>
using namespace std;

int main()
{

    int n, rev = 0, rem;
    cout << "\nEnter n: ";
    cin >> n;

    for (n; n > 0; n /= 10)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
    }

    cout << "\nAfter Reverse: " << rev;

    return 0;
}