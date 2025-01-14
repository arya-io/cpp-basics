/*

A 
B C 
D E F 
G H I J 
K L M N O 

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n; 

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << (char)('A' + count) << " ";
            count++;
        }
        cout << endl;
    }
}