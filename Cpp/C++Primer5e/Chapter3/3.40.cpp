#include <iostream>
using std::cout; using std::endl;

#include <cstring>

int main(int argc, char** argv)
{
    char stra1[] = "StringR";
    char stra2[] = "StringL";

    //Edited, older version of this uses just a MAGIC number
    constexpr size_t size = sizeof(stra1) + sizeof(stra2);

    char stra3[size];

    strcpy(stra3, stra1);
    strcat(stra3, stra2);

    cout << stra3 << endl;

    return 0;
}