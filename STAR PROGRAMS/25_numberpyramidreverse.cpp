// 123456789
//  1234567
//   12345
//    123
//     1

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int j = 1; j < (n*2) - (i-1)*2; j++) cout << j;
        cout << endl;
    }
}