#include <iostream>
using namespace std;

int main()
{

    int total_amount, amount, rupee_2000,
        rupee_500, rupee_200, rupee_100,
        rupee_50, rupee_20, rupee_10,
        rupee_5, rupee_2, rupee_1;

    bool f1 = 0;
    bool f2 = 0;
    bool f3 = 0;
    bool f4 = 0;
    bool f5 = 0;
    bool f6 = 0;
    bool f7 = 0;
    bool f8 = 0;
    bool f9 = 0;
    bool f10 = 0;

    cout << "\nEnter your total amount: ";
    cin >> total_amount;

    amount = total_amount;

    if (total_amount >= 2000)
    {
        rupee_2000 = total_amount / 2000;
        total_amount -= rupee_2000 * 2000;
        f1 = 1;
    }

    if (total_amount >= 500)
    {
        rupee_500 = total_amount / 500;
        total_amount -= rupee_500 * 500;
        f2 = 1;
    }

    if (total_amount >= 200)
    {
        rupee_200 = total_amount / 200;
        total_amount -= rupee_200 * 200;
        f3 = 1;
    }

    if (total_amount >= 100)
    {
        rupee_100 = total_amount / 100;
        total_amount -= rupee_100 * 100;
        f4 = 1;
    }

    if (total_amount >= 50)
    {
        rupee_50 = total_amount / 50;
        total_amount -= rupee_50 * 50;
        f5 = 1;
    }

    if (total_amount >= 20)
    {
        rupee_20 = total_amount / 20;
        total_amount -= rupee_20 * 20;
        f6 = 1;
    }

    if (total_amount >= 10)
    {
        rupee_10 = total_amount / 10;
        total_amount -= rupee_10 * 10;
        f7 = 1;
    }

    if (total_amount >= 5)
    {
        rupee_5 = total_amount / 5;
        total_amount -= rupee_5 * 5;
        f8 = 1;
    }

    if (total_amount >= 2)
    {
        rupee_2 = total_amount / 2;
        total_amount -= rupee_2 * 2;
        f9 = 1;
    }

    if (total_amount >= 1)
    {
        rupee_1 = total_amount / 1;
        total_amount -= rupee_1 * 1;
        f10 = 1;
    }

    cout << "\nFor " << amount << ", you will require";
    if (f1)
        cout << "\n " << rupee_2000 << " 2000 Rs. notes.";
    if (f2)
        cout << "\n " << rupee_500 << " 500 Rs. notes.";
    if (f3)
        cout << "\n " << rupee_200 << " 200 Rs. notes.";
    if (f4)
        cout << "\n " << rupee_100 << " 100 Rs. notes.";
    if (f5)
        cout << "\n " << rupee_50 << " 50 Rs. notes.";
    if (f6)
        cout << "\n " << rupee_20 << " 20 Rs. notes.";
    if (f7)
        cout << "\n " << rupee_10 << " 10 Rs. notes.";
    if (f8)
        cout << "\n " << rupee_5 << " 5 Rs. coins.";
    if (f9)
        cout << "\n " << rupee_2 << " 2 Rs. coins.";
    if (f10)
        cout << "\n " << rupee_1 << " 1 Re. coin.";

    return 0;
}