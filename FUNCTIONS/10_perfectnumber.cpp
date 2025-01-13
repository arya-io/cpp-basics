#include <iostream>
using namespace std;

void perfectnum(int num)
{

    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (num == sum)
    {
        cout << num << " is a perfect number." << endl;
    }
}

void perfectInterval(int a, int b)
{

    for (a; a < b; a++)
    {
        perfectnum(a);
    }
}

int main()
{

    perfectInterval(1, 10000);

    return 0;
}