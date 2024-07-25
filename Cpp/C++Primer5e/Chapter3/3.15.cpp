#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::vector;
using std::string;

int main()
{
    vector<string> str;
    string temp;//用于暂存从istream获得的整数

    while(cin>>temp){
        str.push_back(temp);
    }

    //用于验证

    /*
        for(auto it: str){
            std::cout<<it<<' ';
        }

        std::cout<<std::endl;
    */
   
    return 0;
}