int abs(int i)
{
    int ret = 0;

    if(i < 0){
        ret = -i;
    }
    else{
        ret = i;
    }

    return 0;
}

// Another Realization  //simple and easy
int abs(int i)
{
   return i > 0 ? i : -i;
}