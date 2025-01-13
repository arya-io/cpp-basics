#include <iostream>
using namespace std;

class date
{

    int d, y;
    string m;

public:
    void input()
    {

        cout << "Enter date: ";
        cin >> d;

        cout << "Enter month: ";
        cin >> m;

        cout << "Enter Year: ";
        cin >> y;
    }

    void output()
    {

        cout << "Date is: " << d << " " << m << " " << y << endl;
    }
};

int main()
{

    date obj;
    obj.input();
    obj.output();

    return 0;
}