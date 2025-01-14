//     1
//    1 2
//   1   2
//  1     2
// 1       2
//  1     2
//   1   2
//    1 2
//     1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        if (i == 1)
            cout << 1;
        else
        {
            cout << 1;
            for (int j = 1; j <= (i - 1) * 2 - 1; j++)
                cout << " ";
            cout << 2;
        }
        cout << endl;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
            cout << " ";
        if (i == n)
            cout << 1;
        else
        {
            cout << 1;
            for (int j = 1; j <= (n - i) * 2 - 1; j++)
                cout << " ";

            cout << 2;
        }

        cout << endl;
    }
}