class Solution {
    public:
        vector<string> generateParenthesis(int n) {
            vector<string> res;
            string current;
            backtrack(n, n, current, res);
            return res;
        }
    
        void backtrack(int left, int right, string current, vector<string>& ans){
            if(left == 0 && right == 0){ // 已经到达合法序列，递归终止
                ans.push_back(current);
                return;
            }
    
            if(left == right){ // 左右括号数量相等
                // 只能添加左括号
                backtrack(left - 1, right, current + '(', ans);
            }
            else if(left == 0){ // 只能添加右括号
                backtrack(left, right - 1, current + ')', ans);
            }
            else{
                // 自由添加括号递归
                backtrack(left - 1, right, current + '(', ans);
                backtrack(left, right - 1, current + ')', ans);
            }
        }
    };