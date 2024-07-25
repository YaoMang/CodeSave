// Correct

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

#include <iostream>
using std::cout; using std::endl;

int main(int argc, char** argv)
{
    f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}

void f()
{
    cout << "Now f()" << endl;
}

void f(int i)
{
    cout << "Now f(int = " << i << ")" << endl;
}

void f(int i1, int i2)
{
    cout << "Now f(int = " << i1 << "int = "<< i2 << ")" << endl;
}

void f(double d1, double d2)
{
     cout << "Now f(double = " << d1 << "double = "<< d2 << ")" << endl;
}