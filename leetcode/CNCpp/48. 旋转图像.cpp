class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            flip(matrix);
            At(matrix);
        }
    
        void flip(vector<vector<int>>& matrix){
            for(int j = 0; j < matrix.front().size(); j++){
                for(int i = 0; i < matrix.size() / 2; i++){
                    swap(matrix[i][j], matrix[matrix.size() - 1 - i][j]);
                }
            }
        }
    
        void At(vector<vector<int>>& matrix){
            for(int i = 0; i < matrix.size(); i++){ // 遍历行
                for(int j = i + 1; j < matrix.front().size(); j++){ // 从i + 1开始交换
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
    };