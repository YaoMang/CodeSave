#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main(int argc, char** argv)
{
    string temp, upper;
    bool indicator = 0;
    while (cin >> temp && !temp.empty()){
        if(!(temp[0] >= 'A' && temp[0] <= 'Z')){
            upper = temp;
            continue;
        }

        if(temp == upper){
            indicator = 1;
            cout << temp << endl;
            break;
        }
        upper = temp;
    }

    if(!indicator){
        cout << "false" << endl;
    }

    return 0;
}