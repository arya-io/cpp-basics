/*
Question:11
(Asked in Accenture Offcampus 1 Aug 2021, Slot 3)

Problem Statement

You are given a function,

Void *ReplaceCharacter(Char str[], int n, char ch1, char ch2);

The function accepts a string  ‘ str’ of length n and two characters ‘ch1’ and ‘ch2’ as its arguments . Implement the function to modify and return the string ‘ str’ in such a way that all occurrences of ‘ch1’ in original string are replaced by ‘ch2’ and all occurrences of ‘ch2’  in original string are replaced by ‘ch1’.

Assumption: String Contains only lower-case alphabetical letters.

Note:

Return null if string is null.
If both characters are not present in string or both of them are same , then return the string unchanged.
Example:

Input:
Str: apples
ch1:a
ch2:p
Output:
paales
Explanation:

‘A’ in original string is replaced with ‘p’ and ‘p’ in original string is replaced with ‘a’, thus output is paales.
*/

#include <bits/stdc++.h>
using namespace std;

string replaceCharacter(string s, int n, char c1, char c2){
    if(n == 0) return 0;

    for(int i = 0; i < n; i++){
        if(s[i] == c1) s[i] = c2;
        else if(s[i] == c2) s[i] = c1;
    }

    return s;
}

int main(){
    string s;
    char c1, c2;
    cin >> s >> c1 >> c2;
    int n = s.size();
    cout << replaceCharacter(s, n, c1, c2);
}