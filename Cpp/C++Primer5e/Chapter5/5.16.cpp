// 两种循环实际上能够等价的转换

// for(init; cond; expr){} ->
// {init; while(cond){{...} expr;}} 

// 更加倾向于使用 for 因为循环体更简洁
// 更加倾向于使用 while 因为控制条件清晰