/*
Question 3: Password Checker
(Asked in Accenture OnCampus 10 Aug 2021, Slot 3)

You are given a function.
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.
str is a valid password if it satisfies the below conditions.

– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number
Assumption:
Input string will not be empty.

Example:

Input 1:
aA1_67
Input 2:
a987 abC012

Output 1:
1
Output 2:
0
*/

#include <bits/stdc++.h>
using namespace std;

int checker(string s, int n){

    if(n < 4) return 0;
    if(s[0]-'0' >= 0 && s[0]-'0' <= 9) return 0;

    int capitalLetter = 0, numericalDigit = 0;

    for(int i = 1; i < n; i++){
        if(s[i] >= 65 && s[i] <= 90) capitalLetter++;
        if((s[i] - '0' >= 0) && (s[i] - '0' < 9)) numericalDigit++;
        if(s[i] == ' ' || s[i] == '/') return 0;
    }
    
    return (capitalLetter && numericalDigit);
}

int main(){
    string s;
    cin >> s;
    int n = s.size();
    cout << checker(s, n);
}