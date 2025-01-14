#include <bits/stdc++.h>
using namespace std;

int main(){

    int N = 0;
    int E = 0;
    int W = 0;
    int S = 0;

    string s, ans;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'N') N++;
        if(s[i] == 'E') E++;
        if(s[i] == 'W') W++;
        if(s[i] == 'S') S++;
    }

    if(N-S > 0){
        int sub1 = N-S;
        while((sub1)--){
            ans.push_back('N');
        }
    }
    if(S-N > 0){
        int sub2 = S-N;
        while((sub2)--){
            ans.push_back('S');
        }
    }
    if(E-W > 0){
        int sub3 = E-W;
        while((sub3)--){
            ans.push_back('E');
        }
    }
    if(W-E > 0){
        int sub4 = W-E;
        while((sub4)--){
            ans.push_back('W');
        }
    }

    cout << ans;
}