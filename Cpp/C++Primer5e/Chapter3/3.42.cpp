#include <vector>
using std::vector;

#include <iostream>
using std::cout; using std::endl;

int main(int argc, char** argv)
{
    vector<int> ivec = {1,2,3,4,5,6,7,8,9};

    int a[9];

    for(int i = 0; i < 9; ++i)
        a[i] = ivec[i];
    
    for(auto i : a)
        cout << i << ' ';
    cout << endl;

    return 0;
}