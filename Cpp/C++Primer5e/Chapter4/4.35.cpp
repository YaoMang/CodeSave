// (a) 发生 char -> int -> char
// (b) 发生 int -> float, unsigned -> float //直接转变为double计算, 因为字面值常量默认被处理为double
// (c) 发生 unsigned -> float -> double
// (e) 精度损失 int -> float -> double -> char