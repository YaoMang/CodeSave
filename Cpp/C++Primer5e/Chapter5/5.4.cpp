// 没有对迭代器进行初始化 x

// (a) 这个循环试图用迭代器遍历string，但是变量的定义应该放在循环的外面，目前每次循环都会重新定义一个变量，明显是错误的。


// 以 find(word) 为条件，循环结束后，若status为false, 则执行之后的内容

// (b) 这个循环的while和if是两个独立的语句，if语句中无法访问status变量，正确的做法是应该将if语句包含在while里面。