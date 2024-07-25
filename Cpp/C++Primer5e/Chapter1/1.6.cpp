#include <iostream>

/*程序片段
std::cout<<"The sum of "<<v1;
		 <<" and "<<v2;
		 <<" is "<<v1 + v2<<std::endl;
		 
		 不合法，因为语句std::cout被分号断开.
		 修改如下：
*/

int main()
{
	std::cout<<"Enter two numbers:"<<std::endl;
	int v1= 0,v2= 0;
	std::cin>>v1>>v2;
	
	std::cout<<"The sum of "<<v1
		 <<" and "<<v2
		 <<" is "<<v1 + v2<<std::endl;
		 
	return 0;
}