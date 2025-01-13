#include <iostream>
using namespace std;

class Addition
{

    int sum = 0;

public:
    void OddSum()
    {

        for (int i = 1; i <= 5; i++)
        {

            if (i % 2 != 0)
            {

                sum += i;
            }
        }
    }

    void result()
    {

        cout << "The sum of odd numbers between 1 to 100 is " << sum;
    }
};

int main()
{

    Addition obj;
    obj.OddSum();
    obj.result();

    return 0;
}