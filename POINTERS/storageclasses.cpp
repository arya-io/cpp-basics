#include <iostream>
using namespace std;

void fun()
{
    auto a = 10;
    static int b = 10;
    cout << a << endl;
    cout << b << endl;
    cout << endl;
    ++a;
    ++b;

} // extern or global

int main()
{

    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    // static int c; //static

    // register int d; //register

    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;
    // cout << d << endl;

    return 0;
}