r1=v2;//合法
p1=p2;//不合法 试图让一个指向int的指针指向const int
p2=p1;//合法 int*可以转换为const int*
p1=p3;//不合法 p3是一个low-level const
p2=p3;//合法 拷贝会忽略top-level const
