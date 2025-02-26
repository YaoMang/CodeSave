#include <string>
#include <iostream>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

using std::cin; using std::cout; using std::endl;

int trade()
{
    Sales_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
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

int main()
{
    trade();
    return 0;
}