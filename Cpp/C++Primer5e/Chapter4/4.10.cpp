#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(int argc, char** argv)
{
    {
        int input = 0;
        while(cin >> input && input != 42)
            cout << input << endl;
    }
    
    return 0;
}