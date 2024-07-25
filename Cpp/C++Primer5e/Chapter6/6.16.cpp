// 传入值为右值时会发生错误
#include <string>

bool is_empty(const std::string& s)
{
    return s.empty();
}