
// 这道题目是 std::next_permutation()的实现原理
class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            bool allDec = true;
            // 若出现升序，则开始处理
            for(int i = nums.size() - 1; i >= 1; i--){
                if(nums[i - 1] < nums[i]){ // 出现了升序
                    int targetPos = -1;
                    for(int j = nums.size() - 1; j >= i; j--){ // 从后向前寻找第一个大于目标的值
                        if(nums[j] > nums[i - 1]){
                            targetPos = j;
                            break;
                        }
                    }
                    swap(nums[targetPos], nums[i - 1]); // 交换这两个值
                    reverse(nums.begin() + i, nums.end()); // 反转序列
                    allDec = false;
                    break;
                }
            }
    
            // 若全部为减序，则倒置
            if(allDec){
                reverse(nums.begin(), nums.end());
            }
        }
    };