// 使用引用在语法上更加方便并且由于不用检测指针是否为空，减小了错误发生的可能

int swap(int &a, int &b)
{
    int i = a;
    a = b;
    b = i;

    return 0;
}