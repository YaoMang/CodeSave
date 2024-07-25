#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main(int argc, char** argv)
{
    vector<unsigned> scores(11,0);

    unsigned grade;
    while(cin >> grade){
        if(grade <= 100)
            ++ *(scores.begin() + grade/10);
    }

    for(auto it: scores)
        cout << it << " ";
    cout << endl;
}