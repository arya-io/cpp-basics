#include <iostream>
using namespace std;

int main()
{

    int eng, maths, physics, chemistry;

    cout << "\nEnter subject marks out of 100";

    cout << "\nEnter your English Marks: ";
    cin >> eng;
    cout << "\nEnter your Maths Marks: ";
    cin >> maths;
    cout << "\nEnter your Physics Marks: ";
    cin >> physics;
    cout << "\nEnter your Chemistry Marks: ";
    cin >> chemistry;

    int total = eng + maths + physics + chemistry;

    float avg = (eng + maths + physics + chemistry) / 4;

    if (avg >= 90)
    {
        cout << "\nOutstanding";
    }
    else if (avg >= 80)
    {
        cout << "\nExcellent";
    }
    else if (avg >= 70)
    {
        cout << "\nVery Good";
    }
    else if (avg >= 60)
    {
        cout << "\nGood";
    }
    else if (avg >= 50)
    {
        cout << "\nAverage";
    }
    else if (avg >= 40)
    {
        cout << "\nNeed Improvement";
    }
    else if (avg >= 30)
    {
        cout << "\nNot Satisfactory";
    }
    else
    {
        cout << "\nYou are fail.";
    }
    return 0;
}