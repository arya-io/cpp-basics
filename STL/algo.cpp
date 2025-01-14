#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(2);

    for (int i : v)
    {
        cout << i << ends;
    }
    cout << endl;

    cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Lower Bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper Bound -> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    // Reverse the string

    string s = "ABCD";

    reverse(s.begin(), s.end());

    cout << "Reversed String -> " << s << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After Rotate: " << endl;
    for (int i : v)
    {
        cout << i << ends;
    }
    cout << endl;
    // Here, the elements are shifted to left.

    sort(v.begin(), v.end());

    cout << "After sorting: " << endl;

    for (int i : v)
    {
        cout << i << ends;
    }
    cout << endl;

    return 0;
}