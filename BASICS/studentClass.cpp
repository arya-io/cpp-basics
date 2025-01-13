// A-24 Arya Bharne

#include <iostream>
using namespace std;

class Student
{
    char name[10];
    int age;

public:
    void getdata();
    void putdata();
};

void Student ::getdata()
{

    cout << "Name: ";
    cin>>name;
    cout << "Age: ";
    cin >> age;
}

void Student ::putdata()
{

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main()
{

    Student obj1;
    Student obj2;

    obj1.getdata();
    obj2.getdata();

    obj1.putdata();
    obj2.putdata();

    return 0;
}