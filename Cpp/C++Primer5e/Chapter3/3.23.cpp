#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> ivec(10,1);

    for(auto it=ivec.begin(); it!=ivec.end(); ++it){
        *it*=2;
    }

    for(auto i: ivec){
        cout<<i<<' ';
    }
    cout<<endl;

    return 0;
}