#include <iostream>

using std::cin; using std::cout; using std::endl; using std::getline;

#include <string>

using std::string;

int main(int argc, char** argv)
{
    string sIn;

    getline(cin, sIn);

    int vowelCnt = 0;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;

    for (auto &c : sIn){
        switch (c)
        {
        case 'A': case 'a':
            ++aCnt;
            break;
        case 'E': case 'e':
            ++eCnt;
            break;
        case 'I': case 'i':
            ++iCnt;
            break;
        case 'O': case 'o':
            ++oCnt;
            break;
        case 'U': case 'u':
            ++uCnt;
            break;
        default:
            break;
        }
    }

    vowelCnt = aCnt + eCnt + iCnt + oCnt + uCnt;

    cout << vowelCnt << endl;

    return 0;
}