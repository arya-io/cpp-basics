#include <iostream>
using namespace std;

class time
{

    int hours, min, sec;

public:
    void get_time()
    {

        cout << "\nEnter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> min;

        cout << "Enter seconds: ";
        cin >> sec;
    }

    void put_time()
    {

        cout << "\nTime is: " << hours << ":" << min << ":" << sec << endl;
    }

    void sum(time &, time &);
};

void time ::sum(time &t1, time &t2)
{

    sec = t1.sec + t2.sec;
    min = sec / 60;
    sec = sec % 60;
    min = min + t1.min + t2.min;
    hours = min / 60;
    min = min % 60;
    hours = hours + t1.hours + t2.hours;
}

int main()
{

    time t1, t2, t3;

    cout << "\nEnter first time details: \n";
    t1.get_time();

    cout << "\nEnter second time details: \n";
    t2.get_time();

    cout << "\nThe first time entered is : ";
    t1.put_time();

    cout << "\nThe second time entered is : ";
    t2.put_time();

    t3.sum(t1, t2);

    cout << "\nThe sum of two times are: ";
    t3.put_time();

    return 0;
}