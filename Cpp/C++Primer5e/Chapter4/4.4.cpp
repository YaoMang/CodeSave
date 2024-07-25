/*
 * 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
 * 
 * ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)
 * 
 * Expected Result: 91
 */

#include <iostream>

using std::cout; using std::endl;

int main(int argc, char** argv)
{
    cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;

    return 0;
}