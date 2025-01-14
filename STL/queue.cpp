// Queue -> It is like a line (katar) 🚶🏻‍♂️🚶🏻‍♂️🚶🏻🚶🏻‍♂️🚶🏻‍♂️🚶🏻‍♂️🚶🏻‍♂️🚶🏻‍♂️
// FIFO

#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("Arya");
    q.push("Bharne");
    q.push("AI");
    
    cout<<"First Element: "<<q.front()<<endl;

    cout<<"Size before pop: "<<q.size()<<endl;

    q.pop();
    // First element gets popped

    cout<<"First Element: "<<q.front()<<endl;

    cout<<"Size after pop: "<<q.size()<<endl;

    return 0;
}
