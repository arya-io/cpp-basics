/*
Question:9
(Asked in Accenture Offcampus 1 Aug 2021, Slot 1)

Implement the following functions.a

char*MoveHyphen(char str[],int n);

The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). Implement the function to move all hyphens(-) in the string to the front of the given string.

NOTE:- Return null if str is null.

Example :-

Input:
str.Move-Hyphens-to-Front
Output:
—MoveHyphenstoFront
Explanation:-

The string “Move-Hyphens -to-front” has 3 hyphens (-), which are moved to the front of the string, this output is “— MoveHyphen”

Sample Input

Str: String-Compare
Sample Output-

-StringCompare
*/

#include <bits/stdc++.h>
using namespace std;

string moveHyphen(string s, int n){
    string ans = "";
    int count = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '-') count++;
    }

    while(count--) ans.push_back('-');

    for(int i = 0; i < n; i++){
        if(s[i] != '-') ans.push_back(s[i]);
    }

    return ans;
}

int main(){
    string s;
    cin >> s;
    int n = s.size();
    cout << moveHyphen(s, n);
}