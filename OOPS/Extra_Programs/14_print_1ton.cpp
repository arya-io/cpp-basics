#include <iostream>
using namespace std;

class print
{

    int n;

public:
    void numline()
    {
        cout << "Enter num: ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {

            cout << i << ends;
        }
    }
};

int main()
{

    print obj;
    obj.numline();

    return 0;
}