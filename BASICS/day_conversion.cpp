#include <iostream>
using namespace std;

int main()
{

    int days;
    float years, weeks;

    cout << "\n";
    cout << "\nEnter number of days: ";
    cin >> days;

    years = days / 365;
    weeks = days / 7;
    cout << days << " days in years is " << years << " and in weeks is " << weeks;
    return 0;
}