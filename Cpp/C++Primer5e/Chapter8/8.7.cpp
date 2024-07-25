#include <string>
#include <iostream>
#include <fstream>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

using std::cin; using std::cout; using std::endl;
using std::ifstream;using std::ofstream;

int trade(std::istream& is, std::ostream& os)
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
                os << total.bookNo << ' ' << total.units_sold << ' ' << total.revenue << endl;
                total = trans;
            }
        }
        os << total.bookNo << ' ' << total.units_sold << ' ' << total.revenue << endl;
    }
    return 0;
}

int main(int argc, char** argv)
{
    std::cout << argc << std::endl;
    if(argc == 3)
    {
        ifstream ifs;
        ofstream ofs;

        ifs.open(argv[1]);
        ofs.open(argv[2]);
        trade(ifs, ofs);
    }
    return 0;
}