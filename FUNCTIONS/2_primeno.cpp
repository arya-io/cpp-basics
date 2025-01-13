#include <iostream>
using namespace std;

void prime(int a){

    int check;

    for (int i = 2; i < a; i++)
    {
        if (a == 2)
        {
            cout << "\n"
                 << a << " is a prime number.";
            break;
        }
        else if(a % i == 0)
        {
            check = 0;
            break;
        }
        else
        {
            check = 1;
        }
    }

    if (check == 0)
    {
        cout << "\n"
             << a << " is not a prime number.";
    }
    else
    {
        cout << "\n"
             << a << " is a prime number.";
    }

}
int main()
{

    prime(7);

return 0;

}