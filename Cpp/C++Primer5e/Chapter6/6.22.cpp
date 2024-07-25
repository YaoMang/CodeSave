void p_swap(int* &a, int* &b)
{
    int* p = a;
    a = b;
    b = p;
}