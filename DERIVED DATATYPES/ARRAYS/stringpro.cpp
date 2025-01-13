#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char str[] = "Arya";
    char str1[] = "Arya";
    char str2[] = " Bharne";

    // to print the string
    cout << str << endl;

    // to count the length of the string
    int r = strlen(str);
    cout << r;

    cout << "\n";

    // to reverse the string
    cout << strrev(str);
    // while (r-1 >= 0)
    // {
    //     char rev = str[r-1];
    //     cout << rev;
    //     r--;
    // }

    // to concatenate two strings
    cout << "\n"
         << strcat(str1, str2);

    // to copy two strings
    char str4[] = "Text copied.", str3[20];
    strcpy(str3, str4);

    cout << "\n"
         << str3;

    return 0;
}