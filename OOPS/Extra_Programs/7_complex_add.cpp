#include <iostream>
using namespace std;

class complex
{

    int real, imaginary;

    public:

    void input()
    {

        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void sum(complex c, complex d)
    {

        int realSum = c.real + d.real;
        int complexSum = c.imaginary + d.imaginary;

        cout << "The sum of complex number is " << realSum << " + " << complexSum << "i" << endl;
    }
};

int main()
{

    complex c, d, e;

    cout << "Enter first complex number:" << endl;
    c.input();
    cout << "Enter second complex number:" << endl;
    d.input();

    e.sum(c, d);

    return 0;
}