int main()
{
    //a,b类型为int
    int a=3,b=4;
    //c类型为int
    decltype(a)c=a;
    //d类型为int&
    decltype(a=b)d=a;

    //程序结束时，a=3,b=4,c=3,d=3
}