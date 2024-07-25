#include <vector>
#include <iostream>

using std::vector;
using std::cin; using std::cout; using std::endl;

void program1();
void program2();

int main()
{
    //program1();
    //program2();
    return 0;
}

void program1()
{
    vector<int> ivec;
    int num=0;

    while(cin>>num){
        ivec.push_back(num);
    }

    for(decltype(ivec.size()) i=0; i<ivec.size()-1; ++i){
        cout<<ivec[i]+ivec[i+1]<<' ';
    }
    cout<<endl;
}

void program2()
{
    vector<int> ivec;
    int num=0;

    while(cin>>num){
        ivec.push_back(num);
    }

    for(decltype(ivec.size()) i=0; i<ivec.size()-1-i; ++i){
        cout<<ivec[i]+ivec[ivec.size()-1-i]<<' ';
    }
    cout<<endl;
}