#include <string>
#include <iostream>

class Screen{
public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(const pos wd,const pos ht): width(wd), height(ht), contents(wd * ht, ' ') {}
    Screen(const pos wd,const pos ht, const char c): width(ht), height(wd), contents(wd * ht, c) {}

    // String Operating
    Screen& move(pos row, pos col) {cursor = row * width + col; return *this;}
    Screen& set(char c) {contents[cursor] = c; return *this;}
    Screen& set(pos row, pos col, char c) {contents[row * width + col] = c; return *this;}
    Screen& display(std::ostream& os) {do_display(os); return *this;}
    const Screen& display(std::ostream& os) const {do_display(os); return *this;}

private:
    pos width = 0, height = 0;
    pos cursor = 0;
    std::string contents;

    inline void do_display(std::ostream& os) const;
};

inline void Screen::do_display(std::ostream& os) const
{
    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j){
            os << contents[i * width + j];
        }
        os << "\n";
    }
}

// Main
using std::cout;

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";

    return 0;
}