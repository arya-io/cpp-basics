#include <iostream>
#include <string>
using namespace std;

class details
{

public:
    details(string name, string birth_date, string blood_group, string mobile, string standard, string section)
    {
        cout << "\nThe constructor is called.\n"
             << endl;

        cout << "The student details are as follows: " << endl;
        cout << "Name: " << name << endl;
        cout << "Birth Date: " << birth_date << endl;
        cout << "Blood Group: " << blood_group << endl;
        cout << "Mobile Number: " << mobile << endl;
        cout << "Class: " << standard << endl;
        cout << "Section: " << section << endl;
    }

};

int main()
{

    string name, birth_date, blood_group, mobile, standard, section;

    cout << "Enter your Name: ";
    getline(cin, name);

    cout << "Enter your Birth Date: ";
    getline(cin, birth_date);

    cout << "Enter your Blood Group: ";
    getline(cin, blood_group);

    cout << "Enter your Mobile Number: ";
    getline(cin, mobile);

    cout << "Enter your Class: ";
    getline(cin, standard);

    cout << "Enter your Section: ";
    getline(cin, section);

    details (name, birth_date, blood_group, mobile, standard, section);

    return 0;
}