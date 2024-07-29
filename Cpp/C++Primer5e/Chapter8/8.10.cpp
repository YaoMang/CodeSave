#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("infile.txt");
    string line;
    vector<string> info;
    while(getline(ifs, line))
    {
        info.push_back(line);
        istringstream iss(info[0]);
        
        while(iss)
        {
            string str;
            iss >> str;
            cout << str << endl;
        }        
    }

}