#include <iostream>
using namespace std;

class reverse
{

    int n, r = 0, rem;

public:
    void input();
    void rev();
};

void reverse ::input()
{

    cout << "Enter the number: ";
    cin >> n;
}

void reverse ::rev()
{

    while (n > 0)
    {
        rem = n % 10;
        r = (r * 10) + rem;
        n /= 10;
    }

    cout << "Reverse: " << r;
}

int main()
{

    reverse obj;
    obj.input();
    obj.rev();

    return 0;
}