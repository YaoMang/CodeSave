// 使用深度优先搜索，代码观感可以优化

class Solution {
    public:
        int numIslands(vector<vector<char>>& grid) {
            int ans = 0;
            for(int i = 0; i < grid.size(); i++){
                for(int j = 0; j < grid.front().size(); j++){
                    if(grid[i][j] == '1'){ // 注意grid中存储的值
                        dfs(grid, i, j);
                        ans++; // 每次成功进入dfs则加一个岛屿
                    }
                }
            }
            return ans;
        }
    
        void dfs(vector<vector<char>>& grid, int m, int n) { // 深度优先搜索
            if(inArea(m,n,grid)){ // 在区域内
                if(grid[m][n] == '1'){ // 目前所处格子为陆地
                    grid[m][n] = '2'; // 标记为已经访问
    
                    dfs(grid, m - 1, n);
                    dfs(grid, m + 1, n);
                    dfs(grid, m, n - 1);
                    dfs(grid, m, n + 1);
    
                    return;
                }
                else{
                    return;
                }
            }
            else{
                return;
            }
        }
    
        bool inArea(int m, int n, vector<vector<char>>& grid){
            if(m >= 0 && m < grid.size() && n >= 0 && n < grid.front().size()){
                return true;
            }
            return false;
        }
    };