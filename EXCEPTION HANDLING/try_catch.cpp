#include <iostream>
using namespace std;

int main()
{

    cout << "Execution Starting...." << endl;

    int a, b, c;

    cout << "Enter two numbers: ";

    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw b;
        }

        c = a / b;

        cout << "\nResult = " << c << endl;
    }

    catch (int x)
    {
        cout << "Can't divide by " << x << endl;
    }

    cout << "Execution Ended." << endl;

    return 0;
}