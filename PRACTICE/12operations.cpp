/*
Question:12
(Asked in Accenture Offcampus 2 Aug 2021, Slot 1)

Problem Statement

You are required to implement the following function.

Int OperationChoices(int c, int n, int a , int b )

The function accepts 3 positive integers ‘a’ , ‘b’ and ‘c ‘ as its arguments. Implement the function to return.

( a+ b ) , if c=1
( a – b ) , if c=2
( a * b ) ,  if c=3
(a / b) ,  if c =4
Assumption : All operations will result in integer output.

Example:

Input
c :1
a:12
b:16
Output:
Since ‘c’=1 , (12+16) is performed which is equal to 28 , hence 28 is returned.
Sample Input

 c : 2

 a : 16

 b : 20

Sample Output

-4
*/

#include <bits/stdc++.h>
using namespace std;

int operationChoices(int c, int a, int b){
    if(c == 1) return a+b;
    if(c == 2) return a-b;
    if(c == 3) return a*b;
    if(c == 4) return a/b;

    return 0;
}

int main(){
    int a, b, c;
    cin >> c >> a >> b;
    cout << operationChoices(c, a, b);
}