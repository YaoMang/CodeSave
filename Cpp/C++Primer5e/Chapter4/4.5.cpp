/*
 * (a) -30 * 3 + 21 / 5 
 * -86
 * 
 * (b) -30 + 3 * 21 / 5
 * -18
 * 
 * (c) 30 / 3 * 21 % 5
 * 0
 * 
 * (d) -30 / 3 *21 % 4
 * -2
 */

#include <iostream>

using std::cout; using std::endl;

int main(int argc, char** argv)
{
    cout << -30 * 3 + 21 / 5 << endl;
    
    cout << -30 + 3 * 21 / 5 << endl;

    cout << 30 / 3 * 21 % 5 << endl;

    cout << -30 / 3 *21 % 4 << endl;

    return 0;
}