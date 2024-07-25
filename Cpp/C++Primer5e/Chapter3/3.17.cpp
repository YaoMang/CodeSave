#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str;
    vector<string> svec;
    
    while(cin>>str){
        svec.push_back(str);
    }

    for(auto &strp: svec){
        for(auto &c: strp){
            c=toupper(c);
        }
    }

    for(auto strp: svec){
        cout<<strp<<'\n';
    }

    cout<<endl;

    return 0;
}