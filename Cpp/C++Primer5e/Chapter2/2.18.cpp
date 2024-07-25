#include <iostream>

int main()
{
	int *p=0,i=5,j=10;
	
	std::cout<<p<<" "<<i<<" "<<j<<std::endl;
	
	p=&i;
	*p=j;
	
	std::cout<<*p<<" "<<i<<" "<<j<<std::endl;
	return 0;
}