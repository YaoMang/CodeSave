#include <string>

class Screen{
public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(const pos wd,const pos ht): width(wd), height(ht), contents(wd * ht, ' ') {};
    Screen(const pos wd,const pos ht, const char c): width(ht), height(wd), contents(wd * ht, c) {};
private:
    pos width = 0, height = 0;
    pos cursor = 0;
    std::string contents;
};