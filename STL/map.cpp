// map --> stored in sorted values of key

#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, string> m;

    m[1] = "Bharne";
    m[2] = "Arya";
    m[3] = "AI";

    for (auto i : m)
    {
        cout << i.first << ends;
    }
    cout << endl;

    // To insert another element
    m.insert({7, "Lord"});

    cout << "Before Erase: " << endl;

    for (auto i : m)
    {
        cout << i.first << ends << i.second << endl;
    }
    cout << endl;

    cout << "Finding 7: " << m.count(7) << endl;

    m.erase(7);

    cout << "After Erase: " << endl;

    for (auto i : m)
    {
        cout << i.first << ends << i.second << endl;
    }
    cout << endl;

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}