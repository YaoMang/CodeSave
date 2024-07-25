#include <iostream>
using std::cin;using std::cout;using std::endl;

int main()
{
	int sum = 0,val = 50;
	
	while(val<=100){
		sum += val;
		++val;
	}
	
	cout<<"Sum of 50 to 100 inclusive is "<<sum<<endl;
	
	return 0;
}

#include <iostream>

int main()
{
	int val=10;
	while(val>=0){
		cout<<val<<endl;
		--val;
	}
	
	return 0;
}

#include <iostream>

int main()
{
	int v1=0,v2=0,temp=0;
	cout<<"Plaeas input two integer:"<<endl;
	cin>>v1>>v2;
	
	if(v1>v2){
		temp=v1;
		v1=v2;
		v2=temp;
	}
	
	cout<<"The integers range from "<<v1<<" and "<<v2<<" are as list."<<endl;
	
	while(v1<=v2){
		cout<<v1<<endl;
		++v1;
	}
	
	return 0;
}



//p67 

/*
+using std::string;
+using std::cout;
+using std::cin;
+using std::endl;
*/