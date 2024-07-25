int swap(int* a, int* b)
{
    short ret = 0;

    if(a && b){
        int i = *a;
        *a = *b;
        *b = i;
        
        ret = 0;
    }
    else{
        ret = -1;
    }

    return ret;
}