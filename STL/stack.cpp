// Jo Book sabse pahle rakhi hai, vo sabse aakhir me bahar niklegi
// Also known as LIFO or FILO

#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;

    s.push("Arya ");
    s.push("Bharne ");
    s.push("AI");

    cout << "Top Element: " << s.top() << endl;
    // AI print hoga kyuki vo humne sabse last me add kiya hai

    s.pop();

    cout << "Top Element: " << s.top() << endl;

    cout << "Size of Stack: " << s.size() << endl;

    return 0;
}