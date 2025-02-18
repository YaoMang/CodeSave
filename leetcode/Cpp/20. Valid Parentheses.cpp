class Solution {
    public:
        bool isValid(string s) {
            deque<char> stack;
            for(int i = 0; i < s.size(); ++i) {
                if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                    stack.push_back(s[i]);
                }
                else{
                    char no1,no2;
                    no1 = s[i];
                    if(!stack.empty()) {
                        no2 = stack.back();
                        stack.pop_back();
                    }
                    else {
                        return false;
                    }
    
                    bool isValid = false;
                    if(no1 == '}' && no2 == '{')
                        isValid = true;
                    if(no1 == ']' && no2 == '[')
                        isValid = true;
                    if(no1 == ')' && no2 == '(')
                        isValid = true;
                    if(!isValid){
                        return false;
                    }
                }
            }
            if(stack.empty())
                return true;
            else
                return false;   
        }
    };