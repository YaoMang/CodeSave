class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int pos1,pos2;
            pos1 = 0;
            pos2 = pos1 + 1;
    
            // 题目要求保持顺序不变
            while(pos2 < nums.size()){
                if(nums[pos1] == 0){ // 前一个指针遇到了0
                    if(nums[pos2] != 0){ // 后一个指针不是0
                        swap(nums[pos1], nums[pos2]);
                        pos1++;
                        pos2++;
                    }
                    else{ // 后一个指针此时也是0
                        pos2++;
                    }
                }
                else{
                    pos1++;
                    pos2++;
                }
            }
        }
    };