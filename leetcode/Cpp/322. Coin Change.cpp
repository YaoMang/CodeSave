// 动态规划
class Solution {
    public:
        int coinChange(vector<int>& coins, int amount) {
            vector<int> table;
            table.resize(amount + 1); // 设置数组大小
            fill(table.begin(), table.end(), -1); // 填充数组
    
            //初始化数组
            table[0] = 0;
            for(const auto& i : coins){
                if(i < table.size()){
                    table[i] = 1;
                }
            }
    
            // 开始进行遍历
            for(int i = 0; i < table.size(); i++){
                for(const auto& coin : coins){ // 对于每一种面额的硬币
                    if(coin <= i && table[i - coin] != -1){ // 硬币面额小于i且 i-coin可达时
                        if(table[i] == -1){
                            table[i] = table[i - coin] + 1;
                        }
                        else{
                            table[i] = min(table[i], table[i - coin] + 1);
                        }
                    }
                }
            }
            return table[amount];
        }
    };