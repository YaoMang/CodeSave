int main()
{
    int i=0,&r=i;
    //a
    auto a=r;
    a=42;//等效于a=i,a=42
    //b
    const int ci=i,&cr=ci;
    auto b=ci;
    b=42;//与a情况相同
    //c
    auto c=cr;
    c=42;//与b情况相同
    //d
    auto d=&i;
    d=42;//错误，不能为int*赋值int
    //e
    auto e=&ci;
    e=42;//不能将int赋给const int*
    //g
    auto &g=ci;
    g=42;//不能为常量赋值
}