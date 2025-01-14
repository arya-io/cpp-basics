//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++) cout << " ";
        int count = 0;
        for(int j = 1; j <= (i-1)*2 + 1; j++){
            cout << (char)('A' + count);
            count++;
        }
        cout << endl;
    }

    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i-1; j++) cout << " ";
        int count = 0;
        for(int j = 1; j <= (n-i)*2 + 1; j++){
            cout << (char)('A' + count);
            count++;
        }
        cout << endl;
    }
}