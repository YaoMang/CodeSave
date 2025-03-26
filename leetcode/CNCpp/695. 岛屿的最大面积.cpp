// 深度优先搜索解决棋盘格的问题

class Solution {
    public:
        int maxAreaOfIsland(vector<vector<int>>& grid) {
            int maxArea = 0;
            for(int i = 0; i < grid.size(); i++){
                for(int j = 0; j < grid.front().size(); j++){
                    if(grid[i][j] == 1){ // 是还没有访问过的土地
                        int area = getArea(grid, i, j);
                        if(area > maxArea){
                            maxArea = area;
                        }
                    }
                }
            }
    
            return maxArea;
        }
    
        int getArea(vector<vector<int>>& grid, int m, int n){ // 得到某一个区域开始的岛屿面积
            if(inArea(grid, m, n)){ // 在区域内
                if(grid[m][n] == 1){ // 当前位置是岛屿
                    grid[m][n] = 2; // 标记为已经访问
    
                    int ret = 1;
                    ret += getArea(grid, m - 1, n);
                    ret += getArea(grid, m + 1, n);
                    ret += getArea(grid, m, n - 1);
                    ret += getArea(grid, m, n + 1);
                    return ret;
                }
                else{ // 当前位置不是岛屿
                    return 0;
                }
            }
            else{ // 位置超出有效范围
                return 0;
            }
        }
    
        bool inArea(vector<vector<int>>& grid, int m, int n){ // 判断是否在遍历区域内
            if(m >= 0 && m < grid.size() && n >= 0 && n < grid.front().size()){
                return true;
            }
            return false;
        }
    };