#include <string>
using std::string;

bool is_low_form(const string& s)
{
    for(auto &c : s){
        if('a' <= c && c <= 'z'){
            return 0;
        }
    }
}

void to_low_form(string& s)
{
    for(auto c : s){
        if('A' <= c && c <= 'Z'){
            c += ('A' - 'a');
        }
    }
}

//形参类型并不相同