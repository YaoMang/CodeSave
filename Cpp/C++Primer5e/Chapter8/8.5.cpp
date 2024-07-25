#include <fstream>
#include <string>
#include <vector>

using namespace std;

int read(string& filename, vector<string>& store)
{
    ifstream input(filename);
    if(input){
        string buff;
        while(input >> buff)
            store.push_back(buff);
    }
    return 0;
}