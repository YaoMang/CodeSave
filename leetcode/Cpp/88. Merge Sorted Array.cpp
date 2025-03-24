// 复制了一个数组

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            vector<int> nums3;
            nums3.resize(m);
    
            for(int i = 0; i < m; i++){
                nums3[i] = nums1[i];
            }
    
            auto it1 = nums1.begin();
            auto it3 = nums3.begin();
            auto it2 = nums2.begin();
    
            while(it3 != nums3.end() && it2 != nums2.end()){
                if(*it3 < *it2){
                    *it1 = *it3;
                    it3++;
                }
                else{
                    *it1 = *it2;
                    it2++;
                }
                it1++;
            }
    
            while(it3 != nums3.end()){
                *it1 = *it3;
                it1++;
                it3++;
            }
            while(it2 != nums2.end()){
                *it1 = *it2;
                it2++;
                it1++;
            }
        }
    };