/*

Question : 18
Instructions: You are required to write the code. You can click on compile & run anytime to check the compilation/ execution status of the program. The submitted code should be logically/syntactically correct and pass all the test cases.

Ques: The program is supposed to calculate the sum of  distance between three points from each other.

For
x1 = 1 y1 = 1
x2 = 2 y2 = 4
x3 = 3 y3 = 6

Distance is calculated as : sqrt(x2-x1)2 + (y2-y1)2

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    cout << sqrt(pow(x2-x1, 2) + pow(y2- y1, 2)) + sqrt(pow(x2-x3, 2) + pow(y2- y3, 2)) + sqrt(pow(x3-x1, 2) + pow(y3- y1, 2));
}