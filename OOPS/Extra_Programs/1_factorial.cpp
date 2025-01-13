#include <iostream>
using namespace std;

class factorial
{

    int num;

public:
    void input()
    {

        cout << "Enter the number: ";
        cin >> num;
    }

    friend void fact(factorial r);
};

void fact(factorial r)
{

    int product = 1;

    for (int i = 1; i <= r.num; i++)
    {
        product *= i;
    }

    cout << "The factorial of " << r.num << " is " << product << endl;
}

int main()
{
    factorial f;
    f.input();
    fact(f);

    return 0;
}