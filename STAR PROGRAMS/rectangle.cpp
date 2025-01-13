#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i;

    cin >> i;

    int original_i = i;

    while(i){
        int j = i;
        int k = 1;

        while(k <= i){
            cout << k;
            k++;
        }

        k = i;

        while(original_i > k){
            cout<< "**";
            k++;
        }
        
        while(j){
            cout << j;
            j--;
        }

        cout << endl;

        i--;
    }

return 0;

}