// Priority Queue -> isme first element maximum hota hai
// It is like a heap
// the elements are assembled like a tree

#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    // For Max Heap

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << ends;
        maxi.pop();
    }
    cout << endl;

    // For Min Heap

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    int num = mini.size();

    for (int i = 0; i < num; i++)
    {
        cout << mini.top() << ends;
        mini.pop();
    }
    cout << endl;

    cout << "Is it empty? " << mini.empty() << endl;

    return 0;
}