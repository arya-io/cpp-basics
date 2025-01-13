#include <iostream>
using namespace std;

int main()
{

    int n, rev = 0, rem;
    cout << "\nEnter n: ";
    cin >> n;
    int originalNum = n;

    for (n; n > 0; n /= 10)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
    }

    if (originalNum == rev)
    {
        cout << "\nThe entered number is a pallindrome.";
    }
    else
    {
        cout << "\nThe entered number is not a pallindrome.";
    }

    return 0;
}