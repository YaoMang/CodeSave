/*
 * (a)int i合法，而int& r不合法，因为引用不是一个对象，它只能指向另一个对象，不能初始化为常量
 * (b)合法 p2是一个指向const int类型的常量指针
 * (c)const int i合法，是一个const int类型的对象，r合法，refer to const
 * (d)合法 p3是一个指向const int对象的const指针初始化为&i2
 * (e)合法 p1是一个指向const int对象的指针，初始化为&i2
 * (f)不合法 r2没有初始化且不允许像这样声明
 * (g)合法 r是一个const int类型的引用，可以使用任何可转化的值
 */