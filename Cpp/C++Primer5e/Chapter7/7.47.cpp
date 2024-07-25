/*
说明接受一个string参数的Sales_data构造函数是否应该是explicit的，并解释这样做的优缺点。

解：

是否需要从string到Sales_data的转换依赖于我们对用户使用该转换的看法。在此例中，这种转换可能是对的。null_book中的string可能表示了一个不存在的ISBN编号。

优点：

可以抑制构造函数定义的隐式转换

缺点：

为了转换要显式地使用构造函数
*/