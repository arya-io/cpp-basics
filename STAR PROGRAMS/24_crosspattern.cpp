// *   *
//  * * 
//   *  
//  * * 
// *   *

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= (n/2)+1; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        if(i == (n/2)+1) cout << "*";
        else{
            cout << "*";
            for(int j = 1; j <= (n-2) - (i-1)*2; j++) cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 1; i <= n/2; i++){
        for(int j = 1; j <= (n/2)-i; j++) cout << " ";
        cout << "*";
        for(int j = 1; j <= (i-1)*2 + 1; j++) cout << " ";
        cout << "*";
        cout << endl;
    }
}