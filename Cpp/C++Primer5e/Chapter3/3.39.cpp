#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include <cstring>

int main(int argc, char** argv)
{
    string str1 = "StringR";
    string str2 = str1;
    string str3 = "StringL";

    char stra1[] = "StringR";
    char stra2[] = "StringR";
    char stra3[] = "StringL";

    cout << "String:" << (str1 == str2) << ' ' << (str2 == str3) << endl;
    cout << "AString:" << strcmp(stra1, stra2) << ' ' << strcmp(stra2, stra3) << endl;

    return 0;
}