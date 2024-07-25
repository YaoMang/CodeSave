#include <iostream>
using std::cout; using std::endl;

int func(int parameter);

int main(int argc, char** argv)
{
    int i = 255;

    while(i){
        cout << func(i) << ' ' << i << '\n';
        --i;
    }
    cout << endl;

    return 0;
}

int func(int parameter)
{
    static int cnt = 0;
    ++cnt;

    return cnt;
}
