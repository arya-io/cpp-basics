//     A
//    B C
//   D   E
//  F     G
// HIJKLMNOP

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++) cout << " ";
        
        if(i == 1){
            cout << 'A';
            count++;
        }
        else if(i == n){
            for(int j = 1; j < n*2; j++){
            cout << (char) ('A' + count);
            count++;
            }
        }
        else{
            cout << (char) ('A' + count);
            count++;
            for(int j = 1; j <= (i-1)*2 - 1; j++) cout << " ";
            cout << (char) ('A' + count);
            count++;
        }

        cout << endl;
    }
}