#include <iostream>
using namespace std;

int main()
{

    int radius;
    cout << "\nEnter radius of circle: ";
    cin >> radius;

    cout << "\nThe area of circle is " << 3.14 * radius * radius;
    cout << "\n\nThe circumference of circle is " << 2 * 3.14 * radius;

    return 0;
}