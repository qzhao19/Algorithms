class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    
        int n = nums.size();
        int left = 0, right = n - 1;
        int result = n;

        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            if (nums[mid] >= target) {
                result = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return result;
    }
};


