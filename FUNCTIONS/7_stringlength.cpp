#include <iostream>
#include <string.h>

using namespace std;

void Stringlength(char c[])
{

    int length = strlen(c);
    cout << length;
}

int main()
{

    Stringlength("Arya Bharne");

    return 0;
}