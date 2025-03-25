class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> pt;
            vector<int> last_layer;
    
            for(int i = 1; i <= numRows; i++){
                vector<int> cur(i, 1);
    
                for(int j = 1; j < i - 1; j++){
                    cur[j] = last_layer[j - 1] + last_layer[j];
                }
    
                pt.push_back(cur);
                last_layer = move(cur);
            }
    
            return pt;
        }
    };