#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

void array();
void vec();

int main(int argc, char** argv)
{
    cout << "ARRAY" << endl;
    array();

    cout << "VECTOR" << endl;
    vec();

    return 0;
}

void array()
{
    int a[10];
    for(int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
        a[i] = i;
    
    int b[10];
    for(int i=0; i < sizeof(a) / sizeof(a[0]); ++i)
        b[i] = a[i];
    

    for(auto i : b)
        cout << i << ' ';
    cout << endl;
}

void vec()
{
    int a[10];
    for(int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
        a[i] = i;
    

    vector<int> ivec;
    for(auto i : a)
        ivec.push_back(i);

    for(auto i : ivec)
        cout << i << ' ';
    cout << endl;
}