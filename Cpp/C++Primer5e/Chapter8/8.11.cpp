#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

void func()
{
    string line, word;
    vector<PersonInfo> people;
    
    istringstream recordOloop;
    auto& record = recordOloop;

    while(getline(cin, line))
    {
        PersonInfo info;
        //istringstream record(line);
        record.clear();
        record.str(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
}