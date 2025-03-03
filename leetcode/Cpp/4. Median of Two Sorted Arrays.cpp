class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            // Brute Force - Merge and Sort
            vector<int> merge;
            for(auto& i : nums1)
                merge.push_back(i);
            for(auto& i : nums2)
                merge.push_back(i);
            
            // Sort
            sort(merge.begin(), merge.end());
    
            // find the median
            if(merge.size() % 2){ // if odd
                return merge[merge.size() / 2];
            }
            else{
                return (static_cast<double>(merge[merge.size() / 2 - 1]) + merge[merge.size() / 2]) / 2;
            }
        }
    };