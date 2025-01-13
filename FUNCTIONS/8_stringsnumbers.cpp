#include <iostream>
using namespace std;

void num(int a, int b){

    for(a; a < b; a++){
        cout<<a<<ends;
    }
}
int main(){
    
    num(1, 100);

    return 0;
}