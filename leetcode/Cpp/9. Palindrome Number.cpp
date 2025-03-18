class Solution {
    public:
        bool isPalindrome(int x) {
            string str = to_string(x);
            bool ret = true;
            for(int i = 0; i < str.size() / 2; i++){
                if(str[i] == str[str.size() - i - 1]){
                    continue;
                }
                else{
                    ret = false;
                    break;
                }
            }
    
            return ret;
        }
    };