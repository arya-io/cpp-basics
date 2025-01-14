// Set -> unique elements store hote hai
// aur ordered print hoga
// unordered me random elements print ho jate hai
// set me modification nahi kar sakte
// isme sirf elements add ya delete hi kar sakte hai
// agar elements repeatedly insert bhi ho rahe hai to
// vo sirf ek hi baar print hoga
// complexity O(log n)
// for begin, end, size it is O(1)
// There is a multiset also.
// There is a unordered_set also.

#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << ends;
    }
    cout << endl;

    // To erase 2nd element

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i : s)
    {
        cout << i << ends;
    }
    cout << endl;

    // Whether the element is present or not
    cout << "5 is present or not? " << s.count(5) << endl;
    cout << "-5 is present or not? " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << it << ends;
    }
    cout << endl;

    return 0;
}
