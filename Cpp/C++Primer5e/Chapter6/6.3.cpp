#include <iostream>

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