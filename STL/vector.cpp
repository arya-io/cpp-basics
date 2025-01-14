// array ka size increase hone par vector automatically apni capacity ko increase(double) kar leta hai

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    vector<int> a(5, 1);
    // 5 elements ka array create karega aur sabhi ko 1 se initialise karega

    cout << "Array a: " << endl;
    for (int i : a)
    {
        cout << i << ends;
    }
    cout << endl;

    // 'last' naam ke array me 'a' array ke elements copy kar liye
    vector<int> last(a);
    cout << "Array last: " << endl;
    for (int i : last)
    {
        cout << i << ends;
    }
    cout << endl;


    cout << "\nCapacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "\nCapacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "\nCapacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "\nCapacity -> " << v.capacity() << endl;

    cout << "\nSize -> " << v.size() << endl;

    // Capacity batata hai ki array ke andar kitne elements rakhne ki jagah hai
    // Size batata hai ki array ke andar kitne elements rakhe hue hai

    cout << "Element at index 2 -> " << v.at(2) << endl;

    cout << "Front -> " << v.front() << endl;
    cout << "Back -> " << v.back() << endl;

    // For Pop

    cout << "Before Pop: " << endl;
    for (int i : v)
    {
        cout << i << ends;
    }
    cout << endl;

    v.pop_back();

    cout << "After Pop: " << endl;
    for (int i : v)
    {
        cout << i << ends;
    }
    // you can use here 'auto' also
    cout << endl;

    // For Clear

    cout << "Before Clear: " << endl;
    cout << "Size: " << v.size() << endl;

    v.clear();

    cout << "After Clear: " << endl;
    cout << "Size: " << v.size() << endl;

    return 0;
}

// emplace_back is same as push_back

vector<int>::iterator it = v.begin();
it++;
cout<<*(it)<<" ";