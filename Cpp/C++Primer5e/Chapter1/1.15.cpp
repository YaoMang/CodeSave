#include <iostream>

int main()
{
	//syntax error
	std::cout<<"Hello"<<std::endl;
	
	std::cout<<Hello<<std::endl;
	
	std::cout<<"Hello"std::endl;
	
	return 0
	
	//type error
	
	int value=0;
	char char2;
	value=char2;
	
	//declaration error
	int v1=0,v2=0;
	std::cin>>v>>v2;
	
	cout<<v1+v2<<std::endl;
	
	return 0;
}

info
.\1.15.cpp: In function 'int main()':
.\1.15.cpp:8:13: error: 'Hello' was not declared in this scope
  std::cout<<Hello<<std::endl;
             ^~~~~
.\1.15.cpp:10:13: error: unable to find string literal operator 'operator""std' with 'const char [6]', 'unsigned int' arguments
  std::cout<<"Hello"std::endl;
             ^~~~~~~~~~
.\1.15.cpp:16:2: error: expected ';' before 'int'
  int value=0;
  ^~~
.\1.15.cpp:22:12: error: 'v' was not declared in this scope
  std::cin>>v>>v2;
            ^
.\1.15.cpp:24:2: error: 'cout' was not declared in this scope
  cout<<v1+v2<<std::endl;
  ^~~~
.\1.15.cpp:24:2: note: suggested alternative:
In file included from .\1.15.cpp:1:0:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:61:18: note:   'std::cout'
   extern ostream cout;  /// Linked to standard output