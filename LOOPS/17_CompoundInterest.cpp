#include <iostream>
using namespace std;

int main(){
    
    int principal, time, rate;
    float power = 1;

    cout<<"\nEnter principal amount: ";
    cin>>principal;

    cout<<"\nEnter time in years: ";
    cin>>time;

    cout<<"\nEnter rate of interest: ";
    cin>>rate;

    for(int i = 1; i<=time; i++){
        power = (1 + (rate * 0.01)) * power;
    }

    cout<<"\nThe compound interest is: "<< float(principal * power);
    return 0;
}