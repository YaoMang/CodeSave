#include <string>

struct Sales_data
{
    std::string book_isbn,&bo_isbn=book_isbn;
    std::string book_scanningBar,&bo_sb=book_scanningBar;
    std::string book_name,&bo_na=book_name;
    std::string book_author,&bo_au=book_author;
    
    unsigned book_sold,&bo_so=book_sold;
    unsigned book_total,&bo_to=book_total;

    double book_discount,&bo_dsc=book_discount;
    double book_price,&bo_pr=book_price;
    double total_price,&to_pr=total_price;
    double total_revenue,&to_re=total_revenue;
};
