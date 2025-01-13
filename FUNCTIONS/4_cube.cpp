#include <iostream>
using namespace std;

void cube(int a){

    int product = 1;

    for(int i = 0; i < 3; i ++){

        product *= a; 
    }

    cout<< product;
}
int main()
{

    cube(5);
    cube(3);
    cube(6);
    cube(7);
    cube(2);

return 0;

}