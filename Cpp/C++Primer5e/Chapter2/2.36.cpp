int main()
{
    //a,b为int型变量
    int a=3,b=4;
    //c为int型变量，此时值为3
    decltype(a)c=a;
    //d为int&型，是a的引用
    decltype((b))d=a;
    ++c;
    ++d;

    //程序结束时，a=4,b=4,c=3,d=4
}