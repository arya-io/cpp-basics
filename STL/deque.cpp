// Deque -> Doubly Ended Queue
// Dono end se insertion aur deletion ho sakta hai
// Ye bhi dynamic hai matlab vector ke jaise size increase ho sakta hai

#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << ends;
    }
    cout << endl;

    // d.pop_back();

    // Yaha bhi d.at() use kar sakte hai elements ki position print karne ke liye
    // Front, Back, Empty is also applicable

    // Abhi element delete karne ke liye erase() function use kar sakte hai

    cout << "Before erase, size -> " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);
    // front element erase ho gaya yani '2'

    cout << "After erase, size -> " << d.size() << endl;

    for (int i : d)
    {
        cout << i << ends;
    }
    cout << endl;

    return 0;
}