#include <iostream>

int main()
{
	int currVal=0,val=0;
	
	if(std::cin>>currVal){//Read the first number of a sort
		int count=1;
		while(std::cin>>val){
			if(currVal==val){
				++count;
			}
			else{
				std::cout<<currVal<<" occurs "<<count<<" times "<<std::endl;
				currVal=val;
				count=1;
			}
		}
		std::cout<<currVal<<" occurs "<<count<<" times "<<std::endl;
	}
	
	return 0;
}