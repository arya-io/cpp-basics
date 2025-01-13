#include <iostream>
using namespace std;

int main()
{

    int n, power, ans = 1;

    cout << "\nEnter base number: ";
    cin >> n;

    cout << "\nEnter power number: ";
    cin >> power;

    while (power != 0)
    {
        ans *= n;
        power--;
    }

    cout << "\nThe answer is: " << ans;
    return 0;
}