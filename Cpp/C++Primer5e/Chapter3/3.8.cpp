#include <iostream>
using std::cin;using std::cout;using std::endl;

#include <string>
using std::string;

int main()
{
    string str;
    cin>>str;
    
    string str1=str;

    int i=0;
    while(i<str.size()){
        str[i]='X';
        i++;
    }
    cout<<"\n"<<str;

    str=str1;

    for(int j=0;j<str.size();j++)
        str[j]='X';
    
    cout<<"\n"<<str;

    return 0;
}