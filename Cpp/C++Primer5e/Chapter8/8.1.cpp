#include <iostream>

using namespace std;

istream& readAndPrint(istream& is)
{
    char in;
    while (!is.eof())
    {
        is >> in;
        cout << in;
    }
    
    is.clear();

    return is;
}