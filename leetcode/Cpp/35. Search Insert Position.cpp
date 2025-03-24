class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            // 二分查找，需求为寻找目标插入位置
            int l,r,m;
            l = 0;
            r = nums.size();
            while(l < r){
                m = (l + r) / 2;
                if(nums[m] >= target){
                    r = m;
                }
                else{
                    l = m + 1;
                }
            }
    
            return l;
        }
    };