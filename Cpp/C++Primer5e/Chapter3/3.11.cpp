#include <string>

using std::string;

int main()
{
    const string s="Keep out!";
    
    //c type:const char &
    for(auto &c:s){/*...*/}
}