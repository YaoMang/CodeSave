// 使用标准库完成求解

class Solution {
    public:
        int lengthOfLastWord(string s) {
            istringstream iss(s);
    
            string lw;
    
            while(iss >> lw);
    
            return lw.size();
        }
    };