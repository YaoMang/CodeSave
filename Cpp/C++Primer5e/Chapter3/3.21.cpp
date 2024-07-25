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

    vector<int> *vname;

    for(auto it= (*vname).begin(); it!=(*vname).end(); ++it){
        cout<<*it<<' ';
    }
    cout<<'\n'<<"Size of it:"<<(*vname).size()<<'\n';

    return 0;
}