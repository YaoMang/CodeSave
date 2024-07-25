#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main(int argc, char** argv)
{
    string str1,str2;
    do {
        cout << "Please input two strings" << endl;
        cin >> str1 >> str2;
        if (str1.length() > str2.length()){
            cout << str2 << endl;
        }
        else if (str1.length() == str2.length()){
            cout << "EUQAL LENTH" << str1 << str2 << endl;
        }
        else{
            cout << str1 <<endl;
        }

    } while (!(str1.empty() || str2.empty()));

    return 0;
}

// 搞不懂

/*
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main()
{
    string rsp;
    do {
        cout << "Input two strings: ";
        string str1, str2;
        cin >> str1 >> str2;
        cout << (str1 <= str2 ? str1 : str2) 
             << " is less than the other. " << "\n\n"
             << "More? Enter yes or no: ";
        cin >> rsp;
    } while (!rsp.empty() && tolower(rsp[0]) == 'y');
    return 0;
}
*/

// 实际上是给了一个选择