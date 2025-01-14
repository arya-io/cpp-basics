/*
Question:6
(Asked in Accenture OnCampus 11 Aug 2021, Slot 3)

You are required to implement the following Function 

def LargeSmallSum(arr)

The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest  element from the even positions and second smallest from the odd position of given ‘arr’

Assumption:

All array elements are unique
Treat the 0th position as even
NOTE

Return 0 if array is empty
Return 0, if array length is 3 or less than 3
Example

Input

arr:3 2 1 7 5 4

Output

7

Explanation

Second largest among even position elements(1 3 5) is 3
Second smallest among odd position element is 4
Thus output is 3+4 = 7
Sample Input

arr:1 8 0 2 3 5 6

Sample Output

8
*/

#include <bits/stdc++.h>
using namespace std;

int LargeSmallSum(int n, int arr[]){

    if(n <= 3) return 0;
    
    vector <int> odd;
    vector <int> even;

    for(int i = 0; i < n; i+=2) even.push_back(arr[i]);
    for(int i = 1; i < n; i+=2) odd.push_back(arr[i]);

    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end());

    return(even[1] + odd[1]);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << LargeSmallSum(n, arr);
}