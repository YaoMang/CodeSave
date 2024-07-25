#include <iostream>

using std::cin; using std::cout; using std::endl; using std::getline;

#include <string>

using std::string;

int main(int argc, char** argv)
{
    string sIn;

    getline(cin, sIn);
    

    int vowelCnt = 0;

    for (auto &c : sIn){
        if (c == 'a'){
            ++vowelCnt;
        }
        else if (c == 'e'){
            ++vowelCnt;
        }
        else if (c == 'i'){
            ++vowelCnt;
        }
        else if (c == 'o'){
            ++vowelCnt;
        }
        else if (c == 'u'){
            ++vowelCnt;
        }
    }

    cout << vowelCnt << endl;

    return 0;
}