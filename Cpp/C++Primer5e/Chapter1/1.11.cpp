#include <iostream>

int main()
{
	int v1=0,v2=0,temp=0;
	std::cout<<"Plaeas input two integer:"<<std::endl;
	std::cin>>v1>>v2;
	
	if(v1>v2){
		temp=v1;
		v1=v2;
		v2=temp;
	}
	
	std::cout<<"The integers range from "<<v1<<" and "<<v2<<" are as list."<<std::endl;
	
	while(v1<=v2){
		std::cout<<v1<<std::endl;
		++v1;
	}
	
	return 0;
}