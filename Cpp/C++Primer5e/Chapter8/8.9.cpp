#include <iostream>
#include <string>
#include <sstream>

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

int main()
{
    string line;
    getline(cin, line);

    cout << line << endl;

    istringstream iss(line);
    readAndPrint(iss);

    return 0;
}