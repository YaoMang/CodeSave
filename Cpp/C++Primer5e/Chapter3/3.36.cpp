#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

// MAGIC NUMBERS

bool isEqualVec(vector<int>* const ivec1, vector<int>* const ivec2);
bool isEqualAry(int const* ary1, int const* ary2, int size);

int main(int argc, char** argv)
{
    vector<int> ivec1 = {12,54,5564,654,56654,5645,456,7};
    vector<int> ivec2 = ivec1;
    vector<int> ivec3 = {564545,565,564564};

    int a1[] = {1,2,3,4,5,6,7};
    int a2[] = {1,2,3,4,5,6,7};
    int a3[] = {1,2,3,4,5,7,6};

    cout << "isEqualVec()" << endl;
    cout << isEqualVec(&ivec1, &ivec2) << ' ' << isEqualVec(&ivec2, &ivec3) << endl;

    cout << "isEqualAry()" << endl;
    cout << isEqualAry(a1, a2, sizeof(a1) / sizeof(*a1)) << ' ' << isEqualAry(a2, a3, sizeof(a2) / sizeof(*a2)) << endl;

    return 0;
}

bool isEqualVec(vector<int>* const ivec1, vector<int>* const ivec2)
{
    bool ret = true;

    if(*ivec1 != *ivec2)
        ret = false;

    // Actually we don't use it because there's aready some functions 
    // defined by standard library
    /*
    auto it1 = ivec1->begin();
    auto it2 = ivec2->begin();

    if(ivec1->size() != ivec2->size())
        ret = false;

    while(it1 <= ivec1->end() && it2 <= ivec2->end() && ret){
        if(*it1 != *it2){
            ret = false;
            break;
        }
        ++ it1;
        ++ it2;
    }
    */

    return ret;
}


//could use begin/end to find out the size of array (at page 99/106)
bool isEqualAry(int const* ary1, int const* ary2, int size)
{
    bool ret = true;

    for(int i = 0; i < size; ++i){
        if(*ary1 != *ary2){
            ret = false;
            break;
        }
        ++ ary1;
        ++ ary2;
    }

    return ret;
}