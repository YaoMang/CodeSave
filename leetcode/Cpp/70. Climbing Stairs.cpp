class Solution {
    public:
        int climbStairs(int n) {
            vector<int> table;
            table.resize(n + 1);
            fill(table.begin(),table.end(), -1);
            return cb(n, table);
        }
    
        int cb(int n, vector<int>& table){
            if(n == 0){
                return 0;
            }
            else if(n == 1){
                return 1;
            }
            else if(n == 2){
                return 2;
            }
    
            // n > 2
            if(table[n] != -1){
                return table[n];
            }
            else{
                table[n] = cb(n - 1, table) + cb(n - 2, table);
                return table[n];
            }
        }
    };