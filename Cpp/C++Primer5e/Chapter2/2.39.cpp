struct Foo{/* 此处为空 */}//没有分号（故意的）
int main()
{
    return 0;
}

//以下为编译器输出的错误信息
//Windows GNU 6.3.0 /MinGW
/*
c:/mingw/bin/../lib/gcc/mingw32/6.3.0/../../../libmingw32.a(main.o):(.text.startup+0xa0): undefined reference to `WinMain@16'
collect2.exe: error: ld returned 1 exit status
*/