// *************
//  *         *
//   *       *
//    *     *
//     *   *
//      * *
//       *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j < n * 2; j++)
                cout << "*";
        }
        else
        {
            for (int j = 1; j <= i - 1; j++)
                cout << " ";
            if (i == n)
                cout << "*";
            else
            {
                cout << "*";
                for (int j = 1; j <= (n * 2) - (i * 2) - 1; j++)
                    cout << " ";
                cout << "*";
            }
        }
        cout << endl;
    }
}