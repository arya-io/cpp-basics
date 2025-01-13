#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << "\nEnter your age: ";
    cin >> age;

    if (age >= 18)
        goto Vote;
    else
        goto notVote;

Vote:
    cout << "\nYou are eligible to vote.";
    return 0;
notVote:
    cout << "\nYou are not eligible to vote.";
    return 0;
}