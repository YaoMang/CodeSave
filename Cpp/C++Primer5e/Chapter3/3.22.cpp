#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

#include <cctype>

int main()
{
    vector<string> text{"string1","string2"};

    for(auto it=text.begin(); it!=text.end() && !it->empty(); ++it){
        for(auto &c: *it){
            c=toupper(c);
        }
        cout<<*it<<endl;
    }

    return 0;
}