#include <iostream>
#include <string>

struct Person
{
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
