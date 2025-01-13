#include <iostream>
using namespace std;

int main()
{

    int ba, da, hra, gs;
    cin >> ba;

    if (ba > 1500)
    {
        hra = 0.4 * ba;
        da = 0.6 * ba;
        gs = ba + hra + da;
        cout << "\n" << gs;
    }

    else
    {
        hra = 500;
        da = 0.9 * ba;
        gs = ba + hra + da;
        cout << "\n" << gs;
    }

    return 0;
}