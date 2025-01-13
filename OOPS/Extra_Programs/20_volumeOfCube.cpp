#include <iostream>
using namespace std;

class volume
{
    public:
    
    volume(int length, int breadth, int height)
    {
        cout<<"\nThe constructor is called.\n"<<endl;
        cout << "The volume of the box is " << length * breadth * height << endl;
    }

};

int main()
{

    int l, b, h;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    cout << "Enter height: ";
    cin >> h;

    volume(l, b, h);

    return 0;
}