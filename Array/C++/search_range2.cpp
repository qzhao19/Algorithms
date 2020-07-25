class Solution {
private:
    int lower_bound(vector<int> &nums, int target){
        int left = 0, right = nums.size() - 1;
        while (left <= right){
            int mid = (left + right) >> 1;
            if (nums[mid] < target){
                left = mid + 1;
            }else if (nums[mid] > target){
                right = mid - 1;
            }else if (nums[mid] == target){
                right = mid - 1;
            }
        }
        if (left >= nums.size() || target != nums[left]) return -1;
        return left;
    }

    int upper_bound(vector<int> &nums, int target){
        int left = 0, right = nums.size() - 1;
        while (left <= right){
            int mid = (left + right) >> 1;
            if (nums[mid] < target){
                left = mid + 1;
            }else if (nums[mid] > target){
                right = mid - 1;
            }else if (nums[mid] == target){
                left = mid + 1;
            }
        }

        if (right < 0 || target != nums[right]) return -1;

        return right;
        
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int left_bound = lower_bound(nums, target);
        int right_bound = upper_bound(nums, target);

        if (nums.empty()) return vector<int>{-1, -1};
        //if (left_bound == right_bound) return vector<int>{-1, -1};
        
        return vector<int>{left_bound, right_bound};
    }
};