#include <iostream>
using namespace std;

int main()
{

    int fahrenheit;

    cout << "\nEnter temperature in degree fahrenheit: ";
    cin >> fahrenheit;

    cout << "\nThe temperature in celsius is " << (fahrenheit - 32) / 1.8;

    return 0;
}