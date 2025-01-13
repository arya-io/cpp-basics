#include <iostream>
using namespace std;

int main()
{

    char c = 0;

    do
    {
        cout << c << " " << int(c)<<endl;
        c++;
    } while (c <= 127);
    return 0;
}