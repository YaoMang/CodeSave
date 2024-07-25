#include <fstream>
#include <string>

using namespace std;

class Sales_Data{
public:
    std::string& isbn() const;
    Sales_Data& combine(Sales_Data& Data);
    Sales_Data& add(Sales_Data& Data);
    Sales_Data& read(std::istream& is);
    void print(std::ostream& os);
private:
    std::string bookNo;
};

std::string& Sales_Data::isbn() const
{
    return this->bookNo;
}

Sales_Data& Sales_Data::combine(Sales_Data& Data)
{
    
}

Sales_Data& add(Sales_Data& Data);
Sales_Data& read(std::istream& is);
void print(std::ostream& os);