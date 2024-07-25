const int v2=0;
int v1=v2;
int *p1=&v1,&r1=v1;
const int *p2=&v2,*const p3=&i,&r2=v2;


//v2 top-level const
//p2 low-level const
//p3 low-level and top-level const
//r2 low-level const