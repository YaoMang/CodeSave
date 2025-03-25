class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            // 首先对行首使用二分查找
            // 寻找到的目标条件是 M[N][0] <= target < M[N + 1][0]
    
            int l,r,m;
            l = 0;
            r = matrix.size();
            // 夹出的值是[l,r)
            while(l < r - 1){
                m = l + (r - l) / 2;
                if(matrix[m][0] > target){ // 中点大于目标值
                    // 目标值一定在m左侧
                    r = m;
                }
                else{ // 中点小于或等于目标值
                    // 目标一定在中点或者中点之后
                    l = m;
                }
            }
            
            int row = l; // 得到应该开始寻找的行
            l = 0;
            r = matrix[row].size() - 1;
    
            // DEBUG
            for(const auto& i : matrix[row]){
                cout << i << " ";
            }
        
            while(l <= r){
                m = l + (r - l) / 2;
                if(matrix[row][m] < target){ // 目标在右侧
                    l = m + 1;
                }
                else if(matrix[row][m] > target){ // 目标在左侧
                    r = m - 1;
                }
                else{
                    return true;
                }
            }
            return false;
        }
    };