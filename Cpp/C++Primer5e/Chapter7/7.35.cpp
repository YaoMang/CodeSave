#include <string>
using std::string;


typedef string Type;
Type initVal(); // string
class Exercise {
public:
    typedef double Type; // double
    Type setVal(Type); // double double
    Type initVal(); // double
private:
    int val;
};
Type Exercise::setVal(Type parm) { // strinf double
    val = parm + initVal();
    return val;
}

#include <string>
using std::string;


typedef string Type;
Type initVal(); // string
class Exercise_C {
public:
    typedef double Type; // double
    Type setVal(Type); // double double
    Type initVal(); // double
private:
    int val;
};
Exercise_C::Type Exercise_C::setVal(Type parm) { // double double
    val = parm + initVal();
    return val;
}

// 这样的实现在使用中并不推荐，实际上可以定义一个不同的类型名称（或者直接使用 :: 运算符）