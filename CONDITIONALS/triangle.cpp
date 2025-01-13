#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "\nEnter three angles of the triangle: ";
    cin >> a >> b >> c;

    if ((a + b + c) == 180)
    {
        cout << ("\nThe triangle can be formed.");
    }

    else
    {
        cout << "\nThe triangle cannot be formed.";
    }
    return 0;
}