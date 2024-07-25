#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <vector>
using std::vector;

int main(int argc, char** argv)
{
    vector<int> ivec1 = {1,2,3,4,5,6,7,8,9};
    vector<int> ivec2 = {1,2,3,4,5};

    bool indicator = true;
    for(auto it = ivec2.begin(); it != ivec2.end(); ++it){
        if(*it != ivec1[it - ivec2.begin()]){
            indicator = false;
        }
    }

    cout << indicator << endl;

    return 0;
}