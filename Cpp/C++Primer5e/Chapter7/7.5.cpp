#include <string>

struct Person
{
    std::string name;
    std::string addr;

    auto get_name() const -> const std::string& {return name;};
    auto get_addr() const -> const std::string& {return addr;};
};

// 应该加上 const ，因为常量 Person 对象也会使用这些操作。