#include <iostream>
#include <string>

class Person
{
    public:

    Person() = default;
    Person(const std::string& sname, const std::string& saddr): name(sname), addr(saddr) {};
    Person(std::istream& is) {read(is, *this);};
 
    std::string name;
    std::string addr;

    auto get_name() const -> const std::string& {return name;};
    auto get_addr() const -> const std::string& {return addr;};
};

std::istream &read(std::istream& is, Person& obj)
{
    is >> obj.name >> obj.addr;
    return is;
}

std::ostream &print(std::ostream& os, const Person& obj)
{
    os << obj.get_name() << " " << obj.get_addr();
    return os;
}

// 都声明为 public ，因为目前版本的 People 类依赖外部函数实现部分 read() 操作