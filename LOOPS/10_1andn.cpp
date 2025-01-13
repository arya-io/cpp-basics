#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "\nEnter n: ";
    cin >> n;

    int firstdigit = n;
    int lastdigit = n % 10;

    while (firstdigit >= 10)
    {
        firstdigit /= 10;
    }

    cout<<"\nFirst digit is "<<firstdigit;
    cout<<"\nLast digit is "<<lastdigit;

    return 0;
}