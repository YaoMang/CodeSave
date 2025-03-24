// 使用标准库deque的解法

class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            deque<int> dpo;
            for(const auto& i : digits){
                dpo.push_back(i);
            }
    
            dpo.back()++;
    
            for(int i = dpo.size() - 1; i >= 0; i--){
                if(dpo[i] >= 10){ // 发生进位
                    if(i == 0){ // 需要进行位扩展
                        dpo.push_front(dpo[i] / 10);
                        i++;
                        dpo[i] %= 10;
                    }
                    else{ // 不需要位扩展
                        dpo[i - 1] += dpo[i] / 10;
                        dpo[i] %= 10;
                    }
                }
            }
    
            vector<int> ret;
            for(const auto& i : dpo){
                ret.push_back(i);
            }
    
            return ret;
        }
    };