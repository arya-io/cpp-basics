//  ***   ***
// ***** *****
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n/3; i++){
        for(int j = 1; j <= (n/3)-i; j++) cout << " ";
        for(int j = 0; j < (n/2) + ((i-1)*2); j++) cout << "*";
        for(int j = 1; j <= (n/2) - ((i-1)*2); j++) cout << " ";
        for(int j = 0; j < (n/2) + ((i-1)*2); j++) cout << "*";
        
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++) cout << " ";
        for(int j = 1; j <= (n-i)*2 + 1; j++) cout << "*";
        cout << endl; 
    }
}