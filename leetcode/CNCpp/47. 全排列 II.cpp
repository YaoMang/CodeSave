// 这里手动实现了标准库 std::next_permutation 的底层原理

class Solution {
    public:
        vector<vector<int>> permuteUnique(vector<int>& nums) {
            vector<vector<int>> ans;
            sort(nums.begin(), nums.end());
            do{
                ans.push_back(nums);
            } while(np(nums));
    
            return ans;
        }
    
        bool np(vector<int>& nums){
            for(int i = nums.size() - 1; i >= 1; i--){ // 从后向前搜索升序对
                if(nums[i - 1] < nums[i]){ // 找到升序对
                    for(int j = nums.size() - 1; j >= i; j--){ // 从后向前遍历数组
                        if(nums[j] > nums[i - 1]){ // 找到第一个大于nums[i - 1] 的数
                            swap(nums[j], nums[i - 1]); // 交换
                            reverse(nums.begin() + i, nums.end()); // 逆序
                            return true;
                        }
                    }
                }
            }
            // 无法找到升序对
            reverse(nums.begin(), nums.end());
            return false;
        }
    
        
    };