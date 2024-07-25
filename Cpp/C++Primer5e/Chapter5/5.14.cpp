#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <vector>
using std::vector;


#include <string>
using std::string;

int main(int argc, char** argv)
{
    vector<string> strOutput;
    string strTemp, strUpper, strMore;

    int cnt = 0, cntLast = 0;
    while(cin >> strTemp){
        if(strTemp == strUpper){
            ++cnt;
            strMore = strTemp;
        }
        else{
            cnt = 0;
        }

        if(cnt == cntLast && cntLast != 0){
            bool indicator = true;
            for(auto &str : strOutput){
                if(str == strMore){
                    indicator = false;
                }
            }
            if(indicator){
                strOutput.push_back(strMore);
            }
        }

        if(cnt > cntLast){
            strOutput.clear();
            strOutput.push_back(strMore);
            cntLast = cnt;
        }
        strUpper = strTemp;
    }

    if(!cntLast){
        cout << "NOTHING TO OUTPUT" << endl;
    }
    else{
        for(auto &str : strOutput){
            cout << str << ' ';
        }
        cout << cntLast + 1 << endl;
    }

    return 0;
}