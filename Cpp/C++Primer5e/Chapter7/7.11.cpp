#include <iostream>
#include <string>

// Sales_data.h
struct Sales_data{
    Sales_data() = default;
    Sales_data(const std::string& s): bookNo(s){};
    Sales_data(const std::string& s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {};
    Sales_data(std::istream&);

    std::string isbn() const {return bookNo;};
    Sales_data& combine(const Sales_data&);
    double avg_price() const {return revenue / units_sold;};

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
// constructor
Sales_data::Sales_data(std::istream& is)
{
    read(is, *this);
}

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
    Sales_data total;
    if(read(cin, total)){
        Sales_data trans;
        while(read(cin, trans)){
            if(trans.isbn() == total.isbn()){
                total.combine(trans);
            }
            else{
                print(cout, total);
                cout << endl;
                total = trans;
            }
        }
        print(cout, total);
        cout << endl;
    }
    return 0;
}

inline void init()
{
    Sales_data alpha(cin);
    Sales_data beta("XXXXXXXXXXX", 25, 3.1);
    Sales_data zeta("XXXXXXXXXXX");
    Sales_data plural;
    
    print(cout, alpha);
    cout << '\n';
    print(cout, beta);
    cout << '\n';
    print(cout, zeta);
    cout << '\n';
    print(cout, plural);
    cout << endl;
}

int main()
{
    //trade();
    init();
    return 0;
}