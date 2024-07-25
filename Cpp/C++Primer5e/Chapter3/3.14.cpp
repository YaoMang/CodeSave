#include <iostream>
#include <vector>

using std::cin;
using std::vector;

int main()
{
    vector<int> num;
    int temp=0;//用于暂存从istream获得的整数

    while(cin>>temp){
        num.push_back(temp);
    }

    //用于验证

    /*
        for(auto it: num){
            std::cout<<it<<' ';
        }

        std::cout<<std::endl;
    */
   
    return 0;
}