#include <string>
#include <iostream>

#include <stdio.h>

using std::cin;using std::cout;using std::endl;
using std::string;

void function_1(string str[2]);
void function_2(string str[2]);

int main()
{
    string str[2];
    int env=0;

    for(int i=0;i<2;i++)
        cin>>str[i];

    cout<<"ENTER A NUMBER 0/1"<<"\n";
    scanf("%d",&env);

    if(env==0){
        function_1(str);
    }
    else{
        function_2(str);
    }
    
    cout<<endl;
    
    return 0;
}

void function_1(string str[2])
{
    if(str[0]>str[1]){
        cout<<str[0];
    }
    else if(str[0]<str[1]){
        cout<<str[1];
    }
    else{
        printf("EQUAL STRING\n");
    }
}

void function_2(string str[2])
{
    if(str[0].size()>str[1].size()){
        cout<<str[0];
    }
    else if(str[0].size()<str[1].size()){
        cout<<str[1];
    }
    else{
        printf("EQUAL STRING\n");
    }
}