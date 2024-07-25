#include <iostream>
#include <string>

using namespace std;

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

int main()
{
    Sales_data data1,data2;
    Sales_data outputData;
/*
    //p20 1.21
    cin>>data1.bo_isbn>>data1.bo_so>>data1.bo_pr;
    cin>>data2.bo_isbn>>data2.bo_so>>data2.bo_pr;
    
    if(data1.bo_isbn==data2.bo_isbn){
        //Process of two Sales_data if they have the same ISBN
        outputData.bo_so=data1.bo_so+data2.bo_so;
        outputData.bo_isbn=data1.bo_isbn;
        outputData.to_re=data1.bo_pr*data1.bo_so+data2.bo_pr*data2.bo_so;
        outputData.avg_pr=outputData.to_re/outputData.bo_so;
        
        cout<<outputData.bo_isbn<<" "<<outputData.bo_so<<" "<<outputData.to_re<<" "<<outputData.avg_pr<<endl;

        return 0;
    }
    else{
        cout<<"NOT THE SAME BOOK"<<endl;
        return 1;
    }
*/
/*
    //p20 1.22
    while(cin>>data1.bo_isbn>>data1.bo_so>>data1.bo_pr){
        outputData.bo_so+=data1.bo_so;
        outputData.to_re+=data1.bo_pr*data1.bo_so;
    }
    outputData.bo_isbn=data1.bo_isbn;
    outputData.avg_pr=outputData.to_re/outputData.bo_so;
    cout<<outputData.bo_isbn<<" "<<outputData.bo_so<<" "<<outputData.to_re<<" "<<outputData.avg_pr<<endl;
    return 0;
*/

    //p21 1.23/1.24
/*
    if(cin>>data1.bo_isbn>>data1.bo_so>>data1.bo_pr){
        outputData.bo_isbn=data1.bo_isbn;
        while(cin>>data1.bo_isbn>>data1.bo_so>>data1.bo_pr){
            if(data1.bo_isbn==outputData.bo_isbn){
            outputData.bo_so+=data1.bo_so;
            outputData.to_re+=data1.bo_pr*data1.bo_so;
            }
            else{
            outputData.avg_pr=outputData.to_re/outputData.bo_so;
            cout<<outputData.bo_isbn<<" "<<outputData.bo_so<<" "<<outputData.to_re<<" "<<outputData.avg_pr<<endl;
            
            outputData.bo_isbn=data1.bo_isbn;
            outputData.bo_so=data1.bo_so;
            outputData.to_re=0;
            }
        }

    }
    
    outputData.avg_pr=outputData.to_re/outputData.bo_so;
    cout<<outputData.bo_isbn<<" "<<outputData.bo_so<<" "<<outputData.to_re<<" "<<outputData.avg_pr<<endl;
    return 0;
*/
/*
    //p22 1.25
	Sales_data total;
	
	if(std::cin>>total.bo_isbn>>total.bo_so>>total.bo_pr){
		Sales_data trans;
		while(std::cin>>trans.bo_isbn>>trans.bo_so>>trans.bo_pr){
			if(trans.bo_isbn==total.bo_isbn){
				total.bo_so+=trans.bo_so;
                total.to_re+=trans.bo_so*trans.bo_pr;
			}
			else{
                total.avg_pr=total.to_re/total.bo_so;

				std::cout<<total.bo_isbn<<" "<<total.bo_so<<" "<<total.to_re<<" "<<total.avg_pr<<std::endl;
				total.bo_isbn=trans.bo_isbn;
                total.bo_so=trans.bo_so;
                total.bo_pr=trans.bo_pr;
                total.to_re=0;
			}
		}
        total.avg_pr=total.to_re/total.bo_so;
	    std::cout<<total.bo_isbn<<" "<<total.bo_so<<" "<<total.to_re<<" "<<total.avg_pr<<std::endl;
	}
	else{
		std::cout<<"No data?!"<<std::endl;
		return -1;
	}
	
	return 0;
*/
}