#include <iostream>

using std::cout; using std::endl;

int main(int argc, char** argv)
{
    cout << "size of " << "int:" << sizeof(int) << '\n';
    cout << "size of " << "long int:" << sizeof(long int) << '\n';
    cout << "size of " << "unsinged int:" << sizeof(unsigned int) << '\n';
    cout << "size of " << "unsigned long int:" << sizeof(unsigned long int) << '\n';
    cout << "size of " << "short int:" << sizeof(short int) << '\n';
    cout << "size of " << "unsigned short int:" << sizeof(unsigned short int) << '\n';
    cout << "size of " << "char:" << sizeof(char) << '\n';
    cout << "size of " << "unsigned char:" << sizeof(unsigned char) << '\n';
    cout << "size of " << "double:" << sizeof(double) << '\n';
    cout << "size of " << "float:" << sizeof(float) << '\n';
    cout << "size of " << "long double:" << sizeof(long double) << '\n';
    cout << "size of " << "long long int:" << sizeof(long long int) << '\n';
    cout << "size of " << "int*:" << sizeof(int*) << '\n';
    cout << "size of " << "void*:" << sizeof(void*) << '\n';
    cout << "size of " << "bool:" << sizeof(bool) << '\n';

    cout << endl;

    return 0;
}