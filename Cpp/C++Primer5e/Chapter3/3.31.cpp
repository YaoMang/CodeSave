#include <iostream>
using std::cout; using std::endl;

int main(int argc, char** argv)
{
    int a[10];
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
        a[i] = i;

    for(auto i : a)
        cout << i << ' ';
    cout << endl;

    return 0;
}