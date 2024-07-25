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

using Func = int(*)(int, int);

std::vector<Func>;