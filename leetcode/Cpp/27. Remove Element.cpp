class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            deque<int> pos;
            int cnt = 0;
            for(int i = 0; i < nums.size(); ++i) {
                // add a space to pos
                if(nums[i] == val) {
                    pos.push_back(i);
                    continue;
                }
                else if(!pos.empty()) {
                    nums[pos.front()] = nums[i];
                    pos.pop_front();
                    pos.push_back(i);
                }
                ++cnt;
            }
            return cnt;
        }
    };