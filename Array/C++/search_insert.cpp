class Solution1 {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for (int i = 0; i < nums.size(); i++){
            
            if (nums[i] >= target){
                return i;
            }
        }
        return nums.size();  
    }
};

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size() - 1;
        int mid, ans = nums.size();
        while (left <= right){
            mid = (left + right) >> 1;
            if (nums[mid] >= target){
                ans = min(mid, ans);
                right = mid - 1;
            }else{
                
                left = mid + 1;
            }  
        }
        
        return ans;
    }
};
