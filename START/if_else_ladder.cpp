#include <iostream>
using namespace std;

int main()
{

    int a, b, ch;

    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    cout << "\nEnter your choice: ";
    cin >> ch;

    if (ch == 1)
    {
        int add = a + b;
        cout << add;
    }

    else if (ch == 2)
    {
        int sub = a - b;
        cout << sub;
    }

    else if (ch == 3)
    {
        int multi = a * b;
        cout << multi;
    }

    else if (ch == 1)
    {
        int div = a / b;
        cout << div;
    }

    else
    {
        cout << "\nYou entered a wrong choice.";
    }

    return 0;
}