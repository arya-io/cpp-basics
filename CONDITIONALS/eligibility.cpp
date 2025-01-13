#include <iostream>
using namespace std;

int main(){
    
    int n1;

    cout<<"\nEnter your age: ";
    cin>>n1;

    if( n1 >= 18){
        cout<<"\nYou are eligible to vote.";
    }

    else{
        cout<<"\nYou are not eligible to vote.";
    }
    return 0;
}