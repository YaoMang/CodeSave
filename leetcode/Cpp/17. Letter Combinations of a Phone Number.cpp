class Solution {
    public:
        vector<string> letterCombinations(string digits) {
            vector<string> digitsToCha = {" ","","abc","def","ghi","jkl","mno","prqs","tuv","wxyz"}; // 数字映射表
            int offset = '0' - 0;
            vector<int> pressedButtons;
            for(auto& c : digits){
                int target = c - offset;
                pressedButtons.push_back(target); // 已经按下的数字
            }
    
            deque<string> possibleString;
            for(int i = 0; i < pressedButtons.size(); i++){
                if(possibleString.empty()){ // 当可能的输出为空
                    for(const auto& c : digitsToCha[pressedButtons[i]]){
                        string str;
                        possibleString.push_back(str + c); // 将对应的字符直接输出到答案队列中
                    }
                }
                else{ // 队列中已经有序列存在
                    string nowString;
                    nowString = possibleString.front();
                    while(nowString.size() == i){ // 取出的字符串长度等于目前的递归深度
                        possibleString.pop_front(); // 删除首位元素
                        for(const auto& c : digitsToCha[pressedButtons[i]]){ // 开始拼接字符串
                            possibleString.push_back(nowString + c);
                        }
                        nowString = possibleString.front(); // 对下一个字符串进行处理
                    }
                } 
            }
    
            vector<string> ret;
            for(const auto& str : possibleString){
                ret.push_back(str);
            }
    
            return ret;
        }
    };