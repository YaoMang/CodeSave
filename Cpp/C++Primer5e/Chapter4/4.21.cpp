#include <iostream>

using std::cout; using std::endl;

#include <vector>

using std::vector;

int main(int argc, char** argv)
{
    vector<int> ivec={1,2,3,4,5,6,7,8,9};

    for(auto &a : ivec){
        (a % 2) ? a *= 2 : a;
    }

    return 0;
}