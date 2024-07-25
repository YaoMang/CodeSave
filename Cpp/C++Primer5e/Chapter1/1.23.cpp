#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item bookInput,bookOutput;
	
	if(std::cin>>bookOutput){
		while(std::cin>>bookInput){
			if(bookInput.isbn()==bookOutput.isbn()){
				bookOutput+=bookInput;
			}
			else{
				std::cout<<bookOutput<<std::endl;
				bookOutput=bookInput;
			}
		}
		
		std::cout<<bookOutput<<std::endl;
	}
	
	return 0;
}