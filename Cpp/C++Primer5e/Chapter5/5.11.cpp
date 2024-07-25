#include <iostream>

using std::cin; using std::cout; using std::endl; using std::getline;
using std::noskipws;

#include <string>

using std::string;

int main(int argc, char** argv)
{
    string sIn;

    {
        char cIn;
        while(cin >> noskipws >> cIn){
            sIn.push_back(cIn);
        }
    }

    int vowelCnt = 0;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;

    int spaceCnt = 0, tableCnt = 0, newlineCnt = 0;

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
        case '\n':
            ++newlineCnt;
            break;
        case '\t':
            ++tableCnt;
            break;
        case ' ':
            ++spaceCnt;
            break;
        default:
            break;
        }
    }

    vowelCnt = aCnt + eCnt + iCnt + oCnt + uCnt;

    cout << vowelCnt << ' ' << spaceCnt << ' ' << tableCnt << ' ' << newlineCnt << endl;

    return 0;
}