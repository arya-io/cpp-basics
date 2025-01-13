#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, copy = 1, rem, sum, x;

    cout<<"\nEnter a number: ";
    cin>>num;

    while (copy < num)
    {
        copy++;
        x = copy;
        sum = 0;

        while (copy != 0)
        {
            rem = copy % 10;
            sum += pow(rem, 3);
            copy = copy / 10;
        }
        if (sum == x)
        {
            cout<<"\n"<<x<<" is an Armstrong number."<<endl;
        }
        copy = x;
    }

    return 0;
}