#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <exception>
using std::runtime_error;

int main(int argc, char** argv)
{
    int a = 0, b = 0;
    while (cin >> a >> b){
        try{
            if(b == 0){
                throw runtime_error("b cannot be 0");
            }
            else{
                cout << a / b << endl;
            }
        } catch (runtime_error err){
            cout << err.what()
                 << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if(!cin || c == 'n'){
                break;
            }
        }
    }

    return 0;
}