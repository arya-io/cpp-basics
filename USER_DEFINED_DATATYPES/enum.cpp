#include <iostream>
using namespace std;

int main()
{

    enum students
    {
        boys,
        girls,
        others
    };

    cout << boys << endl;
    students str = others;
    cout << str << endl;

    return 0;
}