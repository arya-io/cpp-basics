#include <iostream>
using namespace std;

int main(){
    
    int year;

    cout<<"\nEnter the year: ";
    cin>>year;

    if(year % 100 == 0 & year % 400 == 0){
        cout<<"\n"<<year<<" is a leap year.";
    }

    else if(year % 4 == 0 & year % 400 == 0){
        cout<<"\n"<<year<<" is a leap year.";
    }

    else{
        cout<<"\n"<<year<<" is a not leap year.";
    }
    return 0;
}