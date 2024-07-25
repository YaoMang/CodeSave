// person.h

#include <iostream>
#include <string>

class Person
{
    friend std::istream &read(std::istream& is, Person& obj);
    friend std::ostream &print(std::ostream& os, const Person& obj);

    public:
    Person() = default;
    Person(const std::string& sname, const std::string& saddr): name(sname), addr(saddr) {};
    Person(std::istream& is) {read(is, *this);};

    auto get_name() const -> const std::string& {return name;};
    auto get_addr() const -> const std::string& {return addr;};
    
    private:
    std::string name;
    std::string addr;
};

std::istream &read(std::istream& is, Person& obj);
std::ostream &print(std::ostream& os, const Person& obj);

// implement
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