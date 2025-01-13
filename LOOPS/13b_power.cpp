#include <iostream>
using namespace std;

int main()
{

    int n, power, ans = 1;

    cout << "\nEnter base number: ";
    cin >> n;

    cout << "\nEnter power number: ";
    cin >> power;

    for ( ;power != 0; power--){
        ans *= n;
    }

        cout << "\nThe answer is: " << ans;
    return 0;
}