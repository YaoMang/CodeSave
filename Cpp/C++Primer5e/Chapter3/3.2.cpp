#include <iostream>
#include <string>

using std::string;
using std::cin;using std::cout;using std::endl;

int main()
{
    string line,word;
    bool option;
    cin>>option;

    if(option){
        while(getline(cin,line))
            cout<<line<<"\n";

        cout<<endl;
    }
    else{
        while(cin>>word)
            cout<<word<<"\n";
        
        cout<<endl;
    }

    return 0;
}