#include <iostream>
#include <string>

class Employee {
public:
    Employee(std::string na, std::string ge, int ag, std::string bir, double sa): 
            name(na), gender(ge), age(ag), birthday(bir), salary(sa) {};
    Employee(std::istream &is) {is >> name >> gender >> age >> birthday >> salary;};
    Employee(std::string na): name(na) {};

private:
    std::string name;
    std::string gender;
    int age;
    std::string birthday;
    double salary;
};
