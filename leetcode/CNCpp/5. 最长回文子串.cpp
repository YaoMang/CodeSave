class Solution {
    public:
        string longestPalindrome(string s) {
            int cur,left,right;
            cur = 0;
    
            int maxLen = 0;
            int len = 0;
            string ans;
    
            while(cur < s.size()){
                left = right = cur; // 初始化左右值
                while(left - 1 >= 0 && s[left - 1] == s[cur]){ // 向左扩散尝试
                    left--;
                }
                while(right + 1 < s.size() && s[right + 1] == s[cur]){ // 向右扩散尝试
                    right++;
                }
                while(right + 1 < s.size() && left - 1 >= 0 && s[right + 1] == s[left - 1]){
                    left--;
                    right++;
                }
                len = right - left + 1;
                if(len > maxLen){
                    maxLen = len;
                    ans = s.substr(left, len);
                }
                cur++;
            }
    
            return ans;
        }
    };