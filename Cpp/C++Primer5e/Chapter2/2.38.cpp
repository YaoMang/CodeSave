int main()
{
    const int a=4,b=5;
    int c=3,*p1=&c;
    int &p2=c;
    //此时相同
    auto d=p1;
    decltype(p1)e;
    //此时不同（对于引用的处理）
    auto f=p2;
    decltype(p2)g=p2;

    //对于top-level const的处理
    const int *const p3=&a;

    auto p4=p3;
    decltype(p3)p5=p3;
}