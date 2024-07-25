#include <iostream>
using std::cout; using std::endl;

int main(int argc, char** argv)
{
    for(int i = 0; argv[i] != 0; ++i){
        cout << argv[i] << '\n';
    }
    cout << endl;

    return 0;
}