#include <iostream>
using namespace std;

struct stud1
{

    int marks;
    float average;
    double salary;
};

union stud2
{

    int marks;
    float average;
    double salary;
};

int main()
{

    struct stud1 s1;
    union stud2 s2;

    cout << "\nStructure size = " << sizeof(s1);
    cout << "\nUnion size = " << sizeof(s2);

    return 0;
}