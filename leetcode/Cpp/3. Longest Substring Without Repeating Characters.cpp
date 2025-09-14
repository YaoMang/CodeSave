#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        int pos = 0;
        int retlen = 0;
        SimpleHash HT;

        while(pos + retlen < s.length()) {
            
        }
    }
};

class SimpleHash {
public:
    char HashTable[256];
    char lastInsert;
    bool isConflict;
    
    SimpleHash() {
        for(auto& c : HashTable)
            c = 0;
        isConflict = 0;
    }

    void insert(const char& c)
    {
        lastInsert = c;
        HashTable[c]++;
        if(HashTable[c] > 1)
            isConflict = true;
    }

    char remove(const char& c)
    {
        HashTable[c]--;
        if(HashTable[c] == 1)
            isConflict = false;
        return c;
    }
};