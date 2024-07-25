#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <exception>
using std::runtime_error;

int main(int argc, char** argv){
    int a = 0, b = 0;
    cin >> a >> b;
    
    // try 必须搭配 catch 使用
    if(b == 0){
        throw runtime_error("b cannot be 0");
    }
    else{
        cout << a / b << endl;
    }
    

    return 0;
}