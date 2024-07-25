#include <iostream>
using std::cin;using std::cout;using std::endl;

#include <string>
using std::string;

int main()
{
    string str;
    cin>>str;

    for(char &c:str){
        c='X';
    }

    cout<<"\n"<<str;

    return 0;
}