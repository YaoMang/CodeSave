#include <iterator>
using std::begin; using std::end;

#include <vector>
using std::vector;

#include <iostream>
using std::cout; using std::endl;


int main(int argc, char** argv)
{
    int int_arr[] = {1,2,3,4,5,6,7,8,9};

    vector<int> ivec(begin(int_arr), end(int_arr));

    for(auto i : ivec)
        cout << i << ' ';
    cout << endl;

    return 0;
}