#include <iostream>
#include <string>

// Sales_data.h
struct Sales_data{
    std::string isbn() const {return bookNo;};
    Sales_data& combine(const Sales_data&);
    double avg_price() const {return revenue / units_sold;};

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::istream &read(std::istream&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);

// class member implement
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// public function implement

using std::cin; using std::cout; using std::endl;

int trade()
{
    Sales_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
            if(trans.bookNo == total.bookNo){
                total.combine(trans);
            }
            else{
                cout << total.bookNo << ' ' << total.units_sold << ' ' << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << ' ' << total.units_sold << ' ' << total.revenue << endl;
    }
    return 0;
}

int main()
{
    trade();
    return 0;
}