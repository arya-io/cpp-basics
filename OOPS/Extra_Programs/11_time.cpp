#include <iostream>
using namespace std;

class time
{

    int h, min;

public:
    void input()
    {

        cout << "Enter hour: ";
        cin >> h;

        cout << "Enter minutes: ";
        cin >> min;
    }

    void output()
    {

        cout << "Time is: " << h << ":" << min << endl;
    }
};

int main()
{

    time obj;
    obj.input();
    obj.output();

    return 0;
}