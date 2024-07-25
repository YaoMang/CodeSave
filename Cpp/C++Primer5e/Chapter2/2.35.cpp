#include <iostream>

using std::cout;

int main()
{
    //i为const int
    const int i=42;
    //j为int
    auto j=i;
    //k为const int &
    const auto &k=i;
    //p为const int *
    auto *p=&i;
    //j2为const int, k2为const int &
    const auto j2=i,&k2=i; 
}