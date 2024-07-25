#include <iostream>
using std::cout; using std::endl;

void print(int (&arr)[2])
{
    for(const auto &a : arr){
        cout << a << ' ';
    }
    cout << endl;
}

void print(int* beg, int* end)
{
    while(beg != end){
        cout << *beg++ << ' ';
    }
    cout << endl;
}


// 程序的完整版本，因为我偷懒了
#include <iostream>
using std::cout; using std::endl; using std::begin; using std::end;

void print(const int *pi)
{
    if(pi)
        cout << *pi << endl;
}

void print(const char *p)
{
    if (p)
        while (*p) cout << *p++;
    cout << endl;
}

void print(const int *beg, const int *end)
{
    while (beg != end)
        cout << *beg++ << endl;
}

void print(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i) {
        cout << ia[i] << endl;
    }
}

void print(int (&arr)[2])
{
    for (auto i : arr)
        cout << i << endl;
}

int main()
{
    int i = 0, j[2] = { 0, 1 };
    char ch[5] = "pezy";
    
    print(ch);
    print(begin(j), end(j));
    print(&i);
    print(j, end(j)-begin(j));
    print(j);
    
    return 0;
}