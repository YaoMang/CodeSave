#include <iostream>
#include <string>

// Sales_data.h
struct Sales_data;
Sales_data add(const Sales_data&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);

struct Sales_data{
    Sales_data() = default;
    Sales_data(const std::string& s): bookNo(s){};
    Sales_data(const std::string& s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {};
    Sales_data(std::istream& is) {read(is, *this);};

    std::string isbn() const {return bookNo;};
    Sales_data& combine(const Sales_data&);
    double avg_price() const {return revenue / units_sold;};

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


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

using std::cin; using std::cout; using std::endl;

int trade()
{
    Sales_data total(cin);
    if(!total.isbn().empty()){
        std::istream& is = cin;
        while(is){
            Sales_data trans(is);
            if(trans.isbn() == total.isbn()){
                total.combine(trans);
            }
            else{
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    return 0;
}

int main()
{
    trade();
    return 0;
}