class Solution {
public:
    int search(vector<int>& nums, int target) {
        // get left and right idx
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right){
            # define the idx of middle element 
            int mid = left + (right - left) / 2;
            if (nums[mid] == target){
                return mid;
            }
            
            if (nums[mid] < nums[right]){
                if (nums[mid] < target && target <= nums[right]){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }else{
                if (nums[left] <= target && target < nums[mid]){
                    right = mid - 1;
                }else{
                    left = mid + 1;
                }   
            }      
        }
        return -1;
    }
};