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

    if (avg >= 75)
    {
        cout << "\nYou are eligible for the Engineering Course";
    }

    else
    {
        cout << "\nYou are not eligible for the Engineering Course";
    }

    return 0;
}