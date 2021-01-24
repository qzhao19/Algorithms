class Solution {
public:
    int findKthElement(vector<int> &nums1, int i, vector<int> &nums2, int j, int k) {
        if (i >= nums1.size()) {
            return nums2[j + k - 1];
        }

        if (j >= nums2.size()) {
            return nums1[i + k - 1];
        }

        if (k == 1) {
            return min(nums1[i], nums2[j]);
        }

        int mid_val1 = i + k/2 - 1 < nums1.size() ? nums1[i + k/2 - 1] : INT_MAX;
        int mid_val2 = j + k/2 - 1 < nums2.size() ? nums2[j + k/2 - 1] : INT_MAX;

        if (mid_val1 < mid_val2) {
            return findKthElement(nums1, i + k/2, nums2, j, k - k/2);
        }
        else {
            return findKthElement(nums1, i, nums2, j + k/2, k - k/2);
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        int total_len = len1 + len2;

        return (findKthElement(nums1, 0, nums2, 0, (total_len + 1) / 2) + findKthElement(nums1, 0, nums2, 0, (total_len + 2) / 2)) / 2.0;
    
    }
};