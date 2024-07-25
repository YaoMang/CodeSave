#include <iostream>


int main()
{
	double value=0,sum=0;
	
	while(std::cin>>value)
		sum += value;
	
	std::cout<<"Sum is: "<<sum<<std::endl;
	
	return 0;
}

//Windows Ctrl+Z/Linux Ctrl+D to end input.

/*
int main()
{
	int sum=0,value=0;
	
	while(std::cin>>value)
		sum += value;
	std::cout<<"Sum is: "<< sum << std::endl;
	return 0;
}
*/