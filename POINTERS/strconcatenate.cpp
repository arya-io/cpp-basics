#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char c[] = "Arya ";
    char d[] = "Bharne";

    char *p, *q;
    p = c;
    q = d;

    cout << strcat(p, q);

    return 0;
}