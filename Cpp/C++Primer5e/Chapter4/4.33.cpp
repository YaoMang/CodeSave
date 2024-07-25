// (someValue) ? ((++x), ++y) : ((--x), --y);

// 以上错误

// 应等价于
// (someValue ? ++x, ++y : --x), --y
