#include <iostream>
using std::cin; using std::cout; using std::endl;

long long fact(int val);

int main(int argc, char** argv)
{
    int i = 0;
    cin >> i;

    cout << fact(i) << endl;

    return 0;
}

long long fact(int val)
{
    if(val < 0){
        throw std::runtime_error("val cannot lower than 0");
    }

    long long ret = 1;

    while(val){
        ret *= val;
        --val;
    }

    return ret;
}