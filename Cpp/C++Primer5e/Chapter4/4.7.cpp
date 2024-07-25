// 数据的大小超过这种数据结构能够表达的范围

#include <iostream>

using std::cout; using std::endl;

int main(int argc, char** argv)
{
    unsigned int_us = -1;
    cout << int_us << endl;

    unsigned short int_su = -1;
    cout << int_su << endl;

    short int_sh = 32767;
    ++ int_sh;
    cout << int_sh << endl;

    return 0;
}

// 当计算的结果超出该类型所能表示的范围时就会产生溢出。(github cpp_practice)