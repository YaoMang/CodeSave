#include <iostream>
using std::cin;using std::cout;using std::endl;

#include <string>
using std::string;

#include <cctype>

int main()
{
    string str_punc;
    cin>>str_punc;

    for(char c:str_punc){
        if(!ispunct(c)){
            cout<<c;
        }
    }

    cout<<endl;

    return 0;
}