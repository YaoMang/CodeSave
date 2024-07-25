#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<int> v6{10};
    vector<string> v7{10, "hi"};

    for(auto a: v1){
        cout<<a<<' ';
    }
    cout<<'\n'<<"Size of it:"<<v1.size()<<'\n';

    for(auto a: v2){
        cout<<a<<' ';
    }
    cout<<'\n'<<"Size of it:"<<v2.size()<<'\n';

    for(auto a: v3){
        cout<<a<<' ';
    }
    cout<<'\n'<<"Size of it:"<<v3.size()<<'\n';

    for(auto a: v4){
        cout<<a<<' ';
    }
    cout<<'\n'<<"Size of it:"<<v4.size()<<'\n';

    for(auto a: v5){
        cout<<a<<' ';
    }
    cout<<'\n'<<"Size of it:"<<v5.size()<<'\n';

    for(auto a: v6){
        cout<<a<<' ';
    }
    cout<<'\n'<<"Size of it:"<<v6.size()<<'\n';

    for(auto a: v7){
        cout<<a<<' ';
    }
    cout<<'\n'<<"Size of it:"<<v7.size()<<'\n';

    return 0;
}