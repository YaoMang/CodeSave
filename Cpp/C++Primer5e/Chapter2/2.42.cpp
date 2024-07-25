//Sales_data.h

#ifndef _H_SALES_DATA
#define _H_SALES_DATA

#include <string>

struct Sales_data
{
    std::string book_isbn,&bo_isbn=book_isbn;
    std::string book_scanningBar,&bo_sb=book_scanningBar;
    std::string book_name,&bo_na=book_name;
    std::string book_author,&bo_au=book_author;
    
    unsigned book_sold=0,&bo_so=book_sold;
    unsigned book_total=0,&bo_to=book_total;

    double book_discount=0,&bo_dsc=book_discount;
    double book_price=0,&bo_pr=book_price;
    double total_price=0,&to_pr=total_price;
    double total_revenue=0,&to_re=total_revenue;
    double average_price=0,&avg_pr=average_price;
};
#endif