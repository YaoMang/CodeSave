#include <vector>
using std::vector;

#include <iostream>
using std::cout; using std::endl;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
    if(beg != end){
        cout << *beg << endl;
        print(++beg, end);
    }
}