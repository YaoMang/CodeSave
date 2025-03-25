class Solution {
    public:
        vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> ret;
            vector<int> varr,ans;
            varr.resize(nums.size());
            getPermute(nums, varr, ans, nums.size(), ret);
    
            return ret;
        }
    
        void getPermute(vector<int>& nums, vector<int> varr, vector<int> ans, int len, vector<vector<int>>& res){
            if(len == 0){ // 边界条件，剩余长度归零
                res.push_back(ans);
                return;
            }
            // 开始循环，每轮生成一个数
            for(int i = 0; i < varr.size(); i++){
                if(varr[i] != 1){
                    varr[i] = 1;
                    ans.push_back(nums[i]);
                    getPermute(nums, varr, ans, len - 1, res);
                    ans.pop_back(); // 状态恢复
                    varr[i] = 0;
                }
            }
        }
    };