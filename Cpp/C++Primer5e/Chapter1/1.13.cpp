#include <iostream>

int main()
{
	//1.9 (Passed)
	/*
	int sum = 0;
	for(int i = 50;i <= 100;++i)
		sum += i;
	std::cout<< sum <<std::endl;
	*/
	
	//1.10 (Passed)
	/*
	for(int i = 10;i >= 0;--i)
		std::cout<< i <<std::endl;
	*/
	
	//1.11 (Passed)
	/*
	int v1 = 0, v2 = 0;
	int temp = 0;
	std::cout<<"Please input two interger"<<std::endl;
	std::cin>> v1 >> v2;
	if(v1>=v2){
		temp=v1;
		v1=v2;
		v2=temp;
	}
	
	for(int i = v1;i <= v2;++i)
		std::cout<< i <<std::endl;
	*/
	
	return 0;
}