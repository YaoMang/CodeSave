// set 将会无法改变 myScreen 的值

#include <string>
#include <iostream>
#include <vector>

class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    int clear(ScreenIndex s);

private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen{
public:
    friend int Window_mgr::clear(ScreenIndex s);

    using pos = std::string::size_type;

    Screen() = default;
    Screen(const pos wd,const pos ht): width(wd), height(ht), contents(wd * ht, ' ') {}
    Screen(const pos wd,const pos ht, const char c): width(ht), height(wd), contents(wd * ht, c) {}

    // String Operating
    Screen move(pos row, pos col) {cursor = row * width + col; return *this;}
    Screen set(char c) {contents[cursor] = c; return *this;}
    Screen set(pos row, pos col, char c) {contents[row * width + col] = c; return *this;}
    Screen display(std::ostream& os) {do_display(os); return *this;}
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

int Window_mgr::clear(ScreenIndex i)
{
    Screen& s = screens[i];
    s.contents = std::string(s.width * s.height, ' ');

    return 0;
}