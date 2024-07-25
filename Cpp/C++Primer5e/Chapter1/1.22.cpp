#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item bookInput,bookOutput;
	//You cannot derectly add bookInput and bookOutput before bookOutput have it's own ISBN
	//This may be a feature defined in Sales_item.h
	std::cin>>bookOutput;
	while(std::cin>>bookInput)
		bookOutput+=bookInput;//if with out Line 9, this means bookInput and bookOutput have different ISBN, one is ISBN_1 while the other is empty
	
	std::cout<<bookOutput<<std::endl;
	
	return 0;
}
