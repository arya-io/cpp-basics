/*

Question 15
Problem Statement 

You are required to input the size of the matrix then the elements of matrix, then you have to divide the main matrix in two sub matrices (even and odd) in such a way that element at 0 index will be considered as even and element at 1st index will be considered as odd and so on. then you have sort the even and odd matrices in ascending order then print the sum of second largest number from both the matrices

Example

enter the size of array : 5
enter element at 0 index : 3
enter element at 1 index : 4
enter element at 2 index : 1
enter element at 3 index : 7
enter element at 4 index : 9
Sorted even array : 1 3 9
Sorted odd array : 4 7

7

*/

#include <bits/stdc++.h>
using namespace std;

int largest(int n, int arr[]){
    vector<int> even;
    vector<int> odd;

    for(int i = 0; i < n; i++){
        if(i&1) odd.push_back(arr[i]);
        else even.push_back(arr[i]);
    }

    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end(), greater<int>());

    return(odd[1]+even[1]);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i < n; i++) cin >> arr[i];

    cout << largest(n, arr) << endl;
}