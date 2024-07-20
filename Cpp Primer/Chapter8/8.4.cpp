#include <fstream>
#include <string>
#include <vector>

using namespace std;

int read(string& filename, vector<string>& store)
{
    ifstream input(filename);
    string buff;
    while(getline(input, buff))
        store.push_back(buff);
    return 0;
}