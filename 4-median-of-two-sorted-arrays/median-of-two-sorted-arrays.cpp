class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int ptr1 = 0, ptr2 = 0;
        vector<int> merge; 

        while (ptr1 < m && ptr2 < n) {
            if (nums1[ptr1] <= nums2[ptr2]) {
                merge.push_back(nums1[ptr1]);
                ptr1++;
            } else {
                merge.push_back(nums2[ptr2]);
                ptr2++;
            }
        }

        while (ptr1 < m) {
            merge.push_back(nums1[ptr1]);
            ptr1++;
        }

        while (ptr2 < n) {
            merge.push_back(nums2[ptr2]);
            ptr2++;
        }

        int o = merge.size();
        if (o % 2 == 0) {
            return (merge[o / 2] + merge[(o / 2) - 1]) / 2.0; 
        } else {
            return merge[o / 2];
        }
    }
};
