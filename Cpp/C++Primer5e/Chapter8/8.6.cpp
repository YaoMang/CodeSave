#include <string>
#include <iostream>
#include <fstream>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

using std::cin; using std::cout; using std::endl;
using std::ifstream;

int trade(std::istream& is)
{
    Sales_data total;
    if(is >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data trans;
        while(is >> trans.bookNo >> trans.units_sold >> trans.revenue){
            if(trans.bookNo == total.bookNo){
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
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

int main(int argc, char** argv)
{
    ifstream fs;
    fs.open(argv[1]);
    trade(fs);
    return 0;
}