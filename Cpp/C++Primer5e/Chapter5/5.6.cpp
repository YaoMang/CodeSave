#include <iostream>

using std::cin; using std::cout; using std::endl;

#include <vector>

using std::vector;

#include <string>

using std::string;

int main(int argc, char** argv)
{
    int i = 0;
    cin >> i;

    string strOut;

    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

    i < 60 ?
        strOut = scores[0]
    :
    (
        (i != 100 ?
            (strOut = scores[i/10 - 5],
            strOut += i % 10 > 7 ? "+" : i % 10 < 3 ? "-" : "")
        :strOut = scores[5])
    );

    cout << strOut << endl;

    return 0;
}