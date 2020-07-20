class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = 0;
        int min_val = INT_MAX;
        for (int i = 0; i < nums.size(); i++){
            
            
            min_val = min(nums[i], min_val);
        }
        return min_val;
    }
};
