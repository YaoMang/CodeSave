// 经典的最大子列和问题

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int sum = 0;
            int maxSum = 0;
            int maxEle = 0x80000000;
            bool allMinus = true;
    
            for(const auto& i : nums){ // 经典算法
                if(maxEle < i){ // 处理全列小于0的情况
                    maxEle = i;
                    if(i >= 0){
                        allMinus = false;
                    }
                }
                sum += i;
                if(sum < 0){
                    sum = 0;
                }
                if(sum > maxSum){
                    maxSum = sum;
                }
            }
    
            if(allMinus){
                maxSum = maxEle;
            }
    
            return maxSum;
        }
    };