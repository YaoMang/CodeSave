// Sales_data.h

#include <iostream>
#include <string>

class Sales_data{
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::istream &read(std::istream&, Sales_data&);
    friend std::ostream &print(std::ostream&, const Sales_data&);
    
    public:
    Sales_data(const std::string s = ""): Sales_data(s,0,0) {std::cout << "const std::string s" << std::endl;};
    Sales_data(const std::string s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {std::cout << "const std::string s, unsigned n, double p" << std::endl;};
    Sales_data(std::istream& is) {std::cout << "std::istream& is" << std::endl; read(is, *this);};

    std::string isbn() const {return bookNo;};
    Sales_data& combine(const Sales_data&);
    double avg_price() const {return revenue / units_sold;};

    private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);

// function implement

// class member implement
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// public function implement
Sales_data add(const Sales_data& sda_a, const Sales_data& sda_b)
{
    Sales_data ret = sda_a;
    return ret.combine(sda_b);
}

std::istream &read(std::istream& is, Sales_data& sda)
{
    is >> sda.bookNo >> sda.units_sold >> sda.revenue;
    return is;
}

std::ostream &print(std::ostream& os, const Sales_data& sda)
{
    os << sda.isbn() << ' ' << sda.units_sold << ' ' << sda.revenue;
    return os;
}

int main(int argc, char** argv)
{
    Sales_data();
    Sales_data("Hello");
    Sales_data("HELLO", 3, 4.5);

    return 0;
}