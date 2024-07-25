#include <initializer_list>
using std::initializer_list;

int sum(initializer_list<int> paraList)
{
    int sum = 0;
    for(auto &i : paraList){
        sum += i;
    }

    return sum;
}