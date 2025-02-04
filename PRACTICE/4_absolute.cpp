/*
Question 4:
(Asked in Accenture OnCampus 11 Aug 2021, Slot 1)

You are given a function,
int findCount(int arr[], int length, int num, int diff);

The function accepts an integer array ‘arr’, its length and two integer variables ‘num’ and ‘diff’. Implement this function to find and return the number of elements of ‘arr’ having an absolute difference of less than or equal to ‘diff’ with ‘num’.
Note: In case there is no element in ‘arr’ whose absolute difference with ‘num’ is less than or equal to ‘diff’, return -1.

Example:
Input:

arr: 12 3 14 56 77 13
num: 13
diff: 2
Output:
3

Explanation:
Elements of ‘arr’ having absolute difference of less than or equal to ‘diff’ i.e. 2 with ‘num’ i.e. 13 are 12, 13 and 14.
*/

#include <bits/stdc++.h>
using namespace std;

int findCount(int length, int num, int diff, int arr[]){

    int count = 0;

    for(int i = 0; i < length; i++){
        if(abs(arr[i]-num) <= diff) count++;
    }

    if(count == 0) return 0;
    else return count;
}

int main(){
    int length, num, diff;
    cin >> length >> num >> diff;
    int arr[length];

    for(int i = 0; i < length; i++){
        cin >> arr[i];
    }

    cout << findCount(length, num, diff, arr);

}