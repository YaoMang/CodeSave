class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int count = 0; // count if increased
            int val = -101;
    
            for(int i = 0; i < nums.size(); ++i) {
                if(val < nums[i]) {
                    ++count;
                    val = nums[i];
                    nums[count-1] = val;;
                }
            }
            return count;
        }
    };