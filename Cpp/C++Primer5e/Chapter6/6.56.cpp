int f_add(int a, int b)
{
    return a + b;
}
int f_minus(int a, int b)
{
    return a - b;
}
int f_cross(int a, int b)
{
    return a * b;
}
int f_by(int a, int b)
{
    return a / b;
}

#include <vector>
#include <iostream>

using Func = int(*)(int, int);

std::vector<Func> x;

int main()
{
    int a = 2, b = 1;
    x.push_back(f_add);
    x.push_back(f_minus);
    x.push_back(f_cross);
    x.push_back(f_by);

    for(auto fp : x){
        std::cout << fp(a, b) << '\n';
    }
    std::cout << std::endl;

    return 0;
}