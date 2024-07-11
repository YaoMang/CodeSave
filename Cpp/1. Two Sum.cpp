#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int pos1 = 0;
        int pos2;
        
        for(auto& a : nums)
        {
            int expect = target - a;
            for(pos2 = pos1 + 1; pos2 < nums.size(); ++pos2)
            {
                if(nums[pos2] == expect)
                {
                    goto OUTLOOP;
                }
            }
            ++pos1;
        }

        OUTLOOP:
        return vector<int> {pos1, pos2};
    }
};