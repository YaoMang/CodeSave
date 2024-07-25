#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <vector>
using std::vector;


int main(int argc, char* argv[])
{
    vector<int> ivec;
    int iInt;

    while(cin>>iInt){
        ivec.push_back(iInt);
    }
    //Part1
    auto f=ivec.begin(), s=f+1;

    while(s<=ivec.end()-1){
        cout<<*f+*s<<'\n';
        f++;
        s++; 
    }



    cout<<"Part1 END\n";
    //Part2

    auto b=ivec.begin(), e=ivec.end()-1;

    while(b<e){
        cout<<*b+*e<<'\n';
        ++b;
        --e;
    }
    cout<<endl;
}