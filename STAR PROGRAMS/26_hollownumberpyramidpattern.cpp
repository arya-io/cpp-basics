//     1
//    1 2
//   1   2
//  1     2
// 123456789

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++) cout << " ";
        
        if(i == 1) cout << 1;        
        else if(i == n) for(int j = 1; j < (n*2); j++) cout << j;        
        else{
            cout << 1;
            for(int j = 1; j <= 2*(i-1) - 1; j++) cout << " ";
            cout << 2;
        }
        cout << endl;
    }
}