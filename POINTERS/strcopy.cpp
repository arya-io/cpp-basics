#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char c[] = "Arya ", d[20];
    char *p, *q;

    p = c;
    q = d;

    strcpy(q, p);

    cout<<d;

    return 0;
}