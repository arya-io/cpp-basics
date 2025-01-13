#include <iostream>
using namespace std;

int main()
{

    int celsius;

    cout << "\nEnter temperature in degree celsius: ";
    cin >> celsius;

    cout << "\nThe temperature in fahrenheit is " << (celsius * (9 / 5)) + 32;

    return 0;
}