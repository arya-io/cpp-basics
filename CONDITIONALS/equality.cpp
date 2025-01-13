#include <iostream>
using namespace std;

int main(){
    
    int n1, n2;

    cout<<"\nEnter two numbers: ";
    cin>>n1>>n2;

    if( n1 == n2){
        cout<<"\nBoth the numbers are equal.";
    }

    else{
        cout<<"\nBoth the numbers are different.";
    }
    return 0;
}