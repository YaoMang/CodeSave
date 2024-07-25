#include <iostream>
using std::cout; using std::endl;

int main(int argc, char** argv)
{
    int pDefArray[] = {0,1,41,4,12,52,12};
    int* aPtr = pDefArray;

    // it is also possible to use pointer derectly
    for(int i = 0; i < sizeof(pDefArray) / sizeof(*pDefArray); ++i)
        *(aPtr + i) = 0;

    for(auto i : pDefArray)
        cout << i << ' ';
    cout << endl;

    return 0;
}