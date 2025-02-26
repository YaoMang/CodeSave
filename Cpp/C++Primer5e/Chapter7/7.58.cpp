/*
//rate应该是一个常量表达式。而类内只能初始化整型类型的静态常量，所以不能在类内初始化vec。修改后如下：

// example.h
class Example {
public:
    static constexpr double rate = 6.5;
    static const int vecSize = 20;
    static vector<double> vec;
};

// example.C
#include "example.h"
constexpr double Example::rate;
vector<double> Example::vec(Example::vecSize);
*/