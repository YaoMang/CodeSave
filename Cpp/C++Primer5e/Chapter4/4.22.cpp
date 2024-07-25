/*
cout << ((grade < 60) ? "fail" : (grade < 75) ? "low pass" : (grade < 90) ? "pass" : "high pass");

cout << ((grade < 60) ? "fail" : 
(grade < 75) ? "low pass" : 
(grade < 90) ? "pass" : "high pass");

*/

/*
if (grade < 60)
    cout << "fail";
else if (grade < 75)
    cout << "low pass";
else if (grade < 90)
    cout << "pass";
else
    cout << "high pass";
*/

// 显然第二种更易理解

//原文： 第二个版本容易理解。当条件运算符嵌套层数变多之后，代码的可读性急剧下降。而if else的逻辑很清晰。

#include <iostream>
using std::cout;

int main(int argc, char** argv)
{
    int grade = 80;

    cout << ((grade < 60) ? "fail" : (grade < 75) ? "low pass" : (grade < 90) ? "pass" : "high pass");


    return 0;
}