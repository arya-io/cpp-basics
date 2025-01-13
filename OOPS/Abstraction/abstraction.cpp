#include <iostream>
using namespace std;

class myBank
{

private:
    int atmpin, balance;

public:
    string bName, ifsc;

    int acc_num;

    void input()
    {

        atmpin = 4231;

        balance = 700000;

        bName = "PayTM";

        ifsc = "PYTM01235";

        acc_num = 46213950;
    }

    void output()
    {

        cout << "My Bank Details are as follows: " << endl;

        cout << "Bank Name: " << bName << endl;
        cout << "Bank Balance: " << balance << endl;
        cout << "Bank IFSC Code: " << ifsc << endl;
        cout << "Bank Account Number: " << acc_num << endl;
        cout << "Bank ATM PIN: " << atmpin << endl;
    }
};

int main()
{

    myBank m;

    m.input();

    m.output();

    return 0;
}