#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;

    ifstream newFile("C:\\Users\\SHRI\\Desktop\\files.txt");

    while (getline(newFile, str))
    {
        cout << str << endl;
    }
    // Prints string line by line

    // cout << "File Created."<<endl;

    newFile.close();

    return 0;
}