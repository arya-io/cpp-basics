#include <iostream>
using namespace std;

class ipl
{

private:
    string tv;

public:
    void show()
    {

        tv = "IPL Final 2021";
    }

    friend void ajinkya(ipl r);
};

void ajinkya(ipl r)
{

    cout << "Watching " << r.tv;
}

int main()
{

    ipl i;
    i.show();
    ajinkya(i);

    return 0;
}