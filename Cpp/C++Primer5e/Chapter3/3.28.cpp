//空字符串 0 空字符串 未初始化

#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl;

string sa[10];
int ia[10];

int main(int argc, char** argv)
{
    string sa2[10];
    int ia2[10];

    for(auto i : sa)
        cout << i << " x ";
    cout << endl;

    for(auto i : ia)
        cout << i << " x ";
    cout << endl;

    for(auto i : sa2)
        cout << i << " x ";
    cout << endl;

    for(auto i : ia2)
        cout << i << " x ";
    cout << endl;

    return 0;
}