#include <string>

class Screen{
public:
    using pos = std::string::size_type;
private:
    pos width = 0, height = 0;
    pos cursor = 0;
    std::string contents;
};