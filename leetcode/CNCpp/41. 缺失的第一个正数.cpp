// 使用现有数组进行Hash
class Solution {
    public:
        int firstMissingPositive(vector<int>& nums) {
            for(int i = 0; i < nums.size(); i++){
                while(nums[i] <= nums.size() && nums[i] > 0 && nums[i] - 1 != i){ // 在范围内，且已经到达正确位置
                    if(nums[i] != nums[nums[i] - 1]){
                        swap(nums[i], nums[nums[i] - 1]); // 将num[i]保存到nums[i] - 1位置上
                    }
                    else{
                        break;
                    }
                }
            }
    
            for(int i = 1; i <= nums.size(); i++){
                if(nums[i - 1] != i){
                    return i;
                }
            }
            return nums.size() + 1;
        }
    };