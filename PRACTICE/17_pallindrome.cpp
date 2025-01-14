/*

Question : 17
Instructions: You are required to write the code. You can click on compile and run anytime to check compilation/execution status. The code should be logically/syntactically correct.

Question: Write a program in C such that it takes a lower limit and upper limit as inputs and print all the intermediate palindrome numbers.

Test Cases:

TestCase 1:
Input :
10 , 80
Expected Result:
11 , 22 , 33 , 44 , 55 , 66 , 77.

Test Case 2:
Input:
100,200
Expected Result:
101 , 111 , 121 , 131 , 141 , 151 , 161 , 171 , 181 , 191.

*/

#include <stdio.h>

bool pallindrome(int n){
    int reverse = 0;
    int temp = n;

    while(n){
        reverse = (reverse*10) + (n%10);
        n /= 10;
    }

    return(temp == reverse ? 1 : 0);
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = n+1; i < m; i++){
        if(pallindrome(i)) printf("%d ", i);
    }
}