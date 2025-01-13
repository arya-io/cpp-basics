#include <iostream>
using namespace std;

class A
{

public:
    int count = 0;

    void function_to_be_called()
    {
        count++;
    }

    void function_called_times()
    {
        cout << "Function is called " << count << " times.";
    }

};

int main()
{

    A obj;
    obj.function_to_be_called();
    obj.function_to_be_called();
    obj.function_to_be_called();
    obj.function_to_be_called();
    obj.function_to_be_called();
    obj.function_called_times();

    return 0;
}