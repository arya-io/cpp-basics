// Doubly Ended Lists
// List is similar to Deque but here we have to traverse through the list
// if we want to find the position of the element in the array

#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> l;

    list<int> n(5, 100);
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    cout << "After erase: " << endl;
    for (int i : l)
    {
        cout << i << ends;
    }
    cout << endl;

    cout << "Size -> " << l.size() << endl;

    return 0;
}