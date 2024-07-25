#include <string>
#include <iostream>

using std::string;
using std::cin;using std::cout;using std::endl;

int main()
{
    string str_tmp,str_sum;
    string empty,space=" ";
    string *str=0;

    bool state=0;
    cin>>state;
    if(state){
        str=&empty;
        cout<<"condition is true"<<endl;
    }
    else{
        str=&space;
        cout<<"condition is false"<<endl;
    }

    while(cin>>str_tmp)
        str_sum+=(str_tmp+*str);

    cout<<str_sum<<"\n";
    
    return 0;
}