#include <iostream>
using namespace std;

int main()
{

    int i = 3;
    int *j;

    j = &i;

    cout << "\n"
         << j;
    cout << "\n"
         << &i;
    cout << "\n"
         << &j;
    cout << "\n"
         << *j;
    cout << "\n"
         << *(&j);
    cout << "\n"
         << *(&i);

    return 0;
}