#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    int D;
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cin >> D;

    for (int i = 0; i < 5 - 1; i++)
    {

        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] != 0 && arr[j] != 0)
            {

                if (arr[i] - arr[j] <= 2)
                {
                    count++;
                    arr[i] = 0;
                    arr[j] = 0;
                }
            }
        }
    }

    cout << count;
}