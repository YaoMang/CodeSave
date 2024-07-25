class NoDefalut{
public:
    NoDefalut(int i): ivar(i) {};
    int ivar;
};

class C{
public:
    C(): ND(0) {};
    NoDefalut ND;
};

int main()
{
    C Cclass;
    return 0;
}