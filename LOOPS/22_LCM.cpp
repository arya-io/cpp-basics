#include <iostream>
using namespace std;

int main(){
    
    int a, b, i = 1;

    cout << "\nEnter first number: ";
    cin >> a;
    cout << "\nEnter second number: ";
    cin >> b;

    while(true){
        if(i % a == 0 & i % b == 0){
            cout<<"\nThe LCM of "<<a<<" and "<<b<<" is "<<i;
            break;
        }
        i++;
    }
    return 0;
}