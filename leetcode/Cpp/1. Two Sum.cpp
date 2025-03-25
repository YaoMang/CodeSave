// 这个算法是暴力匹配算法，其时间复杂度为O(n^2)

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

// 可以对数组排序，然后使用二分搜索，这时的时间复杂度为O(nlogn)

// 还可以使用哈希表，时间复杂度为O(n)
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, vector<int>> um;
            vector<int> pos;
            // 建立哈希表
            for(int i = 0; i < nums.size(); i++){
                um[nums[i]].push_back(i);
            }
    
            // 查找对应值
            for(const auto& i : nums){
                auto it = um.find(target - i);
                if(it != um.end()){ // 找到了对应的vecetor
                    if(target - i == i){ // 两值相等
                        if(it->second.size() == 2){ // 确定有两个这样的值是存在的
                            pos.push_back(it->second.front());
                            pos.push_back(it->second.back());
                            break;
                        }
                    }
                    else{ // 两值不等
                        pos.push_back(it->second.front());
                        pos.push_back(um[i].front());
                        break;
                    }
                }
            }
    
            return pos;
        }
    };