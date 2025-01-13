#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int num, first, last, temp, swap, countn, count = 0;

    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    countn = num;
    last = temp % 10;
    
    while (countn > 0)
    {
        countn /= 10;
        count++;
    }

    count--;

    while (temp >= 10)
    {
        temp /= 10;
        first = temp;
    }

    cout << ((last * pow(10, count)) + first) << endl;
    cout << ((last * pow(10, count)) + first) + num << endl;
    cout << ((first * pow(10, count)) + last);

    swap = ((last * pow(10, count)) + first) + num - ((first * pow(10, count)) + last);
    // cout << "\n" << last;
    // cout << "\n" << first;
    cout << "\n"
         << swap;

    return 0;
}