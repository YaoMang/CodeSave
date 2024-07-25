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

    int serialCnt = 0;

    for (auto c = sIn.begin(); c != sIn.end(); ++c){
        switch (*c)
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
        case 'f':
            {
                string::iterator cNext = c + 1;
                if(*cNext == 'f' || *cNext == 'l' || *cNext == 'i'){
                    ++serialCnt;
                }
            }
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

    cout << vowelCnt << ' ' << spaceCnt << ' ' << tableCnt << ' ' << newlineCnt << ' ' << serialCnt << endl;

    return 0;
}

// 或者保留上一次的值完成后处理