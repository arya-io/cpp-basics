#include <iostream>
using namespace std;

class person
{
private:
    int run;
    string msg;

public:
    void play()
    {
        run = 50;
        cout << "Today I scored " << run << " runs." << endl;
    }

    void walk()
    {
        msg = "Today I walked 10 kms.";
        cout << msg;
    }
};

int main()
{

    person obj;
    obj.play();
    obj.walk();

    return 0;
}