#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char c[20];
    char *p = c;
    int length = 0;

    cin>>c;

    while(*p != '\0'){
        length++;
        p++;
    }


    cout << length;

    return 0;
}