#include <iostream>
using namespace std;

class date
{

    int d, y;
    string m;

public:
    date(int d, int y, string m)
    {

        cout << "Date is: " << d << " " << m << " " << y << endl;
    }
};

int main()
{

    int d, y;
    string m;

    cout << "Enter date: ";
    cin >> d;

    cout << "Enter month: ";
    cin >> m;

    cout << "Enter Year: ";
    cin >> y;

    date(d, y, m);

    return 0;
}