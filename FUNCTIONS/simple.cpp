#include <iostream>
using namespace std;

void fun1(int a = 100, int b = 200)
{

    cout << a << endl;
    cout << b << endl;
    cout << endl;
}
int main()
{

    fun1(10, 20);
    fun1(36, 54);

    return 0;
}