class Solution {
public:
    int lowerBound(vector<int> &nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            if (nums[mid] > target) {
                right = mid - 1;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        if (left >= n || nums[left] != target) {
            return -1;
        }

        return left;
    }
   

    int upperBound(vector<int> &nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            if (nums[mid] > target) {
                right = mid - 1;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                left = mid + 1;
            }
        }

        if (right < 0 || nums[right] != target) {
            return -1;
        }

        return right;
    }


    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();
        if (n == 0) {
            return {-1, -1};
        }

        int lower_bound = lowerBound(nums, target);
        int upper_bound = upperBound(nums, target);

        if (lower_bound > upper_bound) {
            return {-1, -1};
        }

        vector<int> result = {lower_bound, upper_bound};

        return result;
    }
};