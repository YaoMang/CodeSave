// Brutal Solution
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

    // Two Pointer Solution
    class Solution {
        public:
            double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
                // Two Pointers
        
                // size of two arrays
                int sz_1 = nums1.size();
                int sz_2 = nums2.size();
                
                // pointer definiton
                int pos1 = 0, pos2 = 0, now = 0, prev = 0;
                for (int cnt = 0; cnt <= (sz_1 + sz_2) / 2; cnt++) {
                    prev = now;
                    // BOth of them still has nums
                    if (pos1 != sz_1 && pos2 != sz_2) {
                        if (nums1[pos1] <= nums2[pos2]) {
                            now = nums1[pos1];
                            pos1++;
                        }
                        else {
                            now = nums2[pos2];
                            pos2++;
                        }
                    }
                    else if (pos1 < sz_1) { // nums1 left
                        now = nums1[pos1];
                        pos1++;
                    }
                    else { // nums2 left
                        now = nums2[pos2];
                        pos2++;
                    }
                }
        
                if ((sz_1 + sz_2) % 2 == 1) {
                    return static_cast<double>(now);
                }
                else {
                    return (static_cast<double>(prev) + static_cast<double>(now)) / 2;
                }
            }
        };