#include <iostream>
using namespace std;

void diameter(int r){
    cout<<"\nThe diameter of circle is "<<2 * r;
}

void circumference(int r){
    cout<<"\nThe circumference of circle is "<<2 * 3.14 * r;
}

void area(int r){
    cout<<"\nThe area of circle is "<<3.14 * r * r;
}

void circle(int r){
    diameter(r);
    circumference(r);
    area(r);
}

int main(){
    
    circle(22);

    return 0;
}