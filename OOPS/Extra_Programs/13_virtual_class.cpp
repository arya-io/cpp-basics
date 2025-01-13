#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_No;

public:
    void get_No(int x)
    {

        roll_No = x;
    }

    void put_No()
    {

        cout << "Student's Roll No. is " << roll_No << endl;
    }
};

class test : virtual public Student
{

protected:
    float sub_Marks;

public:
    void get_subMarks(float y)
    {

        sub_Marks = y;
    }

    void put_sub_Marks()
    {

        cout << "\nStudent's subject marks are " << sub_Marks << endl;
    }
};

class sports : public virtual Student
{

protected:
    float sp_marks;

public:
    void get_spMarks(float z)
    {

        sp_marks = z;
    }

    void put_sp_Marks()
    {

        cout << "\nStudent's Sports marks are " << sp_marks << endl;
    }
};

class result : public test, public sports
{

    float total_marks;

public:
    void put_Result()
    {

        total_marks = sub_Marks + sp_marks;

        put_No();

        put_sub_Marks();
        put_sp_Marks();

        cout << "Total Marks: " << total_marks << endl;
    }
};

int main()
{

    result R;
    R.get_No(34);
    R.get_subMarks(67.2);
    R.get_spMarks(98.9);
    R.put_Result();

    return 0;
}