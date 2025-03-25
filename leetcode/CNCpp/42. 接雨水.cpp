class Solution {
    public:
        int trap(vector<int>& height) {
            vector<int> pre;
            vector<int> suf;
    
            pre.resize(height.size());
            suf.resize(height.size());
            int max = 0;
    
            for(int i = 0; i < height.size(); i++){
                if(max < height[i]){
                    max = height[i];
                }
                pre[i] = max;
            }
            max = 0;
            for(int i = height.size() - 1; i >= 0; i--){
                if(max < height[i]){
                    max = height[i];
                }
                suf[i] = max;
            }
    
            int sum = 0;
            for(int i = 0; i < height.size(); i++){
                int water = min(pre[i], suf[i]);
                if(water - height[i] > 0){
                    sum += water - height[i];
                }
            }
    
            return sum;
        }
    };