#include <iostream>
using namespace std;

class area
{

public:
    area(int length, int breadth)
    {
         cout << "The area of rectangle is " << length * breadth<<endl;
    }    
};

int main()
{
    int length, breadth;
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;
    
    area(length, breadth);

    return 0;
}